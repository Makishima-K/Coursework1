#pragma once

#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Product_Sample.h"

#include "writeData.h"
#include "update_name.h"


#include <msclr/marshal_cppstd.h>






namespace Display {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ AddSample;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ count_on_one_pallet;
	private: System::Windows::Forms::TextBox^ price_sale;




	private: System::Windows::Forms::TextBox^ price_buy;

	private: System::Windows::Forms::TextBox^ shelf_life_days;

	private: System::Windows::Forms::CheckBox^ is_expiration_date;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ Show_add_sample;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Add_Product;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ Text_Err;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ Buy_B;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ Sale_cost;
	private: System::Windows::Forms::Label^ buy_cost;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ lost_b;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Button^ Donate;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button4;









	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->AddSample = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->count_on_one_pallet = (gcnew System::Windows::Forms::TextBox());
			this->price_sale = (gcnew System::Windows::Forms::TextBox());
			this->price_buy = (gcnew System::Windows::Forms::TextBox());
			this->shelf_life_days = (gcnew System::Windows::Forms::TextBox());
			this->is_expiration_date = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Show_add_sample = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Add_Product = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Text_Err = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Buy_B = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->Sale_cost = (gcnew System::Windows::Forms::Label());
			this->buy_cost = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lost_b = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Donate = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label1->Location = System::Drawing::Point(19, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Main menu";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(96, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"All Staff";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(96, 184);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 23);
			this->Add->TabIndex = 2;
			this->Add->Text = L"Add";
			this->Add->UseVisualStyleBackColor = true;
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(96, 155);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(75, 23);
			this->Delete->TabIndex = 3;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = true;
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(96, 126);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(75, 23);
			this->Search->TabIndex = 4;
			this->Search->Text = L"Search Data";
			this->Search->UseVisualStyleBackColor = true;
			// 
			// AddSample
			// 
			this->AddSample->Location = System::Drawing::Point(796, 64);
			this->AddSample->Name = L"AddSample";
			this->AddSample->Size = System::Drawing::Size(75, 23);
			this->AddSample->TabIndex = 5;
			this->AddSample->Text = L"AddSample";
			this->AddSample->UseVisualStyleBackColor = true;
			this->AddSample->Visible = false;
			this->AddSample->Click += gcnew System::EventHandler(this, &MyForm1::AddSample_Click);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(263, 67);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 20);
			this->name->TabIndex = 6;
			this->name->Visible = false;
			// 
			// count_on_one_pallet
			// 
			this->count_on_one_pallet->Location = System::Drawing::Point(369, 67);
			this->count_on_one_pallet->Name = L"count_on_one_pallet";
			this->count_on_one_pallet->Size = System::Drawing::Size(100, 20);
			this->count_on_one_pallet->TabIndex = 7;
			this->count_on_one_pallet->Visible = false;
			// 
			// price_sale
			// 
			this->price_sale->Location = System::Drawing::Point(690, 67);
			this->price_sale->Name = L"price_sale";
			this->price_sale->Size = System::Drawing::Size(100, 20);
			this->price_sale->TabIndex = 11;
			this->price_sale->Visible = false;
			// 
			// price_buy
			// 
			this->price_buy->Location = System::Drawing::Point(584, 67);
			this->price_buy->Name = L"price_buy";
			this->price_buy->Size = System::Drawing::Size(100, 20);
			this->price_buy->TabIndex = 10;
			this->price_buy->Visible = false;
			// 
			// shelf_life_days
			// 
			this->shelf_life_days->Location = System::Drawing::Point(475, 67);
			this->shelf_life_days->Name = L"shelf_life_days";
			this->shelf_life_days->Size = System::Drawing::Size(100, 20);
			this->shelf_life_days->TabIndex = 9;
			this->shelf_life_days->Visible = false;
			// 
			// is_expiration_date
			// 
			this->is_expiration_date->AutoSize = true;
			this->is_expiration_date->ForeColor = System::Drawing::Color::Silver;
			this->is_expiration_date->Location = System::Drawing::Point(475, 44);
			this->is_expiration_date->Name = L"is_expiration_date";
			this->is_expiration_date->Size = System::Drawing::Size(105, 17);
			this->is_expiration_date->TabIndex = 12;
			this->is_expiration_date->Text = L"is expiration date";
			this->is_expiration_date->UseVisualStyleBackColor = true;
			this->is_expiration_date->Visible = false;
			this->is_expiration_date->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(283, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Name";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(362, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"count_on_one_pallet";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(607, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"price_buy";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(710, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"price_sale";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(485, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"shelf_life_days";
			this->label6->Visible = false;
			// 
			// Show_add_sample
			// 
			this->Show_add_sample->Location = System::Drawing::Point(96, 68);
			this->Show_add_sample->Name = L"Show_add_sample";
			this->Show_add_sample->Size = System::Drawing::Size(75, 23);
			this->Show_add_sample->TabIndex = 18;
			this->Show_add_sample->Text = L"Show";
			this->Show_add_sample->UseVisualStyleBackColor = true;
			this->Show_add_sample->Click += gcnew System::EventHandler(this, &MyForm1::Show_add_sample_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"qwert", L"asdf" });
			this->comboBox1->Location = System::Drawing::Point(263, 142);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(295, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Sample";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click);
			// 
			// Add_Product
			// 
			this->Add_Product->Cursor = System::Windows::Forms::Cursors::SizeNWSE;
			this->Add_Product->Location = System::Drawing::Point(516, 140);
			this->Add_Product->Name = L"Add_Product";
			this->Add_Product->Size = System::Drawing::Size(75, 23);
			this->Add_Product->TabIndex = 21;
			this->Add_Product->Text = L"Add Product";
			this->Add_Product->UseVisualStyleBackColor = true;
			this->Add_Product->Click += gcnew System::EventHandler(this, &MyForm1::Add_Product_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(390, 143);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 22;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown1_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(419, 125);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Count Product";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
			// 
			// Text_Err
			// 
			this->Text_Err->AutoSize = true;
			this->Text_Err->Font = (gcnew System::Drawing::Font(L"Roboto", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text_Err->ForeColor = System::Drawing::Color::Red;
			this->Text_Err->Location = System::Drawing::Point(12, 486);
			this->Text_Err->Name = L"Text_Err";
			this->Text_Err->Size = System::Drawing::Size(99, 42);
			this->Text_Err->TabIndex = 25;
			this->Text_Err->Text = L"Err: 0";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"qwert", L"asdf" });
			this->comboBox2->Location = System::Drawing::Point(263, 219);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 26;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(390, 220);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::SizeNWSE;
			this->button2->Location = System::Drawing::Point(516, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Sale\r\n";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(283, 194);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Name Product";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(408, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Count Product";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Silver;
			this->label11->Location = System::Drawing::Point(408, 256);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 13);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Count Product";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Silver;
			this->label12->Location = System::Drawing::Point(283, 256);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 13);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Name Product";
			// 
			// Buy_B
			// 
			this->Buy_B->Cursor = System::Windows::Forms::Cursors::SizeNWSE;
			this->Buy_B->Location = System::Drawing::Point(516, 282);
			this->Buy_B->Name = L"Buy_B";
			this->Buy_B->Size = System::Drawing::Size(75, 23);
			this->Buy_B->TabIndex = 33;
			this->Buy_B->Text = L"Buy";
			this->Buy_B->UseVisualStyleBackColor = true;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(390, 282);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 32;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"qwert", L"asdf" });
			this->comboBox3->Location = System::Drawing::Point(263, 281);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 31;
			// 
			// Sale_cost
			// 
			this->Sale_cost->AutoSize = true;
			this->Sale_cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sale_cost->ForeColor = System::Drawing::Color::Yellow;
			this->Sale_cost->Location = System::Drawing::Point(597, 222);
			this->Sale_cost->Name = L"Sale_cost";
			this->Sale_cost->Size = System::Drawing::Size(52, 18);
			this->Sale_cost->TabIndex = 36;
			this->Sale_cost->Text = L"52.99$";
			// 
			// buy_cost
			// 
			this->buy_cost->AutoSize = true;
			this->buy_cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buy_cost->ForeColor = System::Drawing::Color::Yellow;
			this->buy_cost->Location = System::Drawing::Point(597, 287);
			this->buy_cost->Name = L"buy_cost";
			this->buy_cost->Size = System::Drawing::Size(52, 18);
			this->buy_cost->TabIndex = 37;
			this->buy_cost->Text = L"13.99$";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Silver;
			this->label14->Location = System::Drawing::Point(408, 318);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 13);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Count Product";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Silver;
			this->label15->Location = System::Drawing::Point(283, 318);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 13);
			this->label15->TabIndex = 41;
			this->label15->Text = L"Name Product";
			// 
			// lost_b
			// 
			this->lost_b->Cursor = System::Windows::Forms::Cursors::SizeNWSE;
			this->lost_b->Location = System::Drawing::Point(516, 344);
			this->lost_b->Name = L"lost_b";
			this->lost_b->Size = System::Drawing::Size(75, 23);
			this->lost_b->TabIndex = 40;
			this->lost_b->Text = L"Lost";
			this->lost_b->UseVisualStyleBackColor = true;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(390, 344);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 39;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"qwert", L"asdf" });
			this->comboBox4->Location = System::Drawing::Point(263, 343);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 38;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(264, 402);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 20);
			this->numericUpDown5->TabIndex = 43;
			// 
			// Donate
			// 
			this->Donate->Cursor = System::Windows::Forms::Cursors::SizeNWSE;
			this->Donate->Location = System::Drawing::Point(390, 399);
			this->Donate->Name = L"Donate";
			this->Donate->Size = System::Drawing::Size(75, 23);
			this->Donate->TabIndex = 44;
			this->Donate->Text = L"Donate";
			this->Donate->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 449);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 45;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(256, 449);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 46;
			this->textBox2->Visible = false;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(362, 449);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 20);
			this->numericUpDown6->TabIndex = 47;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(488, 449);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 20);
			this->numericUpDown7->TabIndex = 48;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(614, 449);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 20);
			this->numericUpDown8->TabIndex = 49;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Yellow;
			this->label13->Location = System::Drawing::Point(740, 450);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 20);
			this->label13->TabIndex = 50;
			this->label13->Text = L"125";
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::SizeNWSE;
			this->button3->Location = System::Drawing::Point(435, 486);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 51;
			this->button3->Text = L"Add Product";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Silver;
			this->label16->Location = System::Drawing::Point(273, 433);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 52;
			this->label16->Text = L"Address";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Silver;
			this->label17->Location = System::Drawing::Point(179, 433);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 13);
			this->label17->TabIndex = 53;
			this->label17->Text = L"Name";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Silver;
			this->label18->Location = System::Drawing::Point(397, 433);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(40, 13);
			this->label18->TabIndex = 54;
			this->label18->Text = L"Length";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Silver;
			this->label19->Location = System::Drawing::Point(646, 434);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(35, 13);
			this->label19->TabIndex = 55;
			this->label19->Text = L"Floors";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm1::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Silver;
			this->label20->Location = System::Drawing::Point(523, 433);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 13);
			this->label20->TabIndex = 56;
			this->label20->Text = L"Width";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(63, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 57;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->ClientSize = System::Drawing::Size(973, 537);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Donate);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->lost_b);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->buy_cost);
			this->Controls->Add(this->Sale_cost);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->Buy_B);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->Text_Err);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->Add_Product);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Show_add_sample);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->is_expiration_date);
			this->Controls->Add(this->price_sale);
			this->Controls->Add(this->price_buy);
			this->Controls->Add(this->shelf_life_days);
			this->Controls->Add(this->count_on_one_pallet);
			this->Controls->Add(this->name);
			this->Controls->Add(this->AddSample);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"Warehouse";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddSample_Click(System::Object^ sender, System::EventArgs^ e) {



	ProductSample sample;

	fstream outFile("Product_Sample.txt");
	sample.id = 0;

	

	
	sample.name = msclr::interop::marshal_as<std::string>(name->Text);
	sample.is_expiration_date = is_expiration_date->Checked;
	sample.count_on_one_pallet = stoi(msclr::interop::marshal_as<std::string>(count_on_one_pallet->Text));

	sample.price_buy = stoi(msclr::interop::marshal_as<std::string>(price_buy->Text));
	sample.price_sale = stoi(msclr::interop::marshal_as<std::string>(price_sale->Text));
	if (sample.is_expiration_date) {
		sample.shelf_life_days = stoi(msclr::interop::marshal_as<std::string>(shelf_life_days->Text));
		writeDataProductSample(sample.id, sample.name, sample.count_on_one_pallet, sample.is_expiration_date, sample.shelf_life_days, sample.price_buy, sample.price_sale);
	}
	else {
		writeDataProductSample(sample.id, sample.name, sample.count_on_one_pallet, sample.is_expiration_date, 0, sample.price_buy, sample.price_sale);
	}

}
private: System::Void Show_add_sample_Click(System::Object^ sender, System::EventArgs^ e) {
	if (price_buy->Visible){
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
		is_expiration_date->Visible = false;
		name->Visible = false;
		count_on_one_pallet->Visible = false;
		shelf_life_days->Visible = false;
		price_buy->Visible = false;
		price_sale->Visible = false;
		AddSample->Visible = false;




	}
	else {

		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;
		is_expiration_date->Visible = true;
		name->Visible = true;
		count_on_one_pallet->Visible = true;
		shelf_life_days->Visible = true;
		price_buy->Visible = true;
		price_sale->Visible = true;
		AddSample->Visible = true;
	}
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	string a = msclr::interop::marshal_as<std::string>(comboBox1->Text);




}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Add_Product_Click(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	cli::array<String^>^ columnData = GetColumn("Product_Sample555.txt", 1);

	comboBox1->Items->Clear();

	for (int i = 0; i < columnData->Length; i++) {
		comboBox1->Items->Add(columnData[i]);
	}


}
};
}
