#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <msclr/marshal_cppstd.h> 

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;
	/// <summary>
	/// Сводка для NewVipTourist
	/// </summary>
	public ref class NewVipTourist : public System::Windows::Forms::Form
	{
	public:
		NewVipTourist(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~NewVipTourist()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBoxEmail;
	protected:

	public: System::Windows::Forms::TextBox^ textBoxTransport;
	public: System::Windows::Forms::TextBox^ textBoxCountry;
	public: System::Windows::Forms::TextBox^ textBoxNum;

	public: System::Windows::Forms::TextBox^ textBoxSurname;
	public: System::Windows::Forms::TextBox^ textBoxName;
	public: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Label^ label9;
	public:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelInfo;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ListBox^ listBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTransport = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCountry = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxEmail->Location = System::Drawing::Point(131, 406);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(158, 30);
			this->textBoxEmail->TabIndex = 52;
			this->textBoxEmail->TextChanged += gcnew System::EventHandler(this, &NewVipTourist::textBoxEmail_TextChanged);
			// 
			// textBoxTransport
			// 
			this->textBoxTransport->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTransport->Location = System::Drawing::Point(131, 303);
			this->textBoxTransport->Name = L"textBoxTransport";
			this->textBoxTransport->Size = System::Drawing::Size(158, 30);
			this->textBoxTransport->TabIndex = 50;
			this->textBoxTransport->TextChanged += gcnew System::EventHandler(this, &NewVipTourist::textBoxTransport_TextChanged);
			// 
			// textBoxCountry
			// 
			this->textBoxCountry->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCountry->Location = System::Drawing::Point(131, 248);
			this->textBoxCountry->Name = L"textBoxCountry";
			this->textBoxCountry->Size = System::Drawing::Size(158, 30);
			this->textBoxCountry->TabIndex = 49;
			this->textBoxCountry->TextChanged += gcnew System::EventHandler(this, &NewVipTourist::textBoxCountry_TextChanged);
			// 
			// textBoxNum
			// 
			this->textBoxNum->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNum->Location = System::Drawing::Point(131, 197);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(158, 30);
			this->textBoxNum->TabIndex = 48;
			this->textBoxNum->TextChanged += gcnew System::EventHandler(this, &NewVipTourist::textBoxNum_TextChanged);
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSurname->Location = System::Drawing::Point(133, 114);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(156, 30);
			this->textBoxSurname->TabIndex = 46;
			this->textBoxSurname->TextChanged += gcnew System::EventHandler(this, &NewVipTourist::textBoxSurname_TextChanged);
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(133, 73);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(156, 30);
			this->textBoxName->TabIndex = 45;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &NewVipTourist::textBoxName_TextChanged);
			// 
			// buttonAdd
			// 
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(131, 442);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(158, 62);
			this->buttonAdd->TabIndex = 44;
			this->buttonAdd->Text = L"Додати туриста";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &NewVipTourist::buttonAdd_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(48, 403);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 33);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Емейл";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &NewVipTourist::label9_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(5, 333);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 62);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Тривалість поїздки";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label7->Click += gcnew System::EventHandler(this, &NewVipTourist::label7_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-1, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 33);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Транспорт";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &NewVipTourist::label6_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-43, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 56);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Країну для подорожі";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label5->Click += gcnew System::EventHandler(this, &NewVipTourist::label5_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 55);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Номер телефону";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Click += gcnew System::EventHandler(this, &NewVipTourist::label4_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(74, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 33);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Вік";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &NewVipTourist::label3_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 33);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Прізвище";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &NewVipTourist::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(74, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 33);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Ім\'я";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &NewVipTourist::label1_Click);
			// 
			// labelInfo
			// 
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInfo->Location = System::Drawing::Point(126, 9);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(179, 60);
			this->labelInfo->TabIndex = 35;
			this->labelInfo->Text = L"Введіть потрібну інформацію";
			this->labelInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelInfo->Click += gcnew System::EventHandler(this, &NewVipTourist::labelInfo_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(133, 354);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(82, 30);
			this->numericUpDown1->TabIndex = 53;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 27;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(53) {
				L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60",
					L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70"
			});
			this->listBox1->Location = System::Drawing::Point(131, 154);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(158, 31);
			this->listBox1->TabIndex = 56;
			// 
			// NewVipTourist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 525);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBoxEmail);
			this->Controls->Add(this->textBoxTransport);
			this->Controls->Add(this->textBoxCountry);
			this->Controls->Add(this->textBoxNum);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelInfo);
			this->Name = L"NewVipTourist";
			this->Text = L"Додати нового віп туриста";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSurname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxAge_TextChanged(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void textBoxNum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxCountry_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxTransport_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxDuration_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelInfo_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
