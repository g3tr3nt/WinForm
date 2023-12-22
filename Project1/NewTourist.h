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
	/// Сводка для NewTourist
	/// </summary>
	public ref class NewTourist : public System::Windows::Forms::Form
	{
	public:
		NewTourist(void)
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
		~NewTourist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelInfo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;

	public: System::Windows::Forms::Button^ buttonAdd;
	public: System::Windows::Forms::TextBox^ textBoxName;
	public: System::Windows::Forms::TextBox^ textBoxSurname;

	public: System::Windows::Forms::TextBox^ textBoxNum;
	public: System::Windows::Forms::TextBox^ textBoxCountry;
	public: System::Windows::Forms::TextBox^ textBoxTransport;

	public: System::Windows::Forms::TextBox^ textBoxEmail;
	public: System::Windows::Forms::TextBox^ textBoxPrices;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ListBox^ listBox1;
	public:












	protected:

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
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCountry = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTransport = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrices = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelInfo
			// 
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInfo->Location = System::Drawing::Point(137, 6);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(182, 60);
			this->labelInfo->TabIndex = 14;
			this->labelInfo->Text = L"Введіть потрібну інформацію";
			this->labelInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(92, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 33);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Ім\'я";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &NewTourist::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 33);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Прізвище";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(92, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 33);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Вік";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Location = System::Drawing::Point(31, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 74);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Номер телефону";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-3, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 61);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Країну для подорожі";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 416);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 33);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Транспорт";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 66);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Тривалість поїздки";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(65, 317);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 33);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Емейл";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAdd
			// 
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(151, 505);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(158, 62);
			this->buttonAdd->TabIndex = 25;
			this->buttonAdd->Text = L"Додати туриста";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &NewTourist::buttonAdd_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->Location = System::Drawing::Point(151, 69);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(158, 35);
			this->textBoxName->TabIndex = 26;
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSurname->Location = System::Drawing::Point(151, 111);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(158, 35);
			this->textBoxSurname->TabIndex = 26;
			// 
			// textBoxNum
			// 
			this->textBoxNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxNum->Location = System::Drawing::Point(151, 202);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(158, 35);
			this->textBoxNum->TabIndex = 28;
			// 
			// textBoxCountry
			// 
			this->textBoxCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCountry->Location = System::Drawing::Point(151, 269);
			this->textBoxCountry->Name = L"textBoxCountry";
			this->textBoxCountry->Size = System::Drawing::Size(158, 35);
			this->textBoxCountry->TabIndex = 29;
			// 
			// textBoxTransport
			// 
			this->textBoxTransport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTransport->Location = System::Drawing::Point(151, 414);
			this->textBoxTransport->Name = L"textBoxTransport";
			this->textBoxTransport->Size = System::Drawing::Size(158, 35);
			this->textBoxTransport->TabIndex = 30;
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxEmail->Location = System::Drawing::Point(151, 315);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(158, 35);
			this->textBoxEmail->TabIndex = 32;
			// 
			// textBoxPrices
			// 
			this->textBoxPrices->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPrices->Location = System::Drawing::Point(151, 455);
			this->textBoxPrices->Name = L"textBoxPrices";
			this->textBoxPrices->Size = System::Drawing::Size(158, 35);
			this->textBoxPrices->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(66, 455);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 33);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Ціна";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(151, 373);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(106, 30);
			this->numericUpDown1->TabIndex = 54;
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
			this->listBox1->Location = System::Drawing::Point(151, 155);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(158, 31);
			this->listBox1->TabIndex = 55;
			// 
			// NewTourist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 591);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxPrices);
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
			this->Name = L"NewTourist";
			this->Text = L"Додати нового туриста";
			this->Load += gcnew System::EventHandler(this, &NewTourist::NewTourist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {


















}
private: System::Void NewTourist_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
};
}
