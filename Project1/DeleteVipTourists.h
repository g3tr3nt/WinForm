#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <msclr/marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	/// <summary>
	/// —водка дл€ DeleteVipTourists
	/// </summary>
	public ref class DeleteVipTourists : public System::Windows::Forms::Form
	{
	public:
		DeleteVipTourists(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~DeleteVipTourists()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonDelete;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxTicketNumber;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTicketNumber = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonDelete
			// 
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->buttonDelete->Location = System::Drawing::Point(109, 104);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(101, 33);
			this->buttonDelete->TabIndex = 9;
			this->buttonDelete->Text = L"¬идалити";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &DeleteVipTourists::buttonDelete_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 27);
			this->label1->TabIndex = 8;
			this->label1->Text = L"¬вед≥ть номер квитка";
			// 
			// textBoxTicketNumber
			// 
			this->textBoxTicketNumber->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTicketNumber->Location = System::Drawing::Point(84, 60);
			this->textBoxTicketNumber->Name = L"textBoxTicketNumber";
			this->textBoxTicketNumber->Size = System::Drawing::Size(154, 39);
			this->textBoxTicketNumber->TabIndex = 7;
			// 
			// DeleteVipTourists
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(331, 149);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxTicketNumber);
			this->Name = L"DeleteVipTourists";
			this->Text = L"¬идалити в≥п туриста";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
