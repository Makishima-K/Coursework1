#pragma once

#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include <array>

#include "writeData.h"
#include "utils.h"
#include "dataStructr.h"
#include "calculateProfit.h"
#include "checkDateProduct.h"
#include "editSample.h"

#include <msclr/marshal_cppstd.h>

#include <sstream>
#include <vector>
using namespace msclr::interop;
using namespace std;
using namespace System;
using namespace System::Windows::Forms;



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
	private: System::Windows::Forms::Label^ NameProduct;

	private: System::Windows::Forms::Button^ Add_Product;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ CountProductLabel;


	private: System::Windows::Forms::Label^ Text_Err;


	private: System::Windows::Forms::Button^ Sale_B;






	public: System::Windows::Forms::Button^ Buy_B;
	private:









	private: System::Windows::Forms::Button^ Lost_B;





	private: System::Windows::Forms::TextBox^ NameW;



	private: System::Windows::Forms::NumericUpDown^ Length;
	private: System::Windows::Forms::NumericUpDown^ Width;
	private: System::Windows::Forms::NumericUpDown^ Floors;



	private: System::Windows::Forms::Label^ fullness;

	private: System::Windows::Forms::Button^ addWarehouse;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Label^ NameSample;
	private: System::Windows::Forms::Label^ Data_Count;
	private: System::Windows::Forms::Label^ Data_is_ex;
	private: System::Windows::Forms::Label^ data_shelf_life_days;
	private: System::Windows::Forms::Label^ Data_price_buy;
	private: System::Windows::Forms::Label^ Data_price_sale;



	private: System::Windows::Forms::Button^ Show_Add;



private: System::Windows::Forms::Button^ Check_Profit;
private: System::Windows::Forms::Label^ Profit;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ NameWLabel;

private: System::Windows::Forms::Label^ Out;
private: System::Windows::Forms::DataGridView^ dataBox;

private: System::Windows::Forms::Button^ Sample;
private: System::Windows::Forms::Button^ Product;
private: System::Windows::Forms::Button^ BuyList;
private: System::Windows::Forms::Button^ SaleList;
private: System::Windows::Forms::Button^ warehouses;
private: System::Windows::Forms::Label^ LocationName;
private: System::Windows::Forms::Label^ CapacityW;
private: System::Windows::Forms::Button^ CheckDate;
private: System::Windows::Forms::Button^ editSample;
private: System::Windows::Forms::ComboBox^ editComboBox;
private: System::Windows::Forms::TextBox^ editCount;
private: System::Windows::Forms::TextBox^ editLifeDays;


private: System::Windows::Forms::TextBox^ editPriceBuy;
private: System::Windows::Forms::TextBox^ editPriceSale;


private: System::Windows::Forms::Button^ edit;
private: System::Windows::Forms::Label^ sizeEdit;



private: System::Windows::Forms::Label^ nameEdit;

private: System::Windows::Forms::CheckBox^ isExpDate;
private: System::Windows::Forms::Label^ priceEdit;
private: System::Windows::Forms::Label^ priceSaleEdit;

private: System::Windows::Forms::Label^ daysEdit;
private: System::Windows::Forms::Button^ showAddW;
private: System::Windows::Forms::Label^ marginLabel;
private: System::Windows::Forms::Label^ labelCost;
private: System::Windows::Forms::Label^ labelSaleCost;
private: System::Windows::Forms::Label^ labelFree;
private: System::Windows::Forms::Label^ labelLost;
private: System::Windows::Forms::FlowLayoutPanel^ infoDiv;
private: System::Windows::Forms::FlowLayoutPanel^ MenuPanel;
private: System::Windows::Forms::SplitContainer^ splitContainer1;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::ComboBox^ comboBoxSort;
private: System::Windows::Forms::Button^ sortP;
private: System::Windows::Forms::Button^ updateName;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::ComboBox^ comboBoxAddress;


