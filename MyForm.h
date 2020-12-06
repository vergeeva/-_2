#pragma once
#include "Header.h"


namespace ТСИСА2 {

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
			//
			//TODO: добавьте код конструктора
			//
			obj = gcnew OBJECT();
			prop = gcnew OBJECT();

		}

	protected:
		OBJECT^ prop;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
		OBJECT^ obj;
	private: System::Windows::Forms::ListBox^ listBox3;
	protected:
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
		   Bool_Matrix^ c;
		void Look_Matrix(OBJECT^ a, OBJECT^ b, Bool_Matrix^ c, System::Windows::Forms:: DataGridView^ DGV)
		{
			//a - object
			//b - property
			DGV->ColumnCount = a->Len + 1;
			DGV->RowCount = b->Len + 1;
			DGV->Rows[0]->Cells[0]->Value = "";
			for (int i = 1; i <= b->Len; i++)
			{
				DGV->Rows[i]->Cells[0]->Value = b->O[i-1];
			}
			for (int i = 1; i <= a->Len; i++)
			{
				DGV->Rows[0]->Cells[i]->Value = a->O[i-1];
			}

			for (int i = 1; i <= b->Len; i++)
			{
				for (int j = 1; j <= a->Len; j++)
				{
					DGV->Rows[i]->Cells[j]->Value = c->m[i-1][j-1];
				}
			}

		}

		void Look_Objects(String ^ o, OBJECT^ a, OBJECT^ b, Bool_Matrix^ c, System::Windows::Forms::ListBox^LB)
		{
			LB->Items->Clear();
			int i = b->find(o);
			for (int j = 0; j < a->Len; j++)
			{
				if (c->m[i][j] == 1)
				{

					LB->Items->Add(a->O[j]);
				}
			}
		}

		String^ Random_Obj(String^ o, OBJECT^ a, OBJECT^ b, Bool_Matrix^ c)
		{
			OBJECT^ temp = gcnew OBJECT();
			int i = b->find(o);
			for (int j = 0; j < a->Len; j++)
			{
				if (c->m[i][j] == 1)
				{
					temp->Add(a->O[j]);
				}
			}
			return temp->Random_Object();
		}

		String^ Random_Prop(String^ o, OBJECT^ a, OBJECT^ b, Bool_Matrix^ c)
		{
			OBJECT^ temp = gcnew OBJECT();
			int j = a->find(o);
			for (int i = 0; i < b->Len; i++)
			{
				if (c->m[i][j] == 1)
				{
					temp->Add(b->O[i]);
				}
			}
			return temp->Random_Object();
		}

		void Look_Properties(String^ o, OBJECT^ a, OBJECT^ b, Bool_Matrix^ c, System::Windows::Forms::ListBox^ LB)
		{
			LB->Items->Clear();
			int j = a->find(o);
			for (int i = 0; i < b->Len; i++)
			{
				if (c->m[i][j] == 1)
				{
					LB->Items->Add(b->O[i]);
				}
			}
		}

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::ComboBox^ comboBox2;

	protected:
		Boolean^ Matr;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(964, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(376, 163);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавить/Удалить";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(259, 81);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(79, 21);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Объект";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(259, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 21);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->Text = L"Свойство";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 27);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Объект";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Свойство";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(79, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->listBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(528, 424);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(386, 154);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Случайный выбор объекта";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(190, 29);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(190, 68);
			this->listBox3->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(198, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Все свойства объекта:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(75, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Случайное свойство объекта:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(78, 120);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 22);
			this->textBox4->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 27);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Сгенерировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(17, 32);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 22);
			this->textBox3->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(6, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(203, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Объекты с этим свойством:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->listBox2);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Location = System::Drawing::Point(255, 420);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(240, 158);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выберите свойство";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(6, 79);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(228, 68);
			this->listBox2->TabIndex = 16;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->listBox4);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Location = System::Drawing::Point(964, 200);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(284, 253);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Случайный выбор свойства";
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(6, 154);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(272, 84);
			this->listBox4->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Все объекты свойства:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(200, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Случайный объект свойства:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(17, 97);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(201, 22);
			this->textBox5->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(17, 32);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(201, 22);
			this->textBox6->TabIndex = 6;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->listBox1);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->comboBox2);
			this->groupBox5->Location = System::Drawing::Point(12, 420);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(220, 154);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Выберите объект";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(6, 79);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(208, 68);
			this->listBox1->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(171, 17);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Свойства этого объекта:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(6, 28);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(184, 24);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(944, 412);
			this->dataGridView1->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1374, 595);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Свойства и объекты";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		obj->Take_from("Объекты.txt");
		prop->Take_from("Свойства.txt");
		c = gcnew Bool_Matrix(prop->Len, obj->Len);
		Look_Matrix(obj, prop, c, dataGridView1);

		for (int i = 0; i < obj->Len; i++)
		{
			comboBox2->Items->Add(obj->O[i]);
		}

		for (int i = 0; i < prop->Len; i++)
		{
			comboBox1->Items->Add(prop->O[i]);
		}
		textBox1->Enabled = false;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Добавить
	if (textBox1->Text != "")
	{
		prop->Add(textBox1->Text);
		c->Add_Row();
		prop->Upload_to("Свойства.txt");
		Look_Matrix(obj, prop, c, dataGridView1);
	}
	

	if (textBox2->Text != "")
	{
		obj->Add(textBox2->Text);
		Bool_Matrix^ temp = gcnew Bool_Matrix(c);
		c->Add_Column(temp);
		obj->Upload_to("Объекты.txt");
		Look_Matrix(obj, prop, c, dataGridView1);
	}
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
	for (int i = 0; i < obj->Len; i++)
	{
		comboBox2->Items->Add(obj->O[i]);
	}

	for (int i = 0; i < prop->Len; i++)
	{
		comboBox1->Items->Add(prop->O[i]);
	}
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	String ^ n = obj->Random_Object();
	textBox3->Text = n;
	
	Look_Properties(n, obj, prop, c, listBox3);
	textBox4->Text = Random_Prop(n, obj, prop, c);
	textBox6->Text = textBox4->Text;
	Look_Objects(textBox6->Text, obj, prop, c, listBox4);
	textBox5->Text = Random_Obj(textBox6->Text, obj, prop, c);
	//button4_Click(sender,e);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = prop->Random_Object();
	if (textBox6->Text == "") { textBox6->Text = n; }
	else { n = textBox6->Text; }
	Look_Objects(n, obj, prop, c, listBox4);
	textBox5->Text = Random_Obj(n, obj, prop, c);
}
private: System::Void comboBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->Text != "")
	{
		String^ n = comboBox2->Text;
		Look_Properties(n, obj, prop, c, listBox1);
	}
}
private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text != "")
	{
		String^ n = comboBox1->Text;
		Look_Objects(n, obj, prop, c, listBox2);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		prop->Delete(textBox1->Text);
		c->Del_Row();
		prop->Upload_to("Свойства.txt");
		Look_Matrix(obj, prop, c, dataGridView1);
	}

	if (textBox2->Text != "")
	{
		obj->Delete(textBox2->Text);
		c->Del_Column();
		obj->Upload_to("Объекты.txt");
		Look_Matrix(obj, prop, c, dataGridView1);
	}
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
	for (int i = 0; i < obj->Len; i++)
	{
		comboBox2->Items->Add(obj->O[i]);
	}

	for (int i = 0; i < prop->Len; i++)
	{
		comboBox1->Items->Add(prop->O[i]);
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Enabled = true;
	textBox2->Text = "";
	textBox2->Enabled = false;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Enabled = true;
	textBox1->Text = "";
	textBox1->Enabled = false;
}

};
}
