#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AboutCompany
	/// </summary>
	public ref class AboutCompany : public System::Windows::Forms::Form
	{
	public:
		AboutCompany(void)
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
		~AboutCompany()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CompanyName;
	protected:
	private: System::Windows::Forms::Label^ CompanyNum;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Email;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonClose;

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
			this->CompanyName = (gcnew System::Windows::Forms::Label());
			this->CompanyNum = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CompanyName
			// 
			this->CompanyName->AutoSize = true;
			this->CompanyName->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CompanyName->Location = System::Drawing::Point(44, 27);
			this->CompanyName->Name = L"CompanyName";
			this->CompanyName->Size = System::Drawing::Size(122, 21);
			this->CompanyName->TabIndex = 0;
			this->CompanyName->Text = L"Назва компанії:";
			// 
			// CompanyNum
			// 
			this->CompanyNum->AutoSize = true;
			this->CompanyNum->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CompanyNum->Location = System::Drawing::Point(163, 61);
			this->CompanyNum->Name = L"CompanyNum";
			this->CompanyNum->Size = System::Drawing::Size(143, 21);
			this->CompanyNum->TabIndex = 1;
			this->CompanyNum->Text = L"+380935245785";
			this->CompanyNum->Click += gcnew System::EventHandler(this, &AboutCompany::CompanyNum_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(163, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Paul Tour";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Номер телефону:";
			this->label2->Click += gcnew System::EventHandler(this, &AboutCompany::label2_Click);
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->Location = System::Drawing::Point(93, 96);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(73, 21);
			this->Email->TabIndex = 4;
			this->Email->Text = L"E-mail:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(163, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"paltour@gmail.com";
			this->label3->Click += gcnew System::EventHandler(this, &AboutCompany::label3_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->buttonClose->Location = System::Drawing::Point(260, 128);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(101, 33);
			this->buttonClose->TabIndex = 6;
			this->buttonClose->Text = L"Закрити";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &AboutCompany::buttonClose_Click);
			// 
			// AboutCompany
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 173);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CompanyNum);
			this->Controls->Add(this->CompanyName);
			this->Name = L"AboutCompany";
			this->Text = L"Про компанію";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CompanyNum_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
