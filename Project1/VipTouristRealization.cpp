

#include "VipTourist.h"
#include "NewVipTourist.h"
#include "DeleteVipTourists.h"
#include <Windows.h>
#include "Main.h"
#include "AboutVipTourist.h"

vector<Tourist*> Viptourists;
VipTourist* vipTourist = new VipTourist();

string Names;
string Surname;
string Email;
string Country;
string transport;
int Duration;
int Phone;
int Age;
int Ticket;

void setVipTourists() {
    try {

        ofstream vipTourists("��� �� �������.txt", ios::app);


        if (!vipTourists) {
            throw std::runtime_error("������� �i������� ����� VipTourists.txt");
        }


        if (!vipTourist) {
            throw std::bad_alloc();
        }


        vipTourists << "��'� " << Names << endl;
        vipTourists << "��i����� " << Surname << endl;
        vipTourists << "�i� " << Age << endl;
        vipTourists << "Email " << Email << endl;
        vipTourists << "���i����� ����� �������� " << Phone << endl;
        vipTourists << "����� " << Country << endl;
        vipTourists << "����i� �������i " << Duration << " ��� " << endl;
        vipTourists << "��������� " << transport << endl;
        vipTourists << "����� ������ " << Ticket << endl;
        vipTourists << "============================= " << endl;
       

        vipTourist->setName(Names);
        vipTourist->setSurname(Surname);
        vipTourist->setAge(Age);
        vipTourist->setEmail(Email);
        vipTourist->setPhone(Phone);
        vipTourist->myCountry.setCountryName(Country);
        vipTourist->myTrip.setDuration(Duration);
        vipTourist->myTrip.setTransport(transport);
        vipTourist->myTrip.setTripNum(Ticket);


        Viptourists.push_back(vipTourist);
        vipTourists.close();
    }
    catch (const std::runtime_error& e) {
        System::Windows::Forms::MessageBox::Show("������� �������: " + gcnew System::String(e.what()));
    }
    catch (const std::bad_alloc& e) {
        System::Windows::Forms::MessageBox::Show("������� ������� ��� ���i����i ���'��i: " + gcnew System::String(e.what()));
    }
}

System::Void Project1::NewVipTourist::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{

    String^ names = textBoxName->Text;
    String^ surnames = textBoxSurname->Text;
    int ages = Convert::ToInt32(listBox1->SelectedItem);
    int phoneNumbers = Convert::ToInt32(textBoxNum->Text);
    String^ travelCountrys = textBoxCountry->Text;
    String^ transports = textBoxTransport->Text;
    int tripDurations = Convert::ToInt32(numericUpDown1->Text);
    String^ emails = textBoxEmail->Text;
    


    srand(static_cast<unsigned int>(time(0)));

    int ticketss = rand() % 10000 + 1;

    Names = marshal_as<string>(names);
    Surname = marshal_as<string>(surnames);
    Age = ages;
    Phone = phoneNumbers;
    Country = marshal_as<string>(travelCountrys);
    transport = marshal_as<string>(transports);
    Duration = tripDurations;
    Email = marshal_as<string>(emails);
    Ticket = ticketss;


    setVipTourists();


    textBoxName->Clear();
    textBoxSurname->Clear();

    textBoxNum->Clear();
    textBoxCountry->Clear();
    textBoxTransport->Clear();
    textBoxEmail->Clear();




    MessageBox::Show("��� ������ �������� � ����! " + "����� ������: " + ticketss);


}
void DeleteVipTourist(int A) {


    bool touristDeleted = false;
    bool touristFoundInVector = false;

    // �������� �������� ������� � ����� ������� ������ � ������
    for (auto it = Viptourists.begin(); it != Viptourists.end(); ++it) {
        if ((*it)->myTrip.getTripNum() == A) {
            delete* it; // ��������� ��'��� � ���'��i
            Viptourists.erase(it); // ��������� ����i���� � �������
            MessageBoxA(NULL, "������ ������ ���������.", "����", MB_OK | MB_ICONINFORMATION);
            touristDeleted = true;
            touristFoundInVector = true;
            break;
        }
    }
    bool touristFoundInFile = false;
    // ���� ������ �� ��������� � ������, ���������� � ����
    if (!touristFoundInVector) {
        std::ifstream inputFile("��� �������.txt");
        std::ofstream tempFile("temp.txt", std::ios::app);

        std::string line;
        while (std::getline(inputFile, line)) {
            size_t pos = line.find("����� ������:");
            if (pos != std::string::npos) {
                int ticketNumber = std::stoi(line.substr(pos + 14)); // ������� ����� ������
                if (ticketNumber != A) {
                    tempFile << line << std::endl;
                }
                else {
                    touristFoundInFile = true;
                }
            }
        }
        inputFile.close();
        tempFile.close();

        remove("��� �� �������.txt");
        rename("temp.txt", "��� �� �������.txt");

        if (!touristFoundInFile) {
            MessageBoxA(NULL, "������� �� �������� � ����.", "�������", MB_OK | MB_ICONERROR);
        }
        else {
            MessageBoxA(NULL, "������ ������ ���������.", "����", MB_OK | MB_ICONINFORMATION);
        }
    }

}


System::Void Project1::DeleteVipTourists::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    int tripNumberToDelete = System::Convert::ToInt32(textBoxTicketNumber->Text);
    DeleteVipTourist(tripNumberToDelete);
}
System::Void Project1::AboutVipTourist::buttonShow_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Data::DataTable^ table = gcnew System::Data::DataTable();
    // ��������� �������� �� DataTable
    table->Columns->Add("Name", System::Type::GetType("System.String"));
    table->Columns->Add("Surname", System::Type::GetType("System.String"));
    table->Columns->Add("Email", System::Type::GetType("System.String"));
    table->Columns->Add("Country", System::Type::GetType("System.String"));
    table->Columns->Add("Transport", System::Type::GetType("System.String"));
    table->Columns->Add("Duration", System::Type::GetType("System.Int32"));
    table->Columns->Add("Phone", System::Type::GetType("System.Int32"));
    table->Columns->Add("Age", System::Type::GetType("System.Int32"));
    table->Columns->Add("Ticket", System::Type::GetType("System.Int32"));

    for (Tourist* vipTourist : Viptourists) {
        System::Data::DataRow^ row = table->NewRow();
        row["Name"] = gcnew System::String(vipTourist->getName().c_str());
        row["Surname"] = gcnew System::String(vipTourist->getSurname().c_str());
        row["Email"] = gcnew System::String(vipTourist->getEmail().c_str());
        row["Country"] = gcnew System::String(vipTourist->myCountry.getCountryName().c_str());
        row["Transport"] = gcnew System::String(vipTourist->myTrip.getTransport().c_str());
        row["Duration"] = vipTourist->myTrip.getDuration();
        row["Phone"] = vipTourist->getPhone();
        row["Age"] = vipTourist->getAge();
        row["Ticket"] = vipTourist->myTrip.getTripNum();
        table->Rows->Add(row);
    }

    dataGridView1->DataSource = table;
}

System::Void Project1::AboutVipTourist::buttonShowFile_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::IO::StreamReader^ file = gcnew System::IO::StreamReader("��� �� �������.txt", System::Text::Encoding::GetEncoding(1251));
    System::String^ line;

    // �������� ����� RichTextBox ����� ���������� ����� �����
    richTextBox1->Clear();

    while ((line = file->ReadLine()) != nullptr) {
        // ��������� ����� �� RichTextBox
        richTextBox1->AppendText(line + "\n");
    }

    file->Close();

}

System::Void Project1::Main::Main_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    Viptourists.clear();
}