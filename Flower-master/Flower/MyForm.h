#pragma once
#include "Flower.h"
#include <windows.h>
#include "Sunflower.h"
namespace Flower {

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
		}

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

	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Цветок;
	private: System::Windows::Forms::Button^ buttonWaterFlower;
	private: System::Windows::Forms::Button^ buttonNewFlower;
	private: System::Windows::Forms::Label^ labelParamFlower;
	private: System::Windows::Forms::Label^ lblt1;


	private: System::Windows::Forms::TabPage^ Подсолнух;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ seasonBarSunflower;
	private: System::Windows::Forms::TrackBar^ dayTimeBarSunflower;
	private: System::Windows::Forms::Label^ lblw2;
	private: System::Windows::Forms::Label^ lblt2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ buttonWaterSunflower;
	private: System::Windows::Forms::Button^ buttonNewSunflower;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ labelParamSunflower;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Button^ buttonSeeds;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ can;
	private: System::Windows::Forms::PictureBox^ can2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar5;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::TrackBar^ temperatureBarSunflower;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Цветок = (gcnew System::Windows::Forms::TabPage());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->can = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonWaterFlower = (gcnew System::Windows::Forms::Button());
			this->buttonNewFlower = (gcnew System::Windows::Forms::Button());
			this->labelParamFlower = (gcnew System::Windows::Forms::Label());
			this->lblt1 = (gcnew System::Windows::Forms::Label());
			this->Подсолнух = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->can2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonSeeds = (gcnew System::Windows::Forms::Button());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->labelParamSunflower = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->buttonWaterSunflower = (gcnew System::Windows::Forms::Button());
			this->buttonNewSunflower = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->seasonBarSunflower = (gcnew System::Windows::Forms::TrackBar());
			this->dayTimeBarSunflower = (gcnew System::Windows::Forms::TrackBar());
			this->lblw2 = (gcnew System::Windows::Forms::Label());
			this->lblt2 = (gcnew System::Windows::Forms::Label());
			this->temperatureBarSunflower = (gcnew System::Windows::Forms::TrackBar());
			this->tabControl1->SuspendLayout();
			this->Цветок->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->can))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Подсолнух->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->can2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seasonBarSunflower))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dayTimeBarSunflower))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temperatureBarSunflower))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->Цветок);
			this->tabControl1->Controls->Add(this->Подсолнух);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(772, 546);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// Цветок
			// 
			this->Цветок->AllowDrop = true;
			this->Цветок->BackColor = System::Drawing::Color::LightGreen;
			this->Цветок->Controls->Add(this->progressBar5);
			this->Цветок->Controls->Add(this->progressBar4);
			this->Цветок->Controls->Add(this->progressBar3);
			this->Цветок->Controls->Add(this->label6);
			this->Цветок->Controls->Add(this->can);
			this->Цветок->Controls->Add(this->pictureBox1);
			this->Цветок->Controls->Add(this->progressBar1);
			this->Цветок->Controls->Add(this->label26);
			this->Цветок->Controls->Add(this->label25);
			this->Цветок->Controls->Add(this->label24);
			this->Цветок->Controls->Add(this->label23);
			this->Цветок->Controls->Add(this->label22);
			this->Цветок->Controls->Add(this->label21);
			this->Цветок->Controls->Add(this->label17);
			this->Цветок->Controls->Add(this->label18);
			this->Цветок->Controls->Add(this->label19);
			this->Цветок->Controls->Add(this->label20);
			this->Цветок->Controls->Add(this->label13);
			this->Цветок->Controls->Add(this->label16);
			this->Цветок->Controls->Add(this->label4);
			this->Цветок->Controls->Add(this->label3);
			this->Цветок->Controls->Add(this->buttonWaterFlower);
			this->Цветок->Controls->Add(this->buttonNewFlower);
			this->Цветок->Controls->Add(this->labelParamFlower);
			this->Цветок->Controls->Add(this->lblt1);
			this->Цветок->Location = System::Drawing::Point(4, 22);
			this->Цветок->Margin = System::Windows::Forms::Padding(2);
			this->Цветок->Name = L"Цветок";
			this->Цветок->Padding = System::Windows::Forms::Padding(2);
			this->Цветок->Size = System::Drawing::Size(764, 520);
			this->Цветок->TabIndex = 0;
			this->Цветок->Text = L"Цветок";
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(399, 115);
			this->progressBar5->Maximum = 1;
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(294, 23);
			this->progressBar5->TabIndex = 40;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(373, 193);
			this->progressBar4->Maximum = 4;
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(339, 23);
			this->progressBar4->TabIndex = 39;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(393, 407);
			this->progressBar3->Maximum = 40;
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(300, 23);
			this->progressBar3->Step = 1;
			this->progressBar3->TabIndex = 38;
			this->progressBar3->Click += gcnew System::EventHandler(this, &MyForm::progressBar3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(370, 291);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Влажность почвы";
			// 
			// can
			// 
			this->can->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"can.Image")));
			this->can->Location = System::Drawing::Point(143, 6);
			this->can->Margin = System::Windows::Forms::Padding(2);
			this->can->Name = L"can";
			this->can->Size = System::Drawing::Size(219, 198);
			this->can->TabIndex = 36;
			this->can->TabStop = false;
			this->can->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(4, 6);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(359, 500);
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->progressBar1->Location = System::Drawing::Point(370, 306);
			this->progressBar1->Margin = System::Windows::Forms::Padding(2);
			this->progressBar1->Maximum = 30;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(362, 14);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 34;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(686, 323);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(52, 13);
			this->label26->TabIndex = 33;
			this->label26->Text = L"Высокая";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(536, 323);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(50, 13);
			this->label25->TabIndex = 32;
			this->label25->Text = L"Средняя";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(370, 323);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(45, 13);
			this->label24->TabIndex = 31;
			this->label24->Text = L"Низкая";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(688, 71);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(52, 13);
			this->label23->TabIndex = 30;
			this->label23->Text = L"Высокая";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(370, 71);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 13);
			this->label22->TabIndex = 29;
			this->label22->Text = L"Низкая";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(536, 71);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Средняя";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(368, 228);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Зима";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(477, 228);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(38, 13);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Весна";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(593, 228);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 13);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Лето";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(698, 228);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 13);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Осень";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(368, 150);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"День";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(704, 150);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(32, 13);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Ночь";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(368, 85);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Время суток";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(366, 163);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Время года";
			// 
			// buttonWaterFlower
			// 
			this->buttonWaterFlower->Location = System::Drawing::Point(669, 475);
			this->buttonWaterFlower->Margin = System::Windows::Forms::Padding(2);
			this->buttonWaterFlower->Name = L"buttonWaterFlower";
			this->buttonWaterFlower->Size = System::Drawing::Size(77, 31);
			this->buttonWaterFlower->TabIndex = 7;
			this->buttonWaterFlower->Text = L"Полить";
			this->buttonWaterFlower->UseVisualStyleBackColor = true;
			this->buttonWaterFlower->Click += gcnew System::EventHandler(this, &MyForm::buttonWaterFlower_Click);
			// 
			// buttonNewFlower
			// 
			this->buttonNewFlower->Location = System::Drawing::Point(500, 475);
			this->buttonNewFlower->Margin = System::Windows::Forms::Padding(2);
			this->buttonNewFlower->Name = L"buttonNewFlower";
			this->buttonNewFlower->Size = System::Drawing::Size(151, 31);
			this->buttonNewFlower->TabIndex = 6;
			this->buttonNewFlower->Text = L"Найти новый цветочек";
			this->buttonNewFlower->UseVisualStyleBackColor = true;
			this->buttonNewFlower->Click += gcnew System::EventHandler(this, &MyForm::buttonNewFlower_Click);
			// 
			// labelParamFlower
			// 
			this->labelParamFlower->AutoSize = true;
			this->labelParamFlower->Location = System::Drawing::Point(368, 257);
			this->labelParamFlower->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelParamFlower->Name = L"labelParamFlower";
			this->labelParamFlower->Size = System::Drawing::Size(69, 13);
			this->labelParamFlower->TabIndex = 4;
			this->labelParamFlower->Text = L"Дегидрация";
			// 
			// lblt1
			// 
			this->lblt1->AutoSize = true;
			this->lblt1->Location = System::Drawing::Point(370, 6);
			this->lblt1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblt1->Name = L"lblt1";
			this->lblt1->Size = System::Drawing::Size(74, 13);
			this->lblt1->TabIndex = 2;
			this->lblt1->Text = L"Температура";
			// 
			// Подсолнух
			// 
			this->Подсолнух->BackColor = System::Drawing::Color::Pink;
			this->Подсолнух->Controls->Add(this->label7);
			this->Подсолнух->Controls->Add(this->can2);
			this->Подсолнух->Controls->Add(this->buttonSeeds);
			this->Подсолнух->Controls->Add(this->progressBar2);
			this->Подсолнух->Controls->Add(this->pictureBox2);
			this->Подсолнух->Controls->Add(this->label30);
			this->Подсолнух->Controls->Add(this->label31);
			this->Подсолнух->Controls->Add(this->label32);
			this->Подсолнух->Controls->Add(this->labelParamSunflower);
			this->Подсолнух->Controls->Add(this->label27);
			this->Подсолнух->Controls->Add(this->label28);
			this->Подсолнух->Controls->Add(this->label29);
			this->Подсолнух->Controls->Add(this->temperatureBarSunflower);
			this->Подсолнух->Controls->Add(this->buttonWaterSunflower);
			this->Подсолнух->Controls->Add(this->buttonNewSunflower);
			this->Подсолнух->Controls->Add(this->label12);
			this->Подсолнух->Controls->Add(this->label11);
			this->Подсолнух->Controls->Add(this->label10);
			this->Подсолнух->Controls->Add(this->label9);
			this->Подсолнух->Controls->Add(this->label8);
			this->Подсолнух->Controls->Add(this->label5);
			this->Подсолнух->Controls->Add(this->label2);
			this->Подсолнух->Controls->Add(this->label1);
			this->Подсолнух->Controls->Add(this->seasonBarSunflower);
			this->Подсолнух->Controls->Add(this->dayTimeBarSunflower);
			this->Подсолнух->Controls->Add(this->lblw2);
			this->Подсолнух->Controls->Add(this->lblt2);
			this->Подсолнух->Location = System::Drawing::Point(4, 22);
			this->Подсолнух->Margin = System::Windows::Forms::Padding(2);
			this->Подсолнух->Name = L"Подсолнух";
			this->Подсолнух->Padding = System::Windows::Forms::Padding(2);
			this->Подсолнух->Size = System::Drawing::Size(764, 520);
			this->Подсолнух->TabIndex = 1;
			this->Подсолнух->Text = L"Подсолнух";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(368, 289);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 13);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Влажность почвы";
			// 
			// can2
			// 
			this->can2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"can2.Image")));
			this->can2->Location = System::Drawing::Point(145, 4);
			this->can2->Margin = System::Windows::Forms::Padding(2);
			this->can2->Name = L"can2";
			this->can2->Size = System::Drawing::Size(218, 176);
			this->can2->TabIndex = 41;
			this->can2->TabStop = false;
			this->can2->Visible = false;
			// 
			// buttonSeeds
			// 
			this->buttonSeeds->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSeeds->Enabled = false;
			this->buttonSeeds->Location = System::Drawing::Point(373, 475);
			this->buttonSeeds->Margin = System::Windows::Forms::Padding(2);
			this->buttonSeeds->Name = L"buttonSeeds";
			this->buttonSeeds->Size = System::Drawing::Size(118, 31);
			this->buttonSeeds->TabIndex = 40;
			this->buttonSeeds->Text = L"Собрать семечки";
			this->buttonSeeds->UseVisualStyleBackColor = true;
			this->buttonSeeds->Click += gcnew System::EventHandler(this, &MyForm::buttonSeeds_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(371, 315);
			this->progressBar2->Margin = System::Windows::Forms::Padding(2);
			this->progressBar2->Maximum = 30;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(364, 16);
			this->progressBar2->Step = 2;
			this->progressBar2->TabIndex = 35;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(4, 6);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(359, 501);
			this->pictureBox2->TabIndex = 39;
			this->pictureBox2->TabStop = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(683, 344);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(52, 13);
			this->label30->TabIndex = 38;
			this->label30->Text = L"Высокая";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(531, 344);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(50, 13);
			this->label31->TabIndex = 37;
			this->label31->Text = L"Средняя";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(368, 344);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(45, 13);
			this->label32->TabIndex = 36;
			this->label32->Text = L"Низкая";
			// 
			// labelParamSunflower
			// 
			this->labelParamSunflower->AutoSize = true;
			this->labelParamSunflower->Location = System::Drawing::Point(368, 266);
			this->labelParamSunflower->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelParamSunflower->Name = L"labelParamSunflower";
			this->labelParamSunflower->Size = System::Drawing::Size(69, 13);
			this->labelParamSunflower->TabIndex = 34;
			this->labelParamSunflower->Text = L"Дегидрация";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(688, 71);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(52, 13);
			this->label27->TabIndex = 33;
			this->label27->Text = L"Высокая";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(370, 71);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(45, 13);
			this->label28->TabIndex = 32;
			this->label28->Text = L"Низкая";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(536, 71);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(50, 13);
			this->label29->TabIndex = 31;
			this->label29->Text = L"Средняя";
			// 
			// buttonWaterSunflower
			// 
			this->buttonWaterSunflower->Location = System::Drawing::Point(669, 475);
			this->buttonWaterSunflower->Margin = System::Windows::Forms::Padding(2);
			this->buttonWaterSunflower->Name = L"buttonWaterSunflower";
			this->buttonWaterSunflower->Size = System::Drawing::Size(77, 31);
			this->buttonWaterSunflower->TabIndex = 21;
			this->buttonWaterSunflower->Text = L"Полить";
			this->buttonWaterSunflower->UseVisualStyleBackColor = true;
			this->buttonWaterSunflower->Click += gcnew System::EventHandler(this, &MyForm::buttonWaterSunflower_Click);
			// 
			// buttonNewSunflower
			// 
			this->buttonNewSunflower->Location = System::Drawing::Point(515, 475);
			this->buttonNewSunflower->Margin = System::Windows::Forms::Padding(2);
			this->buttonNewSunflower->Name = L"buttonNewSunflower";
			this->buttonNewSunflower->Size = System::Drawing::Size(133, 31);
			this->buttonNewSunflower->TabIndex = 20;
			this->buttonNewSunflower->Text = L"Найти новый цветочек";
			this->buttonNewSunflower->UseVisualStyleBackColor = true;
			this->buttonNewSunflower->Click += gcnew System::EventHandler(this, &MyForm::buttonNewSunflower_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(366, 248);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Зима";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(477, 248);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Весна";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(593, 248);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Лето";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(695, 248);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Осень";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(370, 155);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"День";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(704, 155);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Ночь";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(368, 184);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Время года";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(368, 91);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Время суток";
			// 
			// seasonBarSunflower
			// 
			this->seasonBarSunflower->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->seasonBarSunflower->Location = System::Drawing::Point(370, 200);
			this->seasonBarSunflower->Margin = System::Windows::Forms::Padding(2);
			this->seasonBarSunflower->Maximum = 4;
			this->seasonBarSunflower->Minimum = 1;
			this->seasonBarSunflower->Name = L"seasonBarSunflower";
			this->seasonBarSunflower->Size = System::Drawing::Size(364, 45);
			this->seasonBarSunflower->TabIndex = 9;
			this->seasonBarSunflower->Value = 3;
			this->seasonBarSunflower->ValueChanged += gcnew System::EventHandler(this, &MyForm::seasonBarSunflower_ValueChanged);
			// 
			// dayTimeBarSunflower
			// 
			this->dayTimeBarSunflower->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->dayTimeBarSunflower->Location = System::Drawing::Point(370, 107);
			this->dayTimeBarSunflower->Margin = System::Windows::Forms::Padding(2);
			this->dayTimeBarSunflower->Maximum = 2;
			this->dayTimeBarSunflower->Minimum = 1;
			this->dayTimeBarSunflower->Name = L"dayTimeBarSunflower";
			this->dayTimeBarSunflower->Size = System::Drawing::Size(364, 45);
			this->dayTimeBarSunflower->TabIndex = 8;
			this->dayTimeBarSunflower->Value = 1;
			this->dayTimeBarSunflower->ValueChanged += gcnew System::EventHandler(this, &MyForm::dayTimeBarSunflower_ValueChanged);
			// 
			// lblw2
			// 
			this->lblw2->AutoSize = true;
			this->lblw2->Location = System::Drawing::Point(369, 50);
			this->lblw2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblw2->Name = L"lblw2";
			this->lblw2->Size = System::Drawing::Size(63, 13);
			this->lblw2->TabIndex = 5;
			this->lblw2->Text = L"Влажность";
			// 
			// lblt2
			// 
			this->lblt2->AutoSize = true;
			this->lblt2->Location = System::Drawing::Point(370, 6);
			this->lblt2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblt2->Name = L"lblt2";
			this->lblt2->Size = System::Drawing::Size(74, 13);
			this->lblt2->TabIndex = 3;
			this->lblt2->Text = L"Температура";
			// 
			// temperatureBarSunflower
			// 
			this->temperatureBarSunflower->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->temperatureBarSunflower->Location = System::Drawing::Point(370, 23);
			this->temperatureBarSunflower->Margin = System::Windows::Forms::Padding(2);
			this->temperatureBarSunflower->Maximum = 3;
			this->temperatureBarSunflower->Minimum = 1;
			this->temperatureBarSunflower->Name = L"temperatureBarSunflower";
			this->temperatureBarSunflower->Size = System::Drawing::Size(364, 45);
			this->temperatureBarSunflower->TabIndex = 28;
			this->temperatureBarSunflower->Value = 2;
			this->temperatureBarSunflower->ValueChanged += gcnew System::EventHandler(this, &MyForm::temperatureBarSunflower_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(775, 550);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Flower";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->Цветок->ResumeLayout(false);
			this->Цветок->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->can))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Подсолнух->ResumeLayout(false);
			this->Подсолнух->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->can2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seasonBarSunflower))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dayTimeBarSunflower))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->temperatureBarSunflower))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	protected:
		Flowers^ pinkFlower;
		SFlower^ sunFlower;
		FlowerEnvironment^ sunFlowerEnvironment;
		FlowerEnvironment^ pinkFlowerEnvironment;

	private:
		// Переотрисовка
		void redraw(Flowers^ flower, PictureBox^ pictureBox);
		void GrowEventHandler(Flowers^ flower, GrowthStage stage);
		void DeathEventHandler(Flowers^ flower, ReasonOfDeath reason, String^ message);
		void switchImagePinkFlower();
		void switchImageSunflower();
		// Загрузка формы
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
		// Смена температуры цветка
		System::Void temperatureBarFlower_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		// Смена времени суток
		System::Void dayTimeBarFlower_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		// Смена времени года
		System::Void seasonBarFlower_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		// Новый цветок
		System::Void buttonNewFlower_Click(System::Object^ sender, System::EventArgs^ e);
		// Полить цветок
		System::Void buttonWaterFlower_Click(System::Object^ sender, System::EventArgs^ e);
		// Смена вкладки
		System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		// Смена температуры подсолнуха
		System::Void temperatureBarSunflower_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		// Смена времени суток подсолнуха
		System::Void dayTimeBarSunflower_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		// Смена времени года подсолнуха
		System::Void seasonBarSunflower_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		// Сбор семян
		System::Void buttonSeeds_Click(System::Object^ sender, System::EventArgs^ e);
		// Новый подсолнух
		System::Void buttonNewSunflower_Click(System::Object^ sender, System::EventArgs^ e);
		// Полить цветок
		System::Void buttonWaterSunflower_Click(System::Object^ sender, System::EventArgs^ e);
		void OnTickSunflower(System::Object^ sender, System::EventArgs^ e);
		void OnTickFlower(System::Object^ sender, System::EventArgs^ e);
private: System::Void progressBar3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};