private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::ComboBox^ comboBoxCost;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::GroupBox^ groupBoxEdit;
private: System::Windows::Forms::GroupBox^ groupBoxWarehouse;
private: System::Windows::Forms::GroupBox^ groupBoxProduct;
private: System::Windows::Forms::GroupBox^ groupBoxProductSample;

































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
			this->NameProduct = (gcnew System::Windows::Forms::Label());
			this->Add_Product = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->CountProductLabel = (gcnew System::Windows::Forms::Label());
			this->Text_Err = (gcnew System::Windows::Forms::Label());
			this->Sale_B = (gcnew System::Windows::Forms::Button());
			this->Buy_B = (gcnew System::Windows::Forms::Button());
			this->Lost_B = (gcnew System::Windows::Forms::Button());
			this->NameW = (gcnew System::Windows::Forms::TextBox());
			this->Length = (gcnew System::Windows::Forms::NumericUpDown());
			this->Width = (gcnew System::Windows::Forms::NumericUpDown());
			this->Floors = (gcnew System::Windows::Forms::NumericUpDown());
			this->fullness = (gcnew System::Windows::Forms::Label());
			this->addWarehouse = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->NameSample = (gcnew System::Windows::Forms::Label());
			this->Data_Count = (gcnew System::Windows::Forms::Label());
			this->Data_is_ex = (gcnew System::Windows::Forms::Label());
			this->data_shelf_life_days = (gcnew System::Windows::Forms::Label());
			this->Data_price_buy = (gcnew System::Windows::Forms::Label());
			this->Data_price_sale = (gcnew System::Windows::Forms::Label());
			this->Show_Add = (gcnew System::Windows::Forms::Button());
			this->Check_Profit = (gcnew System::Windows::Forms::Button());
			this->Profit = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->NameWLabel = (gcnew System::Windows::Forms::Label());
			this->Out = (gcnew System::Windows::Forms::Label());
			this->dataBox = (gcnew System::Windows::Forms::DataGridView());
			this->Sample = (gcnew System::Windows::Forms::Button());
			this->Product = (gcnew System::Windows::Forms::Button());
			this->BuyList = (gcnew System::Windows::Forms::Button());
			this->SaleList = (gcnew System::Windows::Forms::Button());
			this->warehouses = (gcnew System::Windows::Forms::Button());
			this->LocationName = (gcnew System::Windows::Forms::Label());
			this->CapacityW = (gcnew System::Windows::Forms::Label());
			this->CheckDate = (gcnew System::Windows::Forms::Button());
			this->editSample = (gcnew System::Windows::Forms::Button());
			this->editComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->editCount = (gcnew System::Windows::Forms::TextBox());
			this->editLifeDays = (gcnew System::Windows::Forms::TextBox());
			this->editPriceBuy = (gcnew System::Windows::Forms::TextBox());
			this->editPriceSale = (gcnew System::Windows::Forms::TextBox());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->sizeEdit = (gcnew System::Windows::Forms::Label());
			this->nameEdit = (gcnew System::Windows::Forms::Label());
			this->isExpDate = (gcnew System::Windows::Forms::CheckBox());
			this->priceEdit = (gcnew System::Windows::Forms::Label());
			this->priceSaleEdit = (gcnew System::Windows::Forms::Label());
			this->daysEdit = (gcnew System::Windows::Forms::Label());
			this->showAddW = (gcnew System::Windows::Forms::Button());
			this->marginLabel = (gcnew System::Windows::Forms::Label());
			this->labelCost = (gcnew System::Windows::Forms::Label());
			this->labelSaleCost = (gcnew System::Windows::Forms::Label());
			this->labelFree = (gcnew System::Windows::Forms::Label());
			this->labelLost = (gcnew System::Windows::Forms::Label());
			this->infoDiv = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->MenuPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBoxSort = (gcnew System::Windows::Forms::ComboBox());
			this->sortP = (gcnew System::Windows::Forms::Button());
			this->updateName = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAddress = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBoxCost = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBoxEdit = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxWarehouse = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxProduct = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxProductSample = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Length))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Width))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Floors))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBox))->BeginInit();
			this->infoDiv->SuspendLayout();
			this->MenuPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBoxEdit->SuspendLayout();
			this->groupBoxWarehouse->SuspendLayout();
			this->groupBoxProduct->SuspendLayout();
			this->groupBoxProductSample->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Main menu";
			// 
			// AddSample
			// 
			this->AddSample->Location = System::Drawing::Point(549, 32);
			this->AddSample->Name = L"AddSample";
			this->AddSample->Size = System::Drawing::Size(75, 23);
			this->AddSample->TabIndex = 5;
			this->AddSample->Text = L"AddSample";
			this->AddSample->UseVisualStyleBackColor = true;
			this->AddSample->Click += gcnew System::EventHandler(this, &MyForm1::AddSample_Click);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(16, 35);
			this->name->MaxLength = 20;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 20);
			this->name->TabIndex = 6;
			this->name->WordWrap = false;
			// 
			// count_on_one_pallet
			// 
			this->count_on_one_pallet->Location = System::Drawing::Point(122, 35);
			this->count_on_one_pallet->Name = L"count_on_one_pallet";
			this->count_on_one_pallet->Size = System::Drawing::Size(100, 20);
			this->count_on_one_pallet->TabIndex = 7;
			// 
			// price_sale
			// 
			this->price_sale->Location = System::Drawing::Point(443, 35);
			this->price_sale->Name = L"price_sale";
			this->price_sale->Size = System::Drawing::Size(100, 20);
			this->price_sale->TabIndex = 11;
			// 
			// price_buy
			// 
			this->price_buy->Location = System::Drawing::Point(337, 35);
			this->price_buy->Name = L"price_buy";
			this->price_buy->Size = System::Drawing::Size(100, 20);
			this->price_buy->TabIndex = 10;
			// 
			// shelf_life_days
			// 
			this->shelf_life_days->Location = System::Drawing::Point(228, 35);
			this->shelf_life_days->Name = L"shelf_life_days";
			this->shelf_life_days->Size = System::Drawing::Size(100, 20);
			this->shelf_life_days->TabIndex = 9;
			// 
			// is_expiration_date
			// 
			this->is_expiration_date->AutoSize = true;
			this->is_expiration_date->ForeColor = System::Drawing::Color::Silver;
			this->is_expiration_date->Location = System::Drawing::Point(228, 12);
			this->is_expiration_date->Name = L"is_expiration_date";
			this->is_expiration_date->Size = System::Drawing::Size(105, 17);
			this->is_expiration_date->TabIndex = 12;
			this->is_expiration_date->Text = L"is expiration date";
			this->is_expiration_date->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(44, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(115, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"count_on_one_pallet";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(360, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"price_buy";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(463, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"price_sale";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(236, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"shelf_life_days";
			// 
			// Show_add_sample
			// 
			this->Show_add_sample->Location = System::Drawing::Point(3, 58);
			this->Show_add_sample->Name = L"Show_add_sample";
			this->Show_add_sample->Size = System::Drawing::Size(75, 23);
			this->Show_add_sample->TabIndex = 18;
			this->Show_add_sample->Text = L"Sample";
			this->Show_add_sample->UseVisualStyleBackColor = true;
			this->Show_add_sample->Click += gcnew System::EventHandler(this, &MyForm1::Show_add_sample_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"asdf", L"qwert" });
			this->comboBox1->Location = System::Drawing::Point(10, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// NameProduct
			// 
			this->NameProduct->AutoSize = true;
			this->NameProduct->ForeColor = System::Drawing::Color::Silver;
			this->NameProduct->Location = System::Drawing::Point(30, 32);
			this->NameProduct->Name = L"NameProduct";
			this->NameProduct->Size = System::Drawing::Size(75, 13);
			this->NameProduct->TabIndex = 20;
			this->NameProduct->Text = L"Name Product";
			// 
			// Add_Product
			// 
			this->Add_Product->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add_Product->Location = System::Drawing::Point(228, 79);
			this->Add_Product->Name = L"Add_Product";
			this->Add_Product->Size = System::Drawing::Size(75, 23);
			this->Add_Product->TabIndex = 21;
			this->Add_Product->Text = L"Add";
			this->Add_Product->UseVisualStyleBackColor = true;
			this->Add_Product->Click += gcnew System::EventHandler(this, &MyForm1::Add_Product_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(264, 48);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 22;
			// 
			// CountProductLabel
			// 
			this->CountProductLabel->AutoSize = true;
			this->CountProductLabel->ForeColor = System::Drawing::Color::Silver;
			this->CountProductLabel->Location = System::Drawing::Point(278, 32);
			this->CountProductLabel->Name = L"CountProductLabel";
			this->CountProductLabel->Size = System::Drawing::Size(75, 13);
			this->CountProductLabel->TabIndex = 23;
			this->CountProductLabel->Text = L"Count Product";
			// 
			// Text_Err
			// 
			this->Text_Err->AutoSize = true;
			this->Text_Err->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Text_Err->ForeColor = System::Drawing::Color::Red;
			this->Text_Err->Location = System::Drawing::Point(1, 46);
			this->Text_Err->Name = L"Text_Err";
			this->Text_Err->Size = System::Drawing::Size(68, 29);
			this->Text_Err->TabIndex = 25;
			this->Text_Err->Text = L"Err: 0";
			this->Text_Err->Visible = false;
			// 
			// Sale_B
			// 
			this->Sale_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sale_B->Location = System::Drawing::Point(90, 79);
			this->Sale_B->Name = L"Sale_B";
			this->Sale_B->Size = System::Drawing::Size(75, 23);
			this->Sale_B->TabIndex = 28;
			this->Sale_B->Text = L"Sale\r\n";
			this->Sale_B->UseVisualStyleBackColor = true;
			this->Sale_B->Click += gcnew System::EventHandler(this, &MyForm1::Sale_B_Click);
			// 
			// Buy_B
			// 
			this->Buy_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Buy_B->Location = System::Drawing::Point(9, 79);
			this->Buy_B->Name = L"Buy_B";
			this->Buy_B->Size = System::Drawing::Size(75, 23);
			this->Buy_B->TabIndex = 33;
			this->Buy_B->Text = L"Buy";
			this->Buy_B->UseVisualStyleBackColor = true;
			this->Buy_B->Click += gcnew System::EventHandler(this, &MyForm1::Buy_B_Click);
			// 
			// Lost_B
			// 
			this->Lost_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Lost_B->Location = System::Drawing::Point(309, 79);
			this->Lost_B->Name = L"Lost_B";
			this->Lost_B->Size = System::Drawing::Size(75, 23);
			this->Lost_B->TabIndex = 40;
			this->Lost_B->Text = L"Lost";
			this->Lost_B->UseVisualStyleBackColor = true;
			this->Lost_B->Click += gcnew System::EventHandler(this, &MyForm1::Lost_B_Click);
			// 
			// NameW
			// 
			this->NameW->Location = System::Drawing::Point(4, 35);
			this->NameW->Name = L"NameW";
			this->NameW->Size = System::Drawing::Size(100, 20);
			this->NameW->TabIndex = 45;
			// 
			// Length
			// 
			this->Length->Location = System::Drawing::Point(110, 36);
			this->Length->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->Length->Name = L"Length";
			this->Length->Size = System::Drawing::Size(120, 20);
			this->Length->TabIndex = 47;
			this->Length->ValueChanged += gcnew System::EventHandler(this, &MyForm1::Length_ValueChanged);
			// 
			// Width
			// 
			this->Width->Location = System::Drawing::Point(236, 36);
			this->Width->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->Width->Name = L"Width";
			this->Width->Size = System::Drawing::Size(120, 20);
			this->Width->TabIndex = 48;
			this->Width->ValueChanged += gcnew System::EventHandler(this, &MyForm1::Width_ValueChanged);
			// 
			// Floors
			// 
			this->Floors->Location = System::Drawing::Point(362, 36);
			this->Floors->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->Floors->Name = L"Floors";
			this->Floors->Size = System::Drawing::Size(120, 20);
			this->Floors->TabIndex = 49;
			this->Floors->ValueChanged += gcnew System::EventHandler(this, &MyForm1::Floors_ValueChanged);
			// 
			// fullness
			// 
			this->fullness->AutoSize = true;
			this->fullness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fullness->ForeColor = System::Drawing::Color::Yellow;
			this->fullness->Location = System::Drawing::Point(491, 35);
			this->fullness->Name = L"fullness";
			this->fullness->Size = System::Drawing::Size(128, 20);
			this->fullness->TabIndex = 50;
			this->fullness->Text = L"Fullness: 0 Pallet";
			// 
			// addWarehouse
			// 
			this->addWarehouse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addWarehouse->Location = System::Drawing::Point(194, 62);
			this->addWarehouse->Name = L"addWarehouse";
			this->addWarehouse->Size = System::Drawing::Size(75, 23);
			this->addWarehouse->TabIndex = 51;
			this->addWarehouse->Text = L"Add Warehouse";
			this->addWarehouse->UseVisualStyleBackColor = true;
			this->addWarehouse->Click += gcnew System::EventHandler(this, &MyForm1::addWarehouse_Click_1);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Silver;
			this->label17->Location = System::Drawing::Point(31, 19);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 13);
			this->label17->TabIndex = 53;
			this->label17->Text = L"Name";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Silver;
			this->label18->Location = System::Drawing::Point(145, 20);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(40, 13);
			this->label18->TabIndex = 54;
			this->label18->Text = L"Length";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Silver;
			this->label19->Location = System::Drawing::Point(406, 20);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(35, 13);
			this->label19->TabIndex = 55;
			this->label19->Text = L"Floors";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Silver;
			this->label20->Location = System::Drawing::Point(271, 20);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 13);
			this->label20->TabIndex = 56;
			this->label20->Text = L"Width";
			// 
			// NameSample
			// 
			this->NameSample->AutoSize = true;
			this->NameSample->ForeColor = System::Drawing::Color::Yellow;
			this->NameSample->Location = System::Drawing::Point(3, 0);
			this->NameSample->Name = L"NameSample";
			this->NameSample->Size = System::Drawing::Size(56, 20);
			this->NameSample->TabIndex = 58;
			this->NameSample->Text = L"Name: ";
			// 
			// Data_Count
			// 
			this->Data_Count->AutoSize = true;
			this->Data_Count->ForeColor = System::Drawing::Color::Yellow;
			this->Data_Count->Location = System::Drawing::Point(3, 20);
			this->Data_Count->Name = L"Data_Count";
			this->Data_Count->Size = System::Drawing::Size(57, 20);
			this->Data_Count->TabIndex = 59;
			this->Data_Count->Text = L"Size: 1/";
			// 
			// Data_is_ex
			// 
			this->Data_is_ex->AutoSize = true;
			this->Data_is_ex->ForeColor = System::Drawing::Color::Yellow;
			this->Data_is_ex->Location = System::Drawing::Point(3, 40);
			this->Data_is_ex->Name = L"Data_is_ex";
			this->Data_is_ex->Size = System::Drawing::Size(127, 20);
			this->Data_is_ex->TabIndex = 60;
			this->Data_is_ex->Text = L"Is expiration date:";
			// 
			// data_shelf_life_days
			// 
			this->data_shelf_life_days->AutoSize = true;
			this->data_shelf_life_days->ForeColor = System::Drawing::Color::Yellow;
			this->data_shelf_life_days->Location = System::Drawing::Point(3, 60);
			this->data_shelf_life_days->Name = L"data_shelf_life_days";
			this->data_shelf_life_days->Size = System::Drawing::Size(104, 20);
			this->data_shelf_life_days->TabIndex = 61;
			this->data_shelf_life_days->Text = L"Shelf life days:";
			// 
			// Data_price_buy
			// 
			this->Data_price_buy->AutoSize = true;
			this->Data_price_buy->ForeColor = System::Drawing::Color::Red;
			this->Data_price_buy->Location = System::Drawing::Point(3, 80);
			this->Data_price_buy->Name = L"Data_price_buy";
			this->Data_price_buy->Size = System::Drawing::Size(72, 20);
			this->Data_price_buy->TabIndex = 62;
			this->Data_price_buy->Text = L"Price buy:";
			// 
			// Data_price_sale
			// 
			this->Data_price_sale->AutoSize = true;
			this->Data_price_sale->ForeColor = System::Drawing::Color::LawnGreen;
			this->Data_price_sale->Location = System::Drawing::Point(3, 100);
			this->Data_price_sale->Name = L"Data_price_sale";
			this->Data_price_sale->Size = System::Drawing::Size(74, 20);
			this->Data_price_sale->TabIndex = 63;
			this->Data_price_sale->Text = L"Price sale:";
			// 
			// Show_Add
			// 
			this->Show_Add->Location = System::Drawing::Point(3, 87);
			this->Show_Add->Name = L"Show_Add";
			this->Show_Add->Size = System::Drawing::Size(75, 23);
			this->Show_Add->TabIndex = 65;
			this->Show_Add->Text = L"Product";
			this->Show_Add->UseVisualStyleBackColor = true;
			this->Show_Add->Click += gcnew System::EventHandler(this, &MyForm1::Show_Add_Click);
			// 
			// Check_Profit
			// 
			this->Check_Profit->Location = System::Drawing::Point(3, 174);
			this->Check_Profit->Name = L"Check_Profit";
			this->Check_Profit->Size = System::Drawing::Size(75, 23);
			this->Check_Profit->TabIndex = 69;
			this->Check_Profit->Text = L"Check Profit";
			this->Check_Profit->UseVisualStyleBackColor = true;
			this->Check_Profit->Click += gcnew System::EventHandler(this, &MyForm1::Check_Profit_Click);
			// 
			// Profit
			// 
			this->Profit->AutoSize = true;
			this->Profit->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Profit->ForeColor = System::Drawing::Color::Lime;
			this->Profit->Location = System::Drawing::Point(3, 200);
			this->Profit->Name = L"Profit";
			this->Profit->Size = System::Drawing::Size(37, 16);
			this->Profit->TabIndex = 70;
			this->Profit->Text = L"Profit";
			this->Profit->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(137, 48);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 71;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox2_SelectedIndexChanged);
			// 
			// NameWLabel
			// 
			this->NameWLabel->AutoSize = true;
			this->NameWLabel->ForeColor = System::Drawing::Color::Silver;
			this->NameWLabel->Location = System::Drawing::Point(149, 32);
			this->NameWLabel->Name = L"NameWLabel";
			this->NameWLabel->Size = System::Drawing::Size(93, 13);
			this->NameWLabel->TabIndex = 72;
			this->NameWLabel->Text = L"Name Warehouse";
			// 
			// Out
			// 
			this->Out->AutoSize = true;
			this->Out->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Out->ForeColor = System::Drawing::Color::LimeGreen;
			this->Out->Location = System::Drawing::Point(4, 7);
			this->Out->Name = L"Out";
			this->Out->Size = System::Drawing::Size(51, 29);
			this->Out->TabIndex = 73;
			this->Out->Text = L"Out";
			this->Out->Visible = false;
			// 
			// dataBox
			// 
			this->dataBox->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataBox->Location = System::Drawing::Point(741, 58);
			this->dataBox->MinimumSize = System::Drawing::Size(50, 0);
			this->dataBox->Name = L"dataBox";
			this->dataBox->Size = System::Drawing::Size(909, 542);
			this->dataBox->TabIndex = 76;
			// 
			// Sample
			// 
			this->Sample->Location = System::Drawing::Point(741, 30);
			this->Sample->Name = L"Sample";
			this->Sample->Size = System::Drawing::Size(75, 23);
			this->Sample->TabIndex = 77;
			this->Sample->Text = L"Sample";
			this->Sample->UseVisualStyleBackColor = true;
			this->Sample->Click += gcnew System::EventHandler(this, &MyForm1::Sample_Click);
			// 
			// Product
			// 
			this->Product->Location = System::Drawing::Point(822, 30);
			this->Product->Name = L"Product";
			this->Product->Size = System::Drawing::Size(75, 23);
			this->Product->TabIndex = 78;
			this->Product->Text = L"Product";
			this->Product->UseVisualStyleBackColor = true;
			this->Product->Click += gcnew System::EventHandler(this, &MyForm1::Product_Click);
			// 
			// BuyList
			// 
			this->BuyList->Location = System::Drawing::Point(903, 30);
			this->BuyList->Name = L"BuyList";
			this->BuyList->Size = System::Drawing::Size(75, 23);
			this->BuyList->TabIndex = 79;
			this->BuyList->Text = L"Purchase";
			this->BuyList->UseVisualStyleBackColor = true;
			this->BuyList->Click += gcnew System::EventHandler(this, &MyForm1::BuyList_Click);
			// 
			// SaleList
			// 
			this->SaleList->Location = System::Drawing::Point(984, 30);
			this->SaleList->Name = L"SaleList";
			this->SaleList->Size = System::Drawing::Size(75, 23);
			this->SaleList->TabIndex = 80;
			this->SaleList->Text = L"Sale";
			this->SaleList->UseVisualStyleBackColor = true;
			this->SaleList->Click += gcnew System::EventHandler(this, &MyForm1::SaleList_Click);
			// 
			// warehouses
			// 
			this->warehouses->Cursor = System::Windows::Forms::Cursors::Hand;
			this->warehouses->Location = System::Drawing::Point(1065, 30);
			this->warehouses->Name = L"warehouses";
			this->warehouses->Size = System::Drawing::Size(75, 23);
			this->warehouses->TabIndex = 81;
			this->warehouses->Text = L"Warehouses";
			this->warehouses->UseVisualStyleBackColor = true;
			this->warehouses->Click += gcnew System::EventHandler(this, &MyForm1::warehouses_Click);
			// 
			// LocationName
			// 
			this->LocationName->AutoSize = true;
			this->LocationName->ForeColor = System::Drawing::Color::Yellow;
			this->LocationName->Location = System::Drawing::Point(3, 140);
			this->LocationName->Name = L"LocationName";
			this->LocationName->Size = System::Drawing::Size(69, 20);
			this->LocationName->TabIndex = 82;
			this->LocationName->Text = L"Location:";
			// 
			// CapacityW
			// 
			this->CapacityW->AutoSize = true;
			this->CapacityW->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->CapacityW->Location = System::Drawing::Point(3, 160);
			this->CapacityW->Name = L"CapacityW";
			this->CapacityW->Size = System::Drawing::Size(79, 20);
			this->CapacityW->TabIndex = 83;
			this->CapacityW->Text = L"Capacity: /";
			// 
			// CheckDate
			// 
			this->CheckDate->Location = System::Drawing::Point(3, 145);
			this->CheckDate->Name = L"CheckDate";
			this->CheckDate->Size = System::Drawing::Size(75, 23);
			this->CheckDate->TabIndex = 84;
			this->CheckDate->Text = L"Check date";
			this->CheckDate->UseVisualStyleBackColor = true;
			this->CheckDate->Click += gcnew System::EventHandler(this, &MyForm1::CheckDate_Click);
			// 
			// editSample
			// 
			this->editSample->Location = System::Drawing::Point(3, 116);
			this->editSample->Name = L"editSample";
			this->editSample->Size = System::Drawing::Size(75, 23);
			this->editSample->TabIndex = 85;
			this->editSample->Text = L"Edit Sample";
			this->editSample->UseVisualStyleBackColor = true;
			this->editSample->Click += gcnew System::EventHandler(this, &MyForm1::editSample_Click);
			// 
			// editComboBox
			// 
			this->editComboBox->FormattingEnabled = true;
			this->editComboBox->Location = System::Drawing::Point(-1, 31);
			this->editComboBox->Name = L"editComboBox";
			this->editComboBox->Size = System::Drawing::Size(121, 21);
			this->editComboBox->TabIndex = 86;
			this->editComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::editComboBox_SelectedIndexChanged);
			// 
			// editCount
			// 
			this->editCount->Location = System::Drawing::Point(126, 31);
			this->editCount->Name = L"editCount";
			this->editCount->Size = System::Drawing::Size(100, 20);
			this->editCount->TabIndex = 87;
			// 
			// editLifeDays
			// 
			this->editLifeDays->Location = System::Drawing::Point(232, 32);
			this->editLifeDays->Name = L"editLifeDays";
			this->editLifeDays->Size = System::Drawing::Size(100, 20);
			this->editLifeDays->TabIndex = 88;
			// 
			// editPriceBuy
			// 
			this->editPriceBuy->Location = System::Drawing::Point(338, 32);
			this->editPriceBuy->Name = L"editPriceBuy";
			this->editPriceBuy->Size = System::Drawing::Size(100, 20);
			this->editPriceBuy->TabIndex = 89;
			// 
			// editPriceSale
			// 
			this->editPriceSale->Location = System::Drawing::Point(444, 32);
			this->editPriceSale->Name = L"editPriceSale";
			this->editPriceSale->Size = System::Drawing::Size(100, 20);
			this->editPriceSale->TabIndex = 90;
			// 
			// edit
			// 
			this->edit->Location = System::Drawing::Point(550, 29);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(75, 23);
			this->edit->TabIndex = 91;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &MyForm1::editClick);
			// 
			// sizeEdit
			// 
			this->sizeEdit->AutoSize = true;
			this->sizeEdit->ForeColor = System::Drawing::Color::Silver;
			this->sizeEdit->Location = System::Drawing::Point(121, 16);
			this->sizeEdit->Name = L"sizeEdit";
			this->sizeEdit->Size = System::Drawing::Size(107, 13);
			this->sizeEdit->TabIndex = 93;
			this->sizeEdit->Text = L"count_on_one_pallet";
			// 
			// nameEdit
			// 
			this->nameEdit->AutoSize = true;
			this->nameEdit->ForeColor = System::Drawing::Color::Silver;
			this->nameEdit->Location = System::Drawing::Point(42, 13);
			this->nameEdit->Name = L"nameEdit";
			this->nameEdit->Size = System::Drawing::Size(35, 13);
			this->nameEdit->TabIndex = 92;
			this->nameEdit->Text = L"Name";
			// 
			// isExpDate
			// 
			this->isExpDate->AutoSize = true;
			this->isExpDate->ForeColor = System::Drawing::Color::Silver;
			this->isExpDate->Location = System::Drawing::Point(234, 15);
			this->isExpDate->Name = L"isExpDate";
			this->isExpDate->Size = System::Drawing::Size(105, 17);
			this->isExpDate->TabIndex = 94;
			this->isExpDate->Text = L"is expiration date";
			this->isExpDate->UseVisualStyleBackColor = true;
			// 
			// priceEdit
			// 
			this->priceEdit->AutoSize = true;
			this->priceEdit->ForeColor = System::Drawing::Color::Silver;
			this->priceEdit->Location = System::Drawing::Point(364, 13);
			this->priceEdit->Name = L"priceEdit";
			this->priceEdit->Size = System::Drawing::Size(53, 13);
			this->priceEdit->TabIndex = 95;
			this->priceEdit->Text = L"price_buy";
			// 
			// priceSaleEdit
			// 
			this->priceSaleEdit->AutoSize = true;
			this->priceSaleEdit->ForeColor = System::Drawing::Color::Silver;
			this->priceSaleEdit->Location = System::Drawing::Point(468, 13);
			this->priceSaleEdit->Name = L"priceSaleEdit";
			this->priceSaleEdit->Size = System::Drawing::Size(55, 13);
			this->priceSaleEdit->TabIndex = 96;
			this->priceSaleEdit->Text = L"price_sale";
			// 
			// daysEdit
			// 
			this->daysEdit->AutoSize = true;
			this->daysEdit->ForeColor = System::Drawing::Color::Silver;
			this->daysEdit->Location = System::Drawing::Point(244, 55);
			this->daysEdit->Name = L"daysEdit";
			this->daysEdit->Size = System::Drawing::Size(76, 13);
			this->daysEdit->TabIndex = 97;
			this->daysEdit->Text = L"shelf_life_days";
			// 
			// showAddW
			// 
			this->showAddW->Location = System::Drawing::Point(3, 16);
			this->showAddW->Name = L"showAddW";
			this->showAddW->Size = System::Drawing::Size(75, 36);
			this->showAddW->TabIndex = 98;
			this->showAddW->Text = L"Add Warehouse";
			this->showAddW->UseVisualStyleBackColor = true;
			this->showAddW->Click += gcnew System::EventHandler(this, &MyForm1::showAddW_Click);
			// 
			// marginLabel
			// 
			this->marginLabel->AutoSize = true;
			this->marginLabel->ForeColor = System::Drawing::Color::Cyan;
			this->marginLabel->Location = System::Drawing::Point(3, 120);
			this->marginLabel->Name = L"marginLabel";
			this->marginLabel->Size = System::Drawing::Size(63, 20);
			this->marginLabel->TabIndex = 99;
			this->marginLabel->Text = L"Margin: ";
			// 
			// labelCost
			// 
			this->labelCost->AutoSize = true;
			this->labelCost->ForeColor = System::Drawing::Color::Red;
			this->labelCost->Location = System::Drawing::Point(9, 110);
			this->labelCost->Name = L"labelCost";
			this->labelCost->Size = System::Drawing::Size(16, 13);
			this->labelCost->TabIndex = 100;
			this->labelCost->Text = L"-$";
			// 
			// labelSaleCost
			// 
			this->labelSaleCost->AutoSize = true;
			this->labelSaleCost->ForeColor = System::Drawing::Color::LawnGreen;
			this->labelSaleCost->Location = System::Drawing::Point(87, 109);
			this->labelSaleCost->Name = L"labelSaleCost";
			this->labelSaleCost->Size = System::Drawing::Size(19, 13);
			this->labelSaleCost->TabIndex = 101;
			this->labelSaleCost->Text = L"+$";
			// 
			// labelFree
			// 
			this->labelFree->AutoSize = true;
			this->labelFree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelFree->ForeColor = System::Drawing::Color::LawnGreen;
			this->labelFree->Location = System::Drawing::Point(230, 105);
			this->labelFree->Name = L"labelFree";
			this->labelFree->Size = System::Drawing::Size(68, 25);
			this->labelFree->TabIndex = 102;
			this->labelFree->Text = L"FREE";
			// 
			// labelLost
			// 
			this->labelLost->AutoSize = true;
			this->labelLost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLost->ForeColor = System::Drawing::Color::Red;
			this->labelLost->Location = System::Drawing::Point(312, 105);
			this->labelLost->Name = L"labelLost";
			this->labelLost->Size = System::Drawing::Size(67, 25);
			this->labelLost->TabIndex = 103;
			this->labelLost->Text = L"LOST";
			// 
			// infoDiv
			// 
			this->infoDiv->AutoSize = true;
			this->infoDiv->BackColor = System::Drawing::Color::Gray;
			this->infoDiv->Controls->Add(this->NameSample);
			this->infoDiv->Controls->Add(this->Data_Count);
			this->infoDiv->Controls->Add(this->Data_is_ex);
			this->infoDiv->Controls->Add(this->data_shelf_life_days);
			this->infoDiv->Controls->Add(this->Data_price_buy);
			this->infoDiv->Controls->Add(this->Data_price_sale);
			this->infoDiv->Controls->Add(this->marginLabel);
			this->infoDiv->Controls->Add(this->LocationName);
			this->infoDiv->Controls->Add(this->CapacityW);
			this->infoDiv->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->infoDiv->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infoDiv->Location = System::Drawing::Point(392, 17);
			this->infoDiv->Name = L"infoDiv";
			this->infoDiv->Size = System::Drawing::Size(242, 183);
			this->infoDiv->TabIndex = 104;
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::DimGray;
			this->MenuPanel->Controls->Add(this->label1);
			this->MenuPanel->Controls->Add(this->showAddW);
			this->MenuPanel->Controls->Add(this->Show_add_sample);
			this->MenuPanel->Controls->Add(this->Show_Add);
			this->MenuPanel->Controls->Add(this->editSample);
			this->MenuPanel->Controls->Add(this->CheckDate);
			this->MenuPanel->Controls->Add(this->Check_Profit);
			this->MenuPanel->Controls->Add(this->Profit);
			this->MenuPanel->Location = System::Drawing::Point(4, 7);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(83, 497);
			this->MenuPanel->TabIndex = 105;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(7, 516);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::Gray;
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::Gray;
			this->splitContainer1->Panel2->Controls->Add(this->Out);
			this->splitContainer1->Panel2->Controls->Add(this->Text_Err);
			this->splitContainer1->Size = System::Drawing::Size(600, 84);
			this->splitContainer1->SplitterDistance = 76;
			this->splitContainer1->TabIndex = 106;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 29);
			this->label8->TabIndex = 1;
			this->label8->Text = L"ERR:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(4, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 29);
			this->label7->TabIndex = 0;
			this->label7->Text = L"INFO:";
			// 
			// comboBoxSort
			// 
			this->comboBoxSort->FormattingEnabled = true;
			this->comboBoxSort->Location = System::Drawing::Point(1262, 32);
			this->comboBoxSort->Name = L"comboBoxSort";
			this->comboBoxSort->Size = System::Drawing::Size(121, 21);
			this->comboBoxSort->TabIndex = 107;
			// 
			// sortP
			// 
			this->sortP->Location = System::Drawing::Point(1181, 32);
			this->sortP->Name = L"sortP";
			this->sortP->Size = System::Drawing::Size(75, 23);
			this->sortP->TabIndex = 108;
			this->sortP->Text = L"Sort";
			this->sortP->UseVisualStyleBackColor = true;
			this->sortP->Click += gcnew System::EventHandler(this, &MyForm1::sortP_Click);
			// 
			// updateName
			// 
			this->updateName->Location = System::Drawing::Point(1181, 4);
			this->updateName->Name = L"updateName";
			this->updateName->Size = System::Drawing::Size(75, 23);
			this->updateName->TabIndex = 109;
			this->updateName->Text = L"Update Name";
			this->updateName->UseVisualStyleBackColor = true;
			this->updateName->Click += gcnew System::EventHandler(this, &MyForm1::updateName_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(1284, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 110;
			this->label9->Text = L"Sort by name";
			// 
			// comboBoxAddress
			// 
			this->comboBoxAddress->FormattingEnabled = true;
			this->comboBoxAddress->Location = System::Drawing::Point(1389, 32);
			this->comboBoxAddress->Name = L"comboBoxAddress";
			this->comboBoxAddress->Size = System::Drawing::Size(121, 21);
			this->comboBoxAddress->TabIndex = 111;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(1400, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 13);
			this->label10->TabIndex = 112;
			this->label10->Text = L"Sort by warehouse";
			// 
			// comboBoxCost
			// 
			this->comboBoxCost->FormattingEnabled = true;
			this->comboBoxCost->Location = System::Drawing::Point(1516, 32);
			this->comboBoxCost->Name = L"comboBoxCost";
			this->comboBoxCost->Size = System::Drawing::Size(121, 21);
			this->comboBoxCost->TabIndex = 113;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Silver;
			this->label11->Location = System::Drawing::Point(1534, 16);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 13);
			this->label11->TabIndex = 114;
			this->label11->Text = L"Sort by sale cost";
			// 
			// groupBoxEdit
			// 
			this->groupBoxEdit->Controls->Add(this->editPriceBuy);
			this->groupBoxEdit->Controls->Add(this->editComboBox);
			this->groupBoxEdit->Controls->Add(this->editLifeDays);
			this->groupBoxEdit->Controls->Add(this->editPriceSale);
			this->groupBoxEdit->Controls->Add(this->edit);
			this->groupBoxEdit->Controls->Add(this->nameEdit);
			this->groupBoxEdit->Controls->Add(this->sizeEdit);
			this->groupBoxEdit->Controls->Add(this->isExpDate);
			this->groupBoxEdit->Controls->Add(this->priceEdit);
			this->groupBoxEdit->Controls->Add(this->priceSaleEdit);
			this->groupBoxEdit->Controls->Add(this->daysEdit);
			this->groupBoxEdit->Controls->Add(this->editCount);
			this->groupBoxEdit->Location = System::Drawing::Point(93, 423);
			this->groupBoxEdit->Name = L"groupBoxEdit";
			this->groupBoxEdit->Size = System::Drawing::Size(627, 81);
			this->groupBoxEdit->TabIndex = 115;
			this->groupBoxEdit->TabStop = false;
			this->groupBoxEdit->Visible = false;
			// 
			// groupBoxWarehouse
			// 
			this->groupBoxWarehouse->Controls->Add(this->addWarehouse);
			this->groupBoxWarehouse->Controls->Add(this->NameW);
			this->groupBoxWarehouse->Controls->Add(this->Length);
			this->groupBoxWarehouse->Controls->Add(this->Width);
			this->groupBoxWarehouse->Controls->Add(this->Floors);
			this->groupBoxWarehouse->Controls->Add(this->fullness);
			this->groupBoxWarehouse->Controls->Add(this->label17);
			this->groupBoxWarehouse->Controls->Add(this->label18);
			this->groupBoxWarehouse->Controls->Add(this->label19);
			this->groupBoxWarehouse->Controls->Add(this->label20);
			this->groupBoxWarehouse->Location = System::Drawing::Point(93, 317);
			this->groupBoxWarehouse->Name = L"groupBoxWarehouse";
			this->groupBoxWarehouse->Size = System::Drawing::Size(626, 100);
			this->groupBoxWarehouse->TabIndex = 116;
			this->groupBoxWarehouse->TabStop = false;
			this->groupBoxWarehouse->Visible = false;
			// 
			// groupBoxProduct
			// 
			this->groupBoxProduct->Controls->Add(this->NameWLabel);
			this->groupBoxProduct->Controls->Add(this->comboBox1);
			this->groupBoxProduct->Controls->Add(this->NameProduct);
			this->groupBoxProduct->Controls->Add(this->Add_Product);
			this->groupBoxProduct->Controls->Add(this->numericUpDown1);
			this->groupBoxProduct->Controls->Add(this->CountProductLabel);
			this->groupBoxProduct->Controls->Add(this->Sale_B);
			this->groupBoxProduct->Controls->Add(this->Buy_B);
			this->groupBoxProduct->Controls->Add(this->Lost_B);
			this->groupBoxProduct->Controls->Add(this->comboBox2);
			this->groupBoxProduct->Controls->Add(this->labelCost);
			this->groupBoxProduct->Controls->Add(this->labelSaleCost);
			this->groupBoxProduct->Controls->Add(this->infoDiv);
			this->groupBoxProduct->Controls->Add(this->labelFree);
			this->groupBoxProduct->Controls->Add(this->labelLost);
			this->groupBoxProduct->Location = System::Drawing::Point(93, 94);
			this->groupBoxProduct->Name = L"groupBoxProduct";
			this->groupBoxProduct->Size = System::Drawing::Size(642, 217);
			this->groupBoxProduct->TabIndex = 117;
			this->groupBoxProduct->TabStop = false;
			this->groupBoxProduct->Visible = false;
			// 
			// groupBoxProductSample
			// 
			this->groupBoxProductSample->Controls->Add(this->label2);
			this->groupBoxProductSample->Controls->Add(this->label6);
			this->groupBoxProductSample->Controls->Add(this->AddSample);
			this->groupBoxProductSample->Controls->Add(this->name);
			this->groupBoxProductSample->Controls->Add(this->count_on_one_pallet);
			this->groupBoxProductSample->Controls->Add(this->shelf_life_days);
			this->groupBoxProductSample->Controls->Add(this->price_buy);
			this->groupBoxProductSample->Controls->Add(this->price_sale);
			this->groupBoxProductSample->Controls->Add(this->is_expiration_date);
			this->groupBoxProductSample->Controls->Add(this->label3);
			this->groupBoxProductSample->Controls->Add(this->label4);
			this->groupBoxProductSample->Controls->Add(this->label5);
			this->groupBoxProductSample->Location = System::Drawing::Point(93, 4);
			this->groupBoxProductSample->Name = L"groupBoxProductSample";
			this->groupBoxProductSample->Size = System::Drawing::Size(629, 84);
			this->groupBoxProductSample->TabIndex = 118;
			this->groupBoxProductSample->TabStop = false;
			this->groupBoxProductSample->Visible = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->ClientSize = System::Drawing::Size(1656, 612);
			this->Controls->Add(this->groupBoxProductSample);
			this->Controls->Add(this->groupBoxWarehouse);
			this->Controls->Add(this->groupBoxProduct);
			this->Controls->Add(this->groupBoxEdit);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBoxCost);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBoxAddress);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->updateName);
			this->Controls->Add(this->sortP);
			this->Controls->Add(this->comboBoxSort);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->MenuPanel);
			this->Controls->Add(this->warehouses);
			this->Controls->Add(this->SaleList);
			this->Controls->Add(this->BuyList);
			this->Controls->Add(this->Product);
			this->Controls->Add(this->Sample);
			this->Controls->Add(this->dataBox);
			this->Name = L"MyForm1";
			this->Text = L"Warehouse";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Length))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Width))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Floors))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataBox))->EndInit();
			this->infoDiv->ResumeLayout(false);
			this->infoDiv->PerformLayout();
			this->MenuPanel->ResumeLayout(false);
			this->MenuPanel->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBoxEdit->ResumeLayout(false);
			this->groupBoxEdit->PerformLayout();
			this->groupBoxWarehouse->ResumeLayout(false);
			this->groupBoxWarehouse->PerformLayout();
			this->groupBoxProduct->ResumeLayout(false);
			this->groupBoxProduct->PerformLayout();
			this->groupBoxProductSample->ResumeLayout(false);
			this->groupBoxProductSample->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}






		   // ------------------------------------------------------------


		

	   private: System::Void OffAll() {
		   groupBoxProductSample->Visible = false;
		   groupBoxProduct->Visible = false;
		   groupBoxWarehouse->Visible = false;
		   groupBoxEdit->Visible = false;

		   


	   }

	   // ------------------------------------------------------------




			  private: System::Void ShowProfit() {
				  double profit = calculateProfit();
				  Profit->Text = L"Profit: " + profit.ToString("F2") + L"$";
				  Profit->Visible = true;
				  if (profit > 0) {
					  Profit->ForeColor = System::Drawing::Color::Lime;
				  }
				  else if (profit < 0) {
					  Profit->ForeColor = System::Drawing::Color::Red;
				  }
				  else {
					  Profit->ForeColor = System::Drawing::Color::Yellow;
				  }
			  }












