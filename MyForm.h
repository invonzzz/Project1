#include "Header.h"
#pragma once

namespace InvForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		MyForm(void)
		{
			InitializeComponent();
			String^ fileName = "db.txt";

			StreamReader^ din = File::OpenText(fileName);
			String^ str;
			String^ str1 = "";
			String^ str2 = "";
			String^ str3 = "";
			String^ str4 = "";
			int count = 0;
			while (!din->EndOfStream)
			{
				str1 = din->ReadLine();
				str2 = din->ReadLine();
				str3 = din->ReadLine();
				str4 = din->ReadLine();
				
				this->dataGridView1->Rows->Add(str1, str2);
				if (Convert::ToInt32(str3) == 1) dataGridView1->Rows[count]->DefaultCellStyle->BackColor = Color::Green;
				if (Convert::ToInt32(str4) == 1) dataGridView1->Rows[count]->DefaultCellStyle->BackColor = Color::Red;
				count++;
			}
			din->Close();


		}

	public:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	public:


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:



	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			
			if (components)
			{

				delete components;
			}
		}

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(993, 375);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Имя";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 550;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Дата";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(473, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Удалить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(392, 405);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 428);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 468);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(379, 434);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(184, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Задача завершена";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(627, 433);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 533);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int a = dataGridView1->CurrentRow->Index;
		dataGridView1->Rows->Remove(dataGridView1->Rows[a]);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->textBox1->Text;
	String^ data = this->textBox2->Text;
	this->dataGridView1->Rows->Add(name, data);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = dataGridView1->CurrentRow->Index;
	dataGridView1->Rows[a]->DefaultCellStyle->BackColor = Color::Green;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "db.txt";

	StreamWriter^ sw = gcnew StreamWriter(fileName);
	for (int i = 0; i < this->dataGridView1->Rows->Count; i++)
	{
		sw->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value);
		sw->WriteLine(dataGridView1->Rows[i]->Cells[1]->Value);
		if (this->dataGridView1->Rows[i]->DefaultCellStyle->BackColor == Color::Green)sw->WriteLine(Convert::ToInt32(1));
		else sw->WriteLine(Convert::ToInt32(0));
		if (this->dataGridView1->Rows[i]->DefaultCellStyle->BackColor == Color::Red)sw->WriteLine(Convert::ToInt32(1));
		else sw->WriteLine(Convert::ToInt32(0));

	}

	sw->Close();
}
};
}
