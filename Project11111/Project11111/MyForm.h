#pragma once

#include "Auto.h"
#include "Mechanika.h"
#include <time.h>
#define dlugoscdrogi1_2 13
using namespace System;

#pragma region XXX
namespace Project11111 {

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


	private: System::Windows::Forms::PictureBox^  droga;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::Button^  Start;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  zegar;
	private: System::Windows::Forms::PictureBox^  pictureBox14;

	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelnatezenie;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labellosowosc;

	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox56;




















	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma endregion
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->droga = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zegar = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelnatezenie = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labellosowosc = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->droga))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			this->SuspendLayout();
			// 
			// droga
			// 
			this->droga->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->droga->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"droga.Image")));
			this->droga->Location = System::Drawing::Point(10, 229);
			this->droga->Name = L"droga";
			this->droga->Size = System::Drawing::Size(1876, 288);
			this->droga->TabIndex = 0;
			this->droga->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(98, 283);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(54, 39);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(168, 283);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 39);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(231, 283);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(54, 39);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(307, 283);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(54, 39);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(376, 283);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(54, 39);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(445, 283);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(54, 39);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(517, 283);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(54, 39);
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(586, 283);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(54, 39);
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(655, 283);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(54, 39);
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(727, 283);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(54, 39);
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(798, 283);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(54, 39);
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(867, 283);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(54, 39);
			this->pictureBox13->TabIndex = 13;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Start->Location = System::Drawing::Point(13, 13);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(170, 102);
			this->Start->TabIndex = 14;
			this->Start->Text = L"Start/Stop";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(28, 283);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 39);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(1086, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 25);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Zegar";
			// 
			// zegar
			// 
			this->zegar->AutoSize = true;
			this->zegar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zegar->Location = System::Drawing::Point(1078, 48);
			this->zegar->Name = L"zegar";
			this->zegar->Size = System::Drawing::Size(92, 22);
			this->zegar->TabIndex = 17;
			this->zegar->Text = L"00:00:00";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(109, 32);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(30, 30);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 18;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(6, 33);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(30, 30);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 20;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelnatezenie);
			this->groupBox1->Controls->Add(this->pictureBox14);
			this->groupBox1->Controls->Add(this->pictureBox15);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(225, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(145, 74);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Natê¿enie";
			// 
			// labelnatezenie
			// 
			this->labelnatezenie->AutoSize = true;
			this->labelnatezenie->Location = System::Drawing::Point(61, 34);
			this->labelnatezenie->Name = L"labelnatezenie";
			this->labelnatezenie->Size = System::Drawing::Size(21, 24);
			this->labelnatezenie->TabIndex = 21;
			this->labelnatezenie->Text = L"0";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labellosowosc);
			this->groupBox2->Controls->Add(this->pictureBox16);
			this->groupBox2->Controls->Add(this->pictureBox17);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox2->Location = System::Drawing::Point(394, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(145, 74);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Losowoœæ";
			// 
			// labellosowosc
			// 
			this->labellosowosc->AutoSize = true;
			this->labellosowosc->Location = System::Drawing::Point(61, 32);
			this->labellosowosc->Name = L"labellosowosc";
			this->labellosowosc->Size = System::Drawing::Size(21, 24);
			this->labellosowosc->TabIndex = 22;
			this->labellosowosc->Text = L"0";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(109, 32);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(30, 30);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 18;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(6, 32);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(30, 30);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 20;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(28, 238);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(54, 39);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 24;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(98, 238);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(54, 39);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 25;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(168, 238);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(54, 39);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 26;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(231, 238);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(54, 39);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 27;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Visible = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(307, 238);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(54, 39);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 28;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Visible = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(376, 238);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(54, 39);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 29;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Visible = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(445, 238);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(54, 39);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 30;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Visible = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(517, 238);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(54, 39);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 31;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Visible = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(586, 238);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(54, 39);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 32;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Visible = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(655, 238);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(54, 39);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 33;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Visible = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(727, 238);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(54, 39);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 34;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Visible = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(798, 238);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(54, 39);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 35;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Visible = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(867, 238);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(54, 39);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 36;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Visible = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(944, 238);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(54, 39);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 37;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Visible = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(1014, 238);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(54, 39);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 38;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Visible = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(1082, 238);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(54, 39);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 39;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Visible = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(1151, 238);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(54, 39);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 40;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Visible = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(1221, 238);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(54, 39);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 41;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Visible = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(1290, 238);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(54, 39);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 42;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Visible = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(1363, 238);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(54, 39);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox37->TabIndex = 43;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Visible = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(1432, 238);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(54, 39);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 44;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Visible = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(1501, 238);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(54, 39);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 45;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Visible = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(1570, 238);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(54, 39);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 46;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Visible = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(1640, 238);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(54, 39);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox41->TabIndex = 46;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Visible = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(1710, 238);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(54, 39);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox42->TabIndex = 47;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Visible = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(1782, 238);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(54, 39);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox43->TabIndex = 48;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Visible = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(944, 283);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(54, 39);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox44->TabIndex = 49;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Visible = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(1014, 283);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(54, 39);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox45->TabIndex = 50;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Visible = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(1082, 283);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(54, 39);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox46->TabIndex = 51;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Visible = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(1151, 293);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(54, 39);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox47->TabIndex = 52;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Visible = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(1221, 293);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(54, 39);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox48->TabIndex = 53;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Visible = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(1290, 293);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(54, 39);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox49->TabIndex = 54;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Visible = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(1363, 304);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(54, 39);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox50->TabIndex = 55;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Visible = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(1432, 304);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(54, 39);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox51->TabIndex = 56;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Visible = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(1501, 319);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(54, 39);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox52->TabIndex = 57;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Visible = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(1561, 331);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(54, 39);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox53->TabIndex = 58;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Visible = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(1621, 359);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(54, 39);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox54->TabIndex = 59;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Visible = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(1681, 388);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(54, 39);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox55->TabIndex = 60;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Visible = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(1742, 428);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(54, 39);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox56->TabIndex = 61;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1898, 1029);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->zegar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->droga);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->droga))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
		bool pierwsze = false;
		int czas = 0;
		int natezenie = 9;	
		int losowosc = 0;
		Mechanika M;
		array< Auto^ >^ Droga1;
		array< Auto^ >^ Droga2;
		array< Auto^ >^ Droga3;
		array< Auto^ >^ Droga4;