private: System::Void updateBox(System::Windows::Forms::ComboBox^ comboBox, const std::string& filename, int columnIndex) {


	System::String^ filenameS = gcnew System::String(filename.c_str());

	cli::array<String^>^ columnData2 = GetColumn(filenameS, columnIndex);
	comboBox->Items->Clear();
	for (int i = 0; i < columnData2->Length; i++) {
		comboBox->Items->Add(columnData2[i]);
	}

}

private: System::Void moveBox(System::Windows::Forms::GroupBox^ groupBox) {

	groupBox->Location = System::Drawing::Point(100, 30);
}





	   private: System::Void readData(const std::string& filename) {
		   dataBox->AllowUserToAddRows = false;
		   dataBox->Rows->Clear();
		   dataBox->Columns->Clear();

		   std::ifstream file(filename);
		   std::string line;

		   if (!file.is_open()) return;

		   bool isHeader = true;

		   while (std::getline(file, line)) {

			   if (line.empty()) continue;

			   std::istringstream iss(line);
			   std::vector<std::string> fields;
			   std::string field;

			   while (iss >> field) { // лучше чем getline(..., ' ')
				   fields.push_back(field);
			   }

			   // ================= HEADER =================
			   if (isHeader) {

				   for (size_t i = 0; i < fields.size(); i++) {
					   dataBox->Columns->Add(
						   gcnew String(("col" + std::to_string(i)).c_str()),
						   gcnew String(fields[i].c_str())
					   );
				   }

				   isHeader = false;
				   continue;
			   }

			   // ================= DATA =================
			   dataBox->Rows->Add();

			   int rowIndex = dataBox->Rows->Count - 1;

			   for (size_t i = 0; i < fields.size() && i < dataBox->Columns->Count; i++) {
				   dataBox->Rows[rowIndex]->Cells[i]->Value =
					   gcnew String(fields[i].c_str());
			   }
		   }

		   file.close();
	   }






				   private: System::Void changeDataOccupancy() {
					  
					   System::String^ a = comboBox2->Text;

					   std::string std_a = msclr::interop::marshal_as<std::string>(a);
					   cli::array<String^>^ data = takeDataInWarehouse(std_a);

					   //------------------

					   String^ fixedStr1 = data[1]->Replace(".", ",");
					   String^ fixedStr2 = data[2]->Replace(".", ",");


					   float dataFloat1 = System::Single::Parse(fixedStr1);// can't convert "0.0" can only convert "0,0"
					   float dataFloat2 = System::Single::Parse(fixedStr2);// can't convert "0.0" can only convert "0,0"

					   LocationName->Text = "Location: " + data[0];
					   CapacityW->Text = "Occupancy: " + data[1] + L"/" + data[2];



					   if ((dataFloat1 / dataFloat2) < 0.80) {
						   CapacityW->Visible = true;
						   CapacityW->ForeColor = System::Drawing::Color::LawnGreen;
					   }
					   else if ((dataFloat1 / dataFloat2) < 0.40) {
						   CapacityW->Visible = true;
						   CapacityW->ForeColor = System::Drawing::Color::Yellow;
					   }
					   else {
						   CapacityW->Visible = true;
						   CapacityW->ForeColor = System::Drawing::Color::Red;
					   }
				   }





