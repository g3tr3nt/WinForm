#pragma once
#include "NewTourist.h";
#include "NewVipTourist.h"
#include "DeleteTourist.h"
#include "AboutCompany.h"
#include "AboutVipTourist.h"
#include "AboutTourist.h"
#include "DeleteVipTourists.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonDeleteTourist;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ buttonAboutCompany;

	private: System::Windows::Forms::Button^ buttonClose;

	private: System::Windows::Forms::Label^ IntroduceWord;

	private: System::Windows::Forms::Button^ buttonTourist;
	private: System::Windows::Forms::Button^ buttonVipTourist;
	private: System::Windows::Forms::Button^ buttonAboutTourist;
	private: System::Windows::Forms::Button^ buttonAboutVipTourist;
	private: System::Windows::Forms::Label^ labelAdd;
	private: System::Windows::Forms::Label^ labelShow;
	private: System::Windows::Forms::Button^ DeleteTourists;

	private: System::Windows::Forms::Button^ DeleteVipTourist;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteTourist = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonAboutCompany = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->IntroduceWord = (gcnew System::Windows::Forms::Label());
			this->buttonTourist = (gcnew System::Windows::Forms::Button());
			this->buttonVipTourist = (gcnew System::Windows::Forms::Button());
			this->buttonAboutTourist = (gcnew System::Windows::Forms::Button());
			this->buttonAboutVipTourist = (gcnew System::Windows::Forms::Button());
			this->labelAdd = (gcnew System::Windows::Forms::Label());
			this->labelShow = (gcnew System::Windows::Forms::Label());
			this->DeleteTourists = (gcnew System::Windows::Forms::Button());
			this->DeleteVipTourist = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Додати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// buttonDeleteTourist
			// 
			this->buttonDeleteTourist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteTourist->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->buttonDeleteTourist->Location = System::Drawing::Point(12, 62);
			this->buttonDeleteTourist->Name = L"buttonDeleteTourist";
			this->buttonDeleteTourist->Size = System::Drawing::Size(101, 43);
			this->buttonDeleteTourist->TabIndex = 2;
			this->buttonDeleteTourist->Text = L"Видалити";
			this->buttonDeleteTourist->UseVisualStyleBackColor = true;
			this->buttonDeleteTourist->Click += gcnew System::EventHandler(this, &Main::buttonDeleteTourist_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(12, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Показати інформацію";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// buttonAboutCompany
			// 
			this->buttonAboutCompany->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAboutCompany->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->buttonAboutCompany->Location = System::Drawing::Point(12, 159);
			this->buttonAboutCompany->Name = L"buttonAboutCompany";
			this->buttonAboutCompany->Size = System::Drawing::Size(101, 42);
			this->buttonAboutCompany->TabIndex = 4;
			this->buttonAboutCompany->Text = L"Про компанію";
			this->buttonAboutCompany->UseVisualStyleBackColor = true;
			this->buttonAboutCompany->Click += gcnew System::EventHandler(this, &Main::buttonAboutCompany_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->buttonClose->Location = System::Drawing::Point(12, 207);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(101, 33);
			this->buttonClose->TabIndex = 5;
			this->buttonClose->Text = L"Вихід";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Main::buttonClose_Click);
			// 
			// IntroduceWord
			// 
			this->IntroduceWord->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->IntroduceWord->Location = System::Drawing::Point(183, 25);
			this->IntroduceWord->Name = L"IntroduceWord";
			this->IntroduceWord->Size = System::Drawing::Size(367, 178);
			this->IntroduceWord->TabIndex = 7;
			this->IntroduceWord->Text = L"Вітаємо вас в туристичній компанії Paul Tour";
			this->IntroduceWord->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonTourist
			// 
			this->buttonTourist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTourist->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTourist->Location = System::Drawing::Point(170, 91);
			this->buttonTourist->Name = L"buttonTourist";
			this->buttonTourist->Size = System::Drawing::Size(158, 62);
			this->buttonTourist->TabIndex = 8;
			this->buttonTourist->Text = L"Додати туриста";
			this->buttonTourist->UseVisualStyleBackColor = true;
			this->buttonTourist->Click += gcnew System::EventHandler(this, &Main::buttonTourist_Click);
			// 
			// buttonVipTourist
			// 
			this->buttonVipTourist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonVipTourist->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonVipTourist->Location = System::Drawing::Point(361, 91);
			this->buttonVipTourist->Name = L"buttonVipTourist";
			this->buttonVipTourist->Size = System::Drawing::Size(158, 62);
			this->buttonVipTourist->TabIndex = 9;
			this->buttonVipTourist->Text = L"Додати віп туриста";
			this->buttonVipTourist->UseVisualStyleBackColor = true;
			this->buttonVipTourist->Click += gcnew System::EventHandler(this, &Main::buttonVipTourist_Click);
			// 
			// buttonAboutTourist
			// 
			this->buttonAboutTourist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAboutTourist->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAboutTourist->Location = System::Drawing::Point(170, 91);
			this->buttonAboutTourist->Name = L"buttonAboutTourist";
			this->buttonAboutTourist->Size = System::Drawing::Size(158, 62);
			this->buttonAboutTourist->TabIndex = 10;
			this->buttonAboutTourist->Text = L"Про туристів";
			this->buttonAboutTourist->UseVisualStyleBackColor = true;
			this->buttonAboutTourist->Click += gcnew System::EventHandler(this, &Main::buttonAboutTourist_Click);
			// 
			// buttonAboutVipTourist
			// 
			this->buttonAboutVipTourist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAboutVipTourist->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonAboutVipTourist->Location = System::Drawing::Point(361, 91);
			this->buttonAboutVipTourist->Name = L"buttonAboutVipTourist";
			this->buttonAboutVipTourist->Size = System::Drawing::Size(158, 62);
			this->buttonAboutVipTourist->TabIndex = 11;
			this->buttonAboutVipTourist->Text = L"Про віп туристів";
			this->buttonAboutVipTourist->UseVisualStyleBackColor = true;
			this->buttonAboutVipTourist->Click += gcnew System::EventHandler(this, &Main::buttonAboutVipTourist_Click);
			// 
			// labelAdd
			// 
			this->labelAdd->AutoSize = true;
			this->labelAdd->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAdd->Location = System::Drawing::Point(151, 43);
			this->labelAdd->Name = L"labelAdd";
			this->labelAdd->Size = System::Drawing::Size(384, 27);
			this->labelAdd->TabIndex = 12;
			this->labelAdd->Text = L"Виберіть кого саме ви хочете додати";
			// 
			// labelShow
			// 
			this->labelShow->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelShow->Location = System::Drawing::Point(151, 25);
			this->labelShow->Name = L"labelShow";
			this->labelShow->Size = System::Drawing::Size(384, 62);
			this->labelShow->TabIndex = 13;
			this->labelShow->Text = L"Виберіть про кого ви хочете дізнатись інформацію";
			this->labelShow->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DeleteTourists
			// 
			this->DeleteTourists->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteTourists->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteTourists->Location = System::Drawing::Point(170, 91);
			this->DeleteTourists->Name = L"DeleteTourists";
			this->DeleteTourists->Size = System::Drawing::Size(158, 62);
			this->DeleteTourists->TabIndex = 14;
			this->DeleteTourists->Text = L"Туриста";
			this->DeleteTourists->UseVisualStyleBackColor = true;
			this->DeleteTourists->Click += gcnew System::EventHandler(this, &Main::DeleteTourists_Click);
			// 
			// DeleteVipTourist
			// 
			this->DeleteVipTourist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteVipTourist->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteVipTourist->Location = System::Drawing::Point(361, 91);
			this->DeleteVipTourist->Name = L"DeleteVipTourist";
			this->DeleteVipTourist->Size = System::Drawing::Size(158, 62);
			this->DeleteVipTourist->TabIndex = 15;
			this->DeleteVipTourist->Text = L"Віп туриста";
			this->DeleteVipTourist->UseVisualStyleBackColor = true;
			this->DeleteVipTourist->Click += gcnew System::EventHandler(this, &Main::DeleteVipTourist_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(384, 62);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Виберіть кого ви хочете видалити";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(133, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2, 216);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(583, 248);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DeleteVipTourist);
			this->Controls->Add(this->DeleteTourists);
			this->Controls->Add(this->labelShow);
			this->Controls->Add(this->labelAdd);
			this->Controls->Add(this->buttonAboutVipTourist);
			this->Controls->Add(this->buttonAboutTourist);
			this->Controls->Add(this->buttonVipTourist);
			this->Controls->Add(this->buttonTourist);
			this->Controls->Add(this->IntroduceWord);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->buttonAboutCompany);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonDeleteTourist);
			this->Controls->Add(this->button1);
			this->Name = L"Main";
			this->Text = L"Меню";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Main::Main_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		buttonTourist->Visible = false;
		buttonVipTourist->Visible = false;
		buttonAboutTourist->Visible = false;
		buttonAboutVipTourist->Visible = false;
		DeleteTourists->Visible = false;
		DeleteVipTourist->Visible = false;
		label1->Visible = false;
		labelShow->Visible = false;
		labelAdd->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonTourist->Visible = true;
		buttonVipTourist->Visible = true;
		labelAdd->Visible = true;

		IntroduceWord->Visible = false;

		buttonAboutTourist->Visible = false;
		buttonAboutVipTourist->Visible = false;
		labelShow->Visible = false;

		DeleteTourists->Visible = false;
		DeleteVipTourist->Visible = false;
		label1->Visible = false;
	}
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDeleteTourist_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteTourists->Visible = true;
	DeleteVipTourist->Visible = true;
	label1->Visible = true;

	IntroduceWord->Visible = false;

	buttonTourist->Visible = false;
	buttonVipTourist->Visible = false;
	labelAdd->Visible = false;

	buttonAboutTourist->Visible = false;
	buttonAboutVipTourist->Visible = false;
	labelShow->Visible = false;

}
private: System::Void buttonTourist_Click(System::Object^ sender, System::EventArgs^ e) {
	NewTourist^ newForm = gcnew NewTourist;
	newForm->Show();
}
private: System::Void buttonVipTourist_Click(System::Object^ sender, System::EventArgs^ e) {
	NewVipTourist^ newForm = gcnew NewVipTourist;
	newForm->Show();
}
private: System::Void buttonAboutCompany_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutCompany^ newForm = gcnew AboutCompany();
	newForm->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonTourist->Visible = false;
	buttonVipTourist->Visible = false;
	labelAdd->Visible = false;

	IntroduceWord->Visible = false;

	buttonAboutTourist->Visible = true;
	buttonAboutVipTourist->Visible = true;
	labelShow->Visible = true;

	DeleteTourists->Visible = false;
	DeleteVipTourist->Visible = false;
	label1->Visible = false;
}
private: System::Void buttonAboutTourist_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutTourist^ newForm = gcnew AboutTourist();
	newForm->Show();
}
private: System::Void buttonAboutVipTourist_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutVipTourist^ newForm = gcnew AboutVipTourist();
	newForm->Show();
}
private: System::Void DeleteTourists_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteTourist^ newForm = gcnew DeleteTourist();
	newForm->Show();
}
private: System::Void DeleteVipTourist_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteVipTourists^ newForm = gcnew DeleteVipTourists();
	newForm->Show();
}
private: System::Void Main_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
};
}