private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {
	if (timer1->Enabled == true) timer1->Enabled = false;
	else timer1->Enabled = true;
	
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
#pragma region Zegar
	czas++;
	int godzin, minut, sekund;
	godzin = czas / 3600;
	String^ str1 = Convert::ToString(godzin);
	if (godzin < 10 && godzin!=0) str1 = "0" + str1;
	if (godzin == 0 ) str1 = "0" + str1;
	if (godzin == 60) godzin = 0;
	minut = (czas - godzin * 3600) / 60;
	String^ str2 = Convert::ToString(minut);
	if (minut < 10 && minut != 0) str2 = "0" + str2;
	if (minut == 0) str2 = "0" + str2;
	if (minut == 59) minut = 0;
	sekund = (czas - godzin * 3600 - minut * 60);
	String^ str3 = Convert::ToString(sekund);
	if (sekund < 10 && sekund != 0) str3 = "0" + str3;
	if (sekund == 0) str3 = "0" + str3;
	if (sekund == 59) sekund = 0;
	zegar->Text = str1 + ":" + str2 + ":" + str3;
#pragma endregion
	
	M.Ustawwaruki(natezenie,losowosc);
	
	
	//M.Ustaw_Przeszkode();
	M.Nowe_Auto();
	M.Wybor_Pasa();
	M.Zmiana_Pasa();
	M.Przyspieszani_Hamowanie();
	M.Zdarzenia_Losowe();
	M.Przemieszczenie();
	
	Droga1 = M.DajDroge1();
	Droga2 = M.DajDroge2();
	Droga3 = M.DajDroge3();
	Droga4 = M.DajDroge4();

#pragma region wyœwietlanie_drogi_1
	if (Droga1[0]->zycie == true) {
		pictureBox1->Visible = true;
		switch (Droga1[0]->rodzaj)
		{
		case 1: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox1->Visible = false;
	if (Droga1[1]->zycie == true) {
		pictureBox2->Visible = true;
		switch (Droga1[1]->rodzaj)
		{
		case 1: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox2->Visible = false;
	if (Droga1[2]->zycie == true) {
		pictureBox3->Visible = true;
		switch (Droga1[2]->rodzaj)
		{
		case 1: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox3->Visible = false;
	if (Droga1[3]->zycie == true) {
		pictureBox4->Visible = true;
		switch (Droga1[3]->rodzaj)
		{
		case 1: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox4->Visible = false;
	if (Droga1[4]->zycie == true) {
		pictureBox5->Visible = true;
		switch (Droga1[4]->rodzaj)
		{
		case 1: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox5->Visible = false;
	if (Droga1[5]->zycie == true) {
		pictureBox6->Visible = true;
		switch (Droga1[5]->rodzaj)
		{
		case 1: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox6->Visible = false;
	if (Droga1[6]->zycie == true) {
		pictureBox7->Visible = true;
		switch (Droga1[6]->rodzaj)
		{
		case 1: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox7->Visible = false;
	if (Droga1[7]->zycie == true) {
		pictureBox8->Visible = true;
		switch (Droga1[7]->rodzaj)
		{
		case 1: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox8->Visible = false;
	if (Droga1[8]->zycie == true) {
		pictureBox9->Visible = true;
		switch (Droga1[8]->rodzaj)
		{
		case 1: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox9->Visible = false;
	if (Droga1[9]->zycie == true) {
		pictureBox10->Visible = true;
		switch (Droga1[9]->rodzaj)
		{
		case 1: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox10->Visible = false;
	if (Droga1[10]->zycie == true) {
		pictureBox11->Visible = true;
		switch (Droga1[10]->rodzaj)
		{
		case 1: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox11->Visible = false;
	if (Droga1[11]->zycie == true) {
		pictureBox12->Visible = true;
		switch (Droga1[11]->rodzaj)
		{
		case 1: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox12->Visible = false;
	if (Droga1[12]->zycie == true) {
		pictureBox13->Visible = true;
		switch (Droga1[12]->rodzaj)
		{
		case 1: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox13->Visible = false;
#pragma endregion

#pragma region wyœwietlanie_drogi_2
	if (Droga2[0]->zycie == true) {
		pictureBox18->Visible = true;
		switch (Droga2[0]->rodzaj)
		{
		case 1: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox18->Visible = false;
	
	if (Droga2[1]->zycie == true) {
		pictureBox19->Visible = true;
		switch (Droga2[1]->rodzaj)
		{
		case 1: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox19->Visible = false;
	
	if (Droga2[2]->zycie == true) {
		pictureBox20->Visible = true;
		switch (Droga2[2]->rodzaj)
		{
		case 1: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox20->Visible = false;
	
	if (Droga2[3]->zycie == true) {
		pictureBox21->Visible = true;
		switch (Droga2[3]->rodzaj)
		{
		case 1: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox21->Visible = false;
	
	if (Droga2[4]->zycie == true) {
		pictureBox22->Visible = true;
		switch (Droga2[4]->rodzaj)
		{
		case 1: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox22->Visible = false;
	
	if (Droga2[5]->zycie == true) {
		pictureBox23->Visible = true;
		switch (Droga2[5]->rodzaj)
		{
		case 1: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox23->Visible = false;
	
	if (Droga2[6]->zycie == true) {
		pictureBox24->Visible = true;
		switch (Droga2[6]->rodzaj)
		{
		case 1: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox24->Visible = false;
	
	if (Droga2[7]->zycie == true) {
		pictureBox25->Visible = true;
		switch (Droga2[7]->rodzaj)
		{
		case 1: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox25->Visible = false;
	
	if (Droga2[8]->zycie == true) {
		pictureBox26->Visible = true;
		switch (Droga2[8]->rodzaj)
		{
		case 1: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox26->Visible = false;
	
	if (Droga2[9]->zycie == true) {
		pictureBox27->Visible = true;
		switch (Droga2[9]->rodzaj)
		{
		case 1: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox27->Visible = false;
	
	if (Droga2[10]->zycie == true) {
		pictureBox28->Visible = true;
		switch (Droga2[10]->rodzaj)
		{
		case 1: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox28->Visible = false;
	
	if (Droga2[11]->zycie == true) {
		pictureBox29->Visible = true;
		switch (Droga2[11]->rodzaj)
		{
		case 1: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox29->Visible = false;
	
	if (Droga2[12]->zycie == true) {
		pictureBox30->Visible = true;
		switch (Droga2[12]->rodzaj)
		{
		case 1: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox30->Visible = false;
#pragma endregion

#pragma region wyœwietlanie_drogi_3
	if (Droga3[0]->zycie == true) {
		pictureBox31->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox31->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox32->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox32->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox33->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox33->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox34->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox34->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox35->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox35->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox36->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox36->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox37->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox37->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox38->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox38->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox39->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox39->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox39->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox39->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox39->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox39->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox40->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox40->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox40->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox40->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox40->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox40->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox41->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox41->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox41->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox41->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox41->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox41->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox42->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox42->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox42->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox42->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox42->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox42->Visible = false;

	if (Droga3[0]->zycie == true) {
		pictureBox43->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox43->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox43->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox43->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox43->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox43->Visible = false;
#pragma endregion


#pragma region wyœwietlanie_drogi_4

	if (Droga4[0]->zycie == true) {
		pictureBox44->Visible = true;
		switch (Droga4[0]->rodzaj)
		{
		case 1: pictureBox44->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox44->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox44->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox44->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox44->Visible = false;

	if (Droga4[1]->zycie == true) {
		pictureBox45->Visible = true;
		switch (Droga4[1]->rodzaj)
		{
		case 1: pictureBox45->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox45->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox45->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox45->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox45->Visible = false;

	if (Droga4[2]->zycie == true) {
		pictureBox46->Visible = true;
		switch (Droga4[2]->rodzaj)
		{
		case 1: pictureBox46->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox46->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox46->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox46->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox46->Visible = false;

	if (Droga4[3]->zycie == true) {
		pictureBox47->Visible = true;
		switch (Droga4[3]->rodzaj)
		{
		case 1: pictureBox47->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox47->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox47->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox47->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox47->Visible = false;

	if (Droga4[4]->zycie == true) {
		pictureBox48->Visible = true;
		switch (Droga4[4]->rodzaj)
		{
		case 1: pictureBox48->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox48->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox48->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox48->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox48->Visible = false;

	if (Droga4[5]->zycie == true) {
		pictureBox49->Visible = true;
		switch (Droga4[5]->rodzaj)
		{
		case 1: pictureBox49->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox49->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox49->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox49->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox49->Visible = false;

	if (Droga4[6]->zycie == true) {
		pictureBox50->Visible = true;
		switch (Droga4[6]->rodzaj)
		{
		case 1: pictureBox50->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox50->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox50->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox50->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox50->Visible = false;

	if (Droga4[7]->zycie == true) {
		pictureBox51->Visible = true;
		switch (Droga4[7]->rodzaj)
		{
		case 1: pictureBox51->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox51->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox51->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox51->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox51->Visible = false;

	if (Droga4[8]->zycie == true) {
		pictureBox52->Visible = true;
		switch (Droga4[8]->rodzaj)
		{
		case 1: pictureBox52->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox52->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox52->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox52->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox52->Visible = false;

	if (Droga4[9]->zycie == true) {
		pictureBox53->Visible = true;
		switch (Droga4[9]->rodzaj)
		{
		case 1: pictureBox53->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox53->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox53->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox53->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox53->Visible = false;

	if (Droga4[10]->zycie == true) {
		pictureBox54->Visible = true;
		switch (Droga4[10]->rodzaj)
		{
		case 1: pictureBox54->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox54->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox54->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox54->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox54->Visible = false;

	if (Droga4[11]->zycie == true) {
		pictureBox55->Visible = true;
		switch (Droga4[11]->rodzaj)
		{
		case 1: pictureBox55->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox55->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox55->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox55->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox55->Visible = false;

	if (Droga4[12]->zycie == true) {
		pictureBox56->Visible = true;
		switch (Droga4[12]->rodzaj)
		{
		case 1: pictureBox56->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum1.png"); break;
		case 2: pictureBox56->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum2.png"); break;
		case 3: pictureBox56->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum3.png"); break;
		case 4: pictureBox56->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\brum4.png"); break;
		default:
			break;
		}
	}
	else pictureBox56->Visible = false;


#pragma endregion






}

private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
	natezenie--;
	if (natezenie <= 0) natezenie = 0;
	String^ str1 = Convert::ToString(natezenie);
	labelnatezenie->Text = str1;
}
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
	natezenie++;
	if (natezenie >= 9) natezenie = 9;
	String^ str1 = Convert::ToString(natezenie);
	labelnatezenie->Text = str1;
}

private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
	losowosc--;
	losowosc--;
	losowosc--;
	if (losowosc <= 0) losowosc = 0;
	String^ str1 = Convert::ToString(losowosc);
	labellosowosc->Text = str1;
}
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
	losowosc++;
	losowosc++;
	losowosc++;
	if (losowosc >= 99) losowosc = 99;
	String^ str1 = Convert::ToString(losowosc);
	labellosowosc->Text = str1;
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

};//----------------------------------------------
}