private: System::Void UpdateVolume()
{
	int len = (int)Length->Value;
	int width = (int)Width->Value;
	int floors = (int)Floors->Value;

	int volume = len * width * floors;

	fullness->Text = L"Fullness: " + volume + L" Pallet";
}








private: System::Void FilterByValue(
	const std::string& filename,
	const std::string& nameFilter,      
	const std::string& addressFilter,   
	const std::string& priceFilter)     
{
	dataBox->AllowUserToAddRows = false;
	dataBox->Rows->Clear();
	dataBox->Columns->Clear();

	std::ifstream file(filename);
	std::string line;

	if (!file.is_open()) return;

	bool isHeader = true;

	while (std::getline(file, line))
	{
		if (line.empty()) continue;

		std::istringstream iss(line);

		std::vector<std::string> fields;
		std::string field;

		while (iss >> field)
		{
			fields.push_back(field);
		}

		// ===== HEADER =====
		if (isHeader)
		{
			for (size_t i = 0; i < fields.size(); i++)
			{
				dataBox->Columns->Add(
					gcnew String(("col" + std::to_string(i)).c_str()),
					gcnew String(fields[i].c_str())
				);
			}

			isHeader = false;
			continue;
		}

		

		
		bool matchName = true;

		if (!nameFilter.empty())
		{
			matchName = (fields[1] == nameFilter);
		}

		
		bool matchAddress = true;

		if (!addressFilter.empty())
		{
			matchAddress = (fields[4] == addressFilter);
		}

	
		bool matchPrice = true;

		if (!priceFilter.empty())
		{
			
			cli::array<System::String^>^ sampleData =
				takeDataInSample(fields[1]);

			if (sampleData != nullptr)
			{
				// priceSale = data[6]
				System::String^ managedPrice = sampleData[6];
				std::string price = msclr::interop::marshal_as<std::string>( managedPrice);

				matchPrice = (price == priceFilter);
			}
			else
			{
				matchPrice = false;
			}
		}

		if (matchName && matchAddress && matchPrice)
		{
			dataBox->Rows->Add();

			int rowIndex = dataBox->Rows->Count - 1;

			for (size_t i = 0; i < fields.size(); i++)
			{
				dataBox->Rows[rowIndex]->Cells[i]->Value =
					gcnew String(fields[i].c_str());
			}
		}
	}

	file.close();
}
	   // ------------------------------------------------------------






