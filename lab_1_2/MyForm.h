#pragma once
#include <math.h>

namespace lab_1_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ aBox;
	private: System::Windows::Forms::Label^ bBox;
	private: System::Windows::Forms::Label^ cBox;
	protected:


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ resultBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ process;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->aBox = (gcnew System::Windows::Forms::Label());
			this->bBox = (gcnew System::Windows::Forms::Label());
			this->cBox = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->process = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// aBox
			// 
			this->aBox->AutoSize = true;
			this->aBox->Location = System::Drawing::Point(19, 47);
			this->aBox->Name = L"aBox";
			this->aBox->Size = System::Drawing::Size(28, 16);
			this->aBox->TabIndex = 0;
			this->aBox->Text = L"a = ";
			// 
			// bBox
			// 
			this->bBox->AutoSize = true;
			this->bBox->Location = System::Drawing::Point(19, 79);
			this->bBox->Name = L"bBox";
			this->bBox->Size = System::Drawing::Size(28, 16);
			this->bBox->TabIndex = 1;
			this->bBox->Text = L"b = ";
			// 
			// cBox
			// 
			this->cBox->AutoSize = true;
			this->cBox->Location = System::Drawing::Point(19, 108);
			this->cBox->Name = L"cBox";
			this->cBox->Size = System::Drawing::Size(27, 16);
			this->cBox->TabIndex = 2;
			this->cBox->Text = L"c = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(70, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(70, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 5;
			// 
			// resultBox
			// 
			this->resultBox->Location = System::Drawing::Point(189, 44);
			this->resultBox->Multiline = true;
			this->resultBox->Name = L"resultBox";
			this->resultBox->Size = System::Drawing::Size(238, 80);
			this->resultBox->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(123, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Обчислити значеня функції";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(334, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Войцехівська Ольга";
			// 
			// process
			// 
			this->process->Location = System::Drawing::Point(177, 149);
			this->process->Name = L"process";
			this->process->Size = System::Drawing::Size(104, 23);
			this->process->TabIndex = 9;
			this->process->Text = L"Обчислити";
			this->process->UseVisualStyleBackColor = true;
			this->process->Click += gcnew System::EventHandler(this, &MyForm::process_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"f = ctg(c) + sqrt(c/b + a)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"a = 4, b = 3.2, c = 0.1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 217);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->process);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->resultBox);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->cBox);
			this->Controls->Add(this->bBox);
			this->Controls->Add(this->aBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// встановлення початкових значень a, b, c
	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "2";
		this->textBox2->Text = "3,2";
		this->textBox3->Text = "0,1";
		this->resultBox->AppendText("Лабораторна робота лінійні алгоритми\n");
	}
	// обчислення значеня функції
private: System::Void process_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, c, f;
	a = Convert::ToDouble(this->textBox1->Text);
	b = Convert::ToDouble(this->textBox2->Text);
	c = Convert::ToDouble(this->textBox3->Text);
	f = 1 / tan(c) + sqrt(c / b + a);
	this->resultBox->AppendText("\r\ny = " + f.ToString());
}
};
}
