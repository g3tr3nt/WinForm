#include "Tourist.h"
#include "TourCompany.h"
#include "NewTourist.h"
#include "DeleteTourist.h"
#include "AboutTourist.h"
#include "Main.h"
#include "VipTourist.h"

#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cstdlib> 
#include <ctime> 





vector<Tourist*> tourists;
Tourist* tourist = new Tourist();

string name;
string surname;
string email;
string country;
string Transport;
int duration;
int phone;
int age;
int price;
int ticket;

	 void setCommonTourists() {

		static int prices[6] = { 2500, 2000, 1500, 4000, 3500, 3000 };

		list<int> pricesList(prices, prices + sizeof(prices) / sizeof(prices[0]));


		plus<int> addition;
		addition(prices[3], prices[5]);

		multiplies<int> multiplication;
		multiplication(prices[1], 2);

		divides<int> division;
		division(prices[1], 2);

		greater<int> greater_than;
		greater_than(prices[2], prices[5]);

		less<int> less_than;
		less_than(prices[5], prices[6]);

		int Summary = accumulate(pricesList.begin(), pricesList.end(), 0);

		pricesList.sort();

		try
		{

			ofstream Tourists("��� �������.txt", ios::app);

			if (!Tourists) {
				throw std::runtime_error("������� �i������� ����� VipTourists.txt");
			}

			if (!tourist) {
				throw std::bad_alloc();
			}



			Tourists << "��'� " << name << endl;
			Tourists << "��i����� " << surname << endl;
			Tourists << "�i� " << age << endl;
			Tourists << "Email " << email << endl;
			Tourists << "���i����� ����� �������� " << phone << endl;
			Tourists << "����� " << country << endl;
			Tourists << "����i� �������i " << duration << " ��� " << endl;
			Tourists << "��������� " << Transport << endl;
			Tourists << "�i�� " << price << " ������� " << endl;
			Tourists << "����� ������ " << ticket << endl;
			Tourists << "============================= "  << endl;

			tourist->setName(name);
			tourist->setSurname(surname);
			tourist->setAge(age);
			tourist->setEmail(email);
			tourist->setPhone(phone);
			tourist->myCountry.setCountryName(country);
			tourist->myTrip.setDuration(duration);
			tourist->myTrip.setTransport(Transport);
			tourist->myTrip.setTripNum(ticket);
			tourist->myTrip.setPrice(price);

			Trip newTrip(country, duration, price, Transport);

			tourists.push_back(tourist);
			Tourists.close();
		}
		catch (const std::runtime_error& e) {
			System::Windows::Forms::MessageBox::Show("������� �������: " + gcnew System::String(e.what()));
		}
		catch (const std::bad_alloc& e) {
			System::Windows::Forms::MessageBox::Show("������� ������� ��� ���i����i ���'��i: " + gcnew System::String(e.what()));
		}
	}
	 void DeleteTourists(int A) {
		 

		 bool touristDeleted = false;
		 bool touristFoundInVector = false;

		 // �������� �������� ������� � ����� ������� ������ � ������
		 for (auto it = tourists.begin(); it != tourists.end(); ++it) {
			 if ((*it)->myTrip.getTripNum() == A) {
				 delete* it; // ��������� ��'��� � ���'��i
				 tourists.erase(it); // ��������� ����i���� � �������
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

			 remove("��� �������.txt");
			 rename("temp.txt", "��� �������.txt");

			 if (!touristFoundInFile) {
				 MessageBoxA(NULL, "������� �� �������� � ����.", "�������", MB_OK | MB_ICONERROR);
			 }
			 else {
				 MessageBoxA(NULL, "������ ������ ���������.", "����", MB_OK | MB_ICONINFORMATION);
			 }
		 }
	 }

	 System::Void Project1::NewTourist::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
	 {
		 
		 String^ names = textBoxName->Text;
		 String^ surnames = textBoxSurname->Text;
		 int ages = Convert::ToInt32(listBox1->SelectedItem);
		 int phoneNumbers = Convert::ToInt32(textBoxNum->Text);
		 String^ travelCountrys = textBoxCountry->Text;
		 String^ transports = textBoxTransport->Text;
		 int tripDurations = Convert::ToInt32(numericUpDown1->Text);
		 String^ emails = textBoxEmail->Text;
		 int pricess = Convert::ToInt32(textBoxPrices->Text);

		 srand(static_cast<unsigned int>(time(0)));

		 name = marshal_as<string>(names);
		 surname = marshal_as<string>(surnames);
		 age = ages;
		 phone = phoneNumbers;
		 country = marshal_as<string>(travelCountrys);
		 Transport = marshal_as<string>(transports);
		 duration = tripDurations;
		 email = marshal_as<string>(emails);
		 price = pricess;
		 int tickets = rand() % 10000 + 1;
		 ticket = tickets;

		 setCommonTourists();

		 // �������� ���������� ���� ������ �����
		 textBoxName->Clear();
		 textBoxSurname->Clear();
		 textBoxNum->Clear();
		 textBoxCountry->Clear();
		 textBoxTransport->Clear();
		 textBoxEmail->Clear();
		 textBoxPrices->Clear();




		 // ��������� ��� ������� �����
		 MessageBox::Show("��� ������ �������� � ����! " + "����� ������: " + tickets);
	 }


	 System::Void Project1::DeleteTourist::buttonDelete_Click(System::Object ^ sender, System::EventArgs ^ e)
	 {
		 int tripNumberToDelete = System::Convert::ToInt32(textBoxTicketNumber->Text);
		 DeleteTourists(tripNumberToDelete);
	 }
	 System::Void Project1::AboutTourist::buttonShow_Click(System::Object^ sender, System::EventArgs^ e)
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
		 table->Columns->Add("Price", System::Type::GetType("System.Double"));
		 table->Columns->Add("Ticket", System::Type::GetType("System.Int32"));

		 for (Tourist* tourist : tourists) {
			 System::Data::DataRow^ row = table->NewRow();
			 row["Name"] = gcnew System::String(tourist->getName().c_str());
			 row["Surname"] = gcnew System::String(tourist->getSurname().c_str());
			 row["Email"] = gcnew System::String(tourist->getEmail().c_str());
			 row["Country"] = gcnew System::String(tourist->myCountry.getCountryName().c_str());
			 row["Transport"] = gcnew System::String(tourist->myTrip.getTransport().c_str());
			 row["Duration"] = tourist->myTrip.getDuration();
			 row["Phone"] = tourist->getPhone();
			 row["Age"] = tourist->getAge();
			 row["Price"] = tourist->myTrip.getPrice(); 
			 row["Ticket"] = tourist->myTrip.getTripNum();
			 table->Rows->Add(row);
		 }

		 dataGridView1->DataSource = table;
	 }

	 System::Void Project1::AboutTourist::buttonShowFile_Click(System::Object^ sender, System::EventArgs^ e)
	 {
		 System::IO::StreamReader^ file = gcnew System::IO::StreamReader("��� �������.txt", System::Text::Encoding::GetEncoding(1251));
		 System::String^ line;

		 // �������� ����� RichTextBox ����� ���������� ����� �����
		 richTextBox1->Clear();

		 while ((line = file->ReadLine()) != nullptr) {
			 // ��������� ����� �� RichTextBox
			 richTextBox1->AppendText(line + "\n");
		 }

		 file->Close();

	 }

	 System::Void Project1::Main::buttonClose_Click(System::Object^ sender, System::EventArgs^ e)
	 {
		 tourists.clear();
		 this->Close();
	 }