private: System::Void AddSample_Click(System::Object^ sender, System::EventArgs^ e) {

	Out->Visible = true;

	ProductSample sample;

	
	//sample.id = 0;

	

	
	sample.name = replaceSpaces((msclr::interop::marshal_as<std::string>(name->Text)));
	sample.is_expiration_date = is_expiration_date->Checked;
	sample.count_on_one_pallet = stoi(msclr::interop::marshal_as<std::string>(count_on_one_pallet->Text));

	sample.price_buy = stod(msclr::interop::marshal_as<std::string>(price_buy->Text));
	sample.price_sale = stod(msclr::interop::marshal_as<std::string>(price_sale->Text));
	if (sample.is_expiration_date) {
		sample.shelf_life_days = stoi(msclr::interop::marshal_as<std::string>(shelf_life_days->Text));
		int result = writeDataProductSample( sample.name, sample.count_on_one_pallet, sample.is_expiration_date, sample.shelf_life_days, sample.price_buy, sample.price_sale);
		if (result == 0) {
			Text_Err->Visible = false;
			Text_Err->Text = "Err: 0";
			Out->Text = L"Sample added: " + name->Text;
		}
		else if (result == 2) {
			Text_Err->Visible = true;
			Text_Err->Text = "Err: Name already exists";
		}
		else if (result == 1) {
			Text_Err->Visible = true;
			Text_Err->Text = "Err: File error";
		}
	}
	else {
		int result = writeDataProductSample( sample.name, sample.count_on_one_pallet, sample.is_expiration_date, 0, sample.price_buy, sample.price_sale);
		if (result == 0) {
			Text_Err->Visible = false;
			Text_Err->Text = "0";
			Out->Text = L"Sample added: " + name->Text;
		}
		else if (result == 2) {
			Text_Err->Visible = true;
			Text_Err->Text = "Name already exists";
		}
		else if (result == 1) {
			Text_Err->Visible = true;
			Text_Err->Text = "File error";
		}
	}
}



