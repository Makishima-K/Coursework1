#pragma once

#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Product_Sample.h"

#include "writeData.h"

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
	private: System::Windows::Forms::TextBox^ textBox1;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
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
			this->comboBox1->Location = System::Drawing::Point(263, 119);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(295, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Sample";
			// 
			// Add_Product
			// 
			this->Add_Product->Cursor = System::Windows::Forms::Cursors::SizeNWSE;
			this->Add_Product->Location = System::Drawing::Point(516, 117);
			this->Add_Product->Name = L"Add_Product";
			this->Add_Product->Size = System::Drawing::Size(75, 23);
			this->Add_Product->TabIndex = 21;
			this->Add_Product->Text = L"Add Product";
			this->Add_Product->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(390, 120);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Silver;
			this->label8->Location = System::Drawing::Point(419, 102);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Count Product";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(263, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 24;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->ClientSize = System::Drawing::Size(908, 537);
			this->Controls->Add(this->textBox1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
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


}
};
}
