#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AboutTourist
	/// </summary>
	public ref class AboutTourist : public System::Windows::Forms::Form
	{
	public:
		AboutTourist(void)
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
		~AboutTourist()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ buttonShow;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonShowFile;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	protected:

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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->buttonShow = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonShowFile = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonShow
			// 
			this->buttonShow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShow->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonShow->Location = System::Drawing::Point(12, 208);
			this->buttonShow->Name = L"buttonShow";
			this->buttonShow->Size = System::Drawing::Size(140, 44);
			this->buttonShow->TabIndex = 2;
			this->buttonShow->Text = L"¬ивести турист≥в з масиву";
			this->buttonShow->UseVisualStyleBackColor = true;
			this->buttonShow->Click += gcnew System::EventHandler(this, &AboutTourist::buttonShow_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(279, 180);
			this->dataGridView1->TabIndex = 3;
			// 
			// buttonShowFile
			// 
			this->buttonShowFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShowFile->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonShowFile->Location = System::Drawing::Point(318, 208);
			this->buttonShowFile->Name = L"buttonShowFile";
			this->buttonShowFile->Size = System::Drawing::Size(140, 44);
			this->buttonShowFile->TabIndex = 8;
			this->buttonShowFile->Text = L"¬ивести турист≥в з файлу";
			this->buttonShowFile->UseVisualStyleBackColor = true;
			this->buttonShowFile->Click += gcnew System::EventHandler(this, &AboutTourist::buttonShowFile_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(318, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(284, 180);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// AboutTourist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 264);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->buttonShowFile);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonShow);
			this->Name = L"AboutTourist";
			this->Text = L"≤нформац≥€ про турист≥в";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonShow_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonShowFile_Click(System::Object^ sender, System::EventArgs^ e);
};
}