private: System::Void Show_add_sample_Click(System::Object^ sender, System::EventArgs^ e) {
	
	bool isVisible = groupBoxProductSample->Visible;
	
	OffAll();
	


	if (!(isVisible)){
		groupBoxProductSample->Visible = true;
	}
	updateBox(comboBox1, "Product_Sample.txt", 1);

	moveBox(groupBoxProductSample);
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	System::String^ a = comboBox1->Text;
	NameSample->Text = "Name: " + a;


	std::string std_a = msclr::interop::marshal_as<std::string>(a);
	cli::array<String^>^ data = takeDataInSample(std_a);

	Data_Count->Text = L"Size: 1/" + data[2];


	String^ fixedStr1 = data[5]->Replace(".", ",");
	String^ fixedStr2 = data[6]->Replace(".", ",");


	double price_buy = System::Single::Parse(fixedStr1);// can't convert "0.0" can only convert "0,0"
	double price_sale = System::Single::Parse(fixedStr2);// can't convert "0.0" can only convert "0,0"

	price_buy = Math::Round(price_buy, 2);
	price_sale = Math::Round(price_sale, 2);

	double margin = price_sale - price_buy;
	margin = Math::Round(margin, 2);

	marginLabel->Text = L"Margin: " + margin.ToString() + L"$";

	Data_price_buy->Text = L"Price buy: " + price_buy.ToString() + L"$";
	labelCost->Text = L"-" + price_buy.ToString() + L"$";

	Data_price_sale->Text = L"Price sale: " + price_sale.ToString() + L"$";
	labelSaleCost->Text = L"+" + price_sale.ToString() + L"$";




	if (data[3] == "1") {
		Data_is_ex->Text = "Is expiration date: Yes";

	

		data_shelf_life_days->Visible = true;
		data_shelf_life_days->Text = L"Shelf life days: " + data[4];

		
	}
	else {
		Data_is_ex->Text = "Is expiration date: No";
		data_shelf_life_days->Visible = false;


		
	}



}

private: System::Void Add_Product_Click(System::Object^ sender, System::EventArgs^ e) {

	Out->Visible = true;

	

	string name = msclr::interop::marshal_as<std::string>(comboBox1->Text);
	string warehouse = msclr::interop::marshal_as<std::string>(comboBox2->Text);


	int count = static_cast<int>(numericUpDown1->Value);
	if (count <= 0) {
		Text_Err->Visible = true;
		Text_Err->Text = "Count must be greater than 0";
		return;
	}
	int result = writeDataProductBuy(name, count, warehouse, false);

	if (result == 0) {
		Text_Err->Visible = false;
		Text_Err->Text = "0";
		Out->Text = L"Added: " + comboBox1->Text + L" Count: " + numericUpDown1->Value.ToString();
	}
	
	else if (result == 1) {
		Text_Err->Visible = true;
		Text_Err->Text = "File error";
	}
	else if (result == 2) {
		Text_Err->Visible = true;
		Text_Err->Text = "Warehouse not found";
		return;
	}
	else if (result == 3) {
		Text_Err->Visible = true;
		Text_Err->Text = "No enough space";
	}
	else if (result == 4) {
		Text_Err->Visible = true;
		Text_Err->Text = "Product sample not found";
		return;
	}
	else if (result == 5) {
		Text_Err->Visible = true;
		Text_Err->Text = "Warehouse not found";
		return;
	}

	changeDataOccupancy();
	ShowProfit();
}

	







private: System::Void Show_Add_Click(System::Object^ sender, System::EventArgs^ e) {

	updateBox(comboBox2, "Warehouse.txt", 1);

	updateBox(comboBox1, "Product_Sample.txt", 1);

	bool isButtonVisible = Add_Product->Visible ;

	OffAll();

	if (!isButtonVisible) {
		groupBoxProduct->Visible = true;
		

	}
	
	moveBox(groupBoxProduct);
	
}




	   // ------------------------------------------------------------
private: System::Void Buy_B_Click(System::Object^ sender, System::EventArgs^ e) {

	string name = msclr::interop::marshal_as<std::string>(comboBox1->Text);
	string warehouse = msclr::interop::marshal_as<std::string>(comboBox2->Text);

	int count = static_cast<int>(numericUpDown1->Value);
	if (count <= 0) {
		Text_Err->Visible = true;
		Text_Err->Text = "Count must be greater than 0";
		return;
	}
	int result = writeDataProductBuy(name, count, warehouse, true);

	if (result == 0) {
		Text_Err->Visible = false;
		Text_Err->Text = "0";
		Out->Text = L"Added: " + comboBox1->Text + L" Count: " + numericUpDown1->Value.ToString();
	}

	else if (result == 1) {
		Text_Err->Visible = true;
		Text_Err->Text = "File error";
	}
	else if (result == 2) {
		Text_Err->Visible = true;
		Text_Err->Text = "Warehouse not found";
		return;
	}

	else if (result == 3) {
		Text_Err->Visible = true;
		Text_Err->Text = "No enough space";
		return;
	}
	else if (result == 4) {
		Text_Err->Visible = true;
		Text_Err->Text = "Product sample not found";
		return;
	}
	else if (result == 5) {
		Text_Err->Visible = true;
		Text_Err->Text = "Warehouse not found";
		return;
	}

	changeDataOccupancy();
	
	ShowProfit();

}
private: System::Void Sale_B_Click(System::Object^ sender, System::EventArgs^ e) {

	Out->Visible = true;


	
	string name = msclr::interop::marshal_as<std::string>(comboBox1->Text);


	int count = static_cast<int>(numericUpDown1->Value);
	if (count <= 0) {
		Text_Err->Visible = true;
		Text_Err->Text = "Count must be greater than 0";
		return;
	}
	int result = writeDataProductSale(name, count, false);

	if (result == 0) {
		Text_Err->Visible = false;
		Text_Err->Text = "0";
		Out->Text = L"Sold: " + comboBox1->Text + L" Count: " + numericUpDown1->Value.ToString();
	}

	else if (result == 1) {
		Text_Err->Visible = true;
		Text_Err->Text = "Out of stock";
		return;
	}

	else if (result == 2) {
		Text_Err->Visible = true;
		Text_Err->Text = "Warehouse not found";
		return;
	}
	changeDataOccupancy();
	
	ShowProfit();

}
private: System::Void Lost_B_Click(System::Object^ sender, System::EventArgs^ e) {
	

	string name = msclr::interop::marshal_as<std::string>(comboBox1->Text);


	int count = static_cast<int>(numericUpDown1->Value);
	if (count <= 0) {
		Text_Err->Visible = true;
		Text_Err->Text = "Count must be greater than 0";
		return;
	}
	int result = writeDataProductSale(name, count, true);

	if (result == 0) {
		Text_Err->Visible = false;
		Text_Err->Text = "0";
		Out->Text = L"Lost: " + comboBox1->Text + L" Count: " + numericUpDown1->Value.ToString();
	}

	else if (result == 1) {
		Text_Err->Visible = true;
		Text_Err->Text = "Out of stock";
		return;
	}
	else if (result == 2) {
		Text_Err->Visible = true;
		Text_Err->Text = "Warehouse not found";
		return;
	}
	changeDataOccupancy();

	ShowProfit();
}




private: System::Void Check_Profit_Click(System::Object^ sender, System::EventArgs^ e) {

	ShowProfit();


}
private: System::Void addWarehouse_Click(System::Object^ sender, System::EventArgs^ e) {


}


	   


private: System::Void Length_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateVolume();


}
private: System::Void Width_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateVolume();

}
private: System::Void Floors_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateVolume();
}

private: System::Void addWarehouse_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	Out->Visible = true;
	
	int len = (int)Length->Value;
	int width = (int)Width->Value;
	int floors = (int)Floors->Value;


	if (len <= 0 || width <= 0 || floors <= 0) {
		Text_Err->Visible = true;
		Text_Err->Text = "Length, Width and Floors must be greater than 0";
		return;
	}



	int volume = len * width * floors;

	 Warehouse box;


	//sample.id = 0;




	box.name = replaceSpaces(msclr::interop::marshal_as<std::string>(NameW->Text));
	//box.address = msclr::interop::marshal_as<std::string>(addressW->Text);	
	box.length = len;
	box.width = width;
	box.height = floors;
	box.capacity = volume;
	
	int result = writeDataWarehouse(box.name, box.length, box.width, box.height, box.capacity);

	if (result == 0) {
		Out->Text = L"Added: " + NameW->Text;
	}
	else if (result == 1) {
		Text_Err->Visible = true;
		Text_Err->Text = "File error";
	}
	else if (result == 2) {
		Text_Err->Visible = true;
		Text_Err->Text = "Name already exists";
	}

}

	   // ------------------------------------------------------------



			  // ------------------------------------------------------------


private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	changeDataOccupancy();


}

private: System::Void Sample_Click(System::Object^ sender, System::EventArgs^ e) {
	readData("Product_Sample.txt");


}
private: System::Void Product_Click(System::Object^ sender, System::EventArgs^ e) {
	readData("Product.txt");
}
private: System::Void BuyList_Click(System::Object^ sender, System::EventArgs^ e) {
	readData("Purchase.txt");
}
private: System::Void SaleList_Click(System::Object^ sender, System::EventArgs^ e) {
	readData("Sales.txt");
}
private: System::Void warehouses_Click(System::Object^ sender, System::EventArgs^ e) {
	readData("Warehouse.txt");
}

private: System::Void CheckDate_Click(System::Object^ sender, System::EventArgs^ e) {
	Out->Visible = true;
	int result = checkDateProduct();

	
	
	if (result == 0) {

		Out->Text = "No expired products found";
	}
	else {
		Out->Text = L"Expired products found: " + System::Convert::ToString(result);
	}


}
private: System::Void editSample_Click(System::Object^ sender, System::EventArgs^ e) {


	bool isVisible = groupBoxEdit->Visible;

	OffAll();
	

	cli::array<String^>^ columnData2 = GetColumn("Product_Sample.txt", 1);
	editComboBox->Items->Clear();
	for (int i = 0; i < columnData2->Length; i++) {
		editComboBox->Items->Add(columnData2[i]);
	}

	if (!(isVisible)) {

		groupBoxEdit->Visible = true;

		

		moveBox(groupBoxEdit);


	}
	
	

}

private: System::Void editClick(System::Object^ sender, System::EventArgs^ e) {
	
	Out->Visible = true;
	
	
	ProductSample sample;


	//sample.id = 0;




	sample.name = msclr::interop::marshal_as<std::string>(editComboBox->Text);
	sample.is_expiration_date = isExpDate->Checked;
	sample.count_on_one_pallet = stoi(msclr::interop::marshal_as<std::string>(editCount->Text));

	sample.price_buy = round(stod(msclr::interop::marshal_as<std::string>(editPriceBuy->Text)) * 100.0) / 100.0;
	sample.price_sale = round(stod(msclr::interop::marshal_as<std::string>(editPriceSale->Text)) * 100.0) / 100.0;





	if (sample.is_expiration_date) {
		sample.shelf_life_days = stoi(msclr::interop::marshal_as<std::string>(editLifeDays->Text));
		int result = editSampleProduct(sample.name, sample.count_on_one_pallet, sample.is_expiration_date, sample.shelf_life_days, sample.price_buy, sample.price_sale);
		if (result == 0) {
			Text_Err->Visible = false;
			Text_Err->Text = "0";
			Out->Text = L"Sample added: " + editComboBox->Text;
		}
		else if (result == 2) {
			Text_Err->Visible = true;
			Text_Err->Text = "Name already exists";
		}
		else if (result == 1) {
			Text_Err->Visible = true;
			Text_Err->Text = "File error";
		}
	}
	else {
		int result = editSampleProduct(sample.name, sample.count_on_one_pallet, sample.is_expiration_date, 0, sample.price_buy, sample.price_sale);
		if (result == 0) {
			Text_Err->Visible = false;
			Text_Err->Text = "0";
			Out->Text = L"Sample added: " + editComboBox->Text;
		}
		else if (result == 2) {
			Text_Err->Visible = true;
			Text_Err->Text = "Name already exists";
		}
		else if (result == 1) {
			Text_Err->Visible = true;
			Text_Err->Text = "File error";
		}
	}

}
private: System::Void editComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	
	System::String^ a = editComboBox->Text;


	
	std::string std_a = msclr::interop::marshal_as<std::string>(a);
	cli::array<String^>^ data = takeDataInSample(std_a);


	editCount->Text = data[2];
	isExpDate->Checked = (data[3] == "1");
	editLifeDays->Text = data[4];
	editPriceBuy->Text = data[5];
	editPriceSale->Text = data[6];

}
private: System::Void showAddW_Click(System::Object^ sender, System::EventArgs^ e) {

	bool isVisible = groupBoxWarehouse->Visible;

	OffAll();


	if (isVisible) {
		return;
	}
	groupBoxWarehouse->Visible = true;

	moveBox(groupBoxWarehouse);

}




private: System::Void sortP_Click(System::Object^ sender, System::EventArgs^ e) {

	string Name = msclr::interop::marshal_as<std::string>(comboBoxSort->Text);

	string Address = msclr::interop::marshal_as<std::string>(comboBoxAddress->Text);

	string Cost = msclr::interop::marshal_as<std::string>(comboBoxCost->Text);





	FilterByValue("Product.txt", Name, Address, Cost);

}
private: System::Void updateName_Click(System::Object^ sender, System::EventArgs^ e) {
	updateBox(comboBoxSort, "Product_Sample.txt", 1);
	updateBox(comboBoxAddress, "Warehouse.txt", 1);
	updateBox(comboBoxCost, "Product_Sample.txt", 6);


}



};
}
