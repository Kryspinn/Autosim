#pragma once

#include "Auto.h"
#include "Mechanika.h"
#include <time.h>

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
















	private: System::Windows::Forms::Button^  Start;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  zegar;
	private: System::Windows::Forms::PictureBox^  pictureBoxplusnatezenie;

	private: System::Windows::Forms::PictureBox^  pictureBoxminusnatezenie;





	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelnatezenie;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labellosowosc;
	private: System::Windows::Forms::PictureBox^  pictureBoxpluslosowosc;


	private: System::Windows::Forms::PictureBox^  pictureBoxminuslosowosc;


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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
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
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::PictureBox^  pictureBox61;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::PictureBox^  pictureBox62;
private: System::Windows::Forms::PictureBox^  pictureBox63;
private: System::Windows::Forms::PictureBox^  pictureBox64;
private: System::Windows::Forms::PictureBox^  pictureBox65;
private: System::Windows::Forms::PictureBox^  pictureBox66;
private: System::Windows::Forms::PictureBox^  pictureBox67;
private: System::Windows::Forms::PictureBox^  pictureBox68;
private: System::Windows::Forms::PictureBox^  pictureBox69;
private: System::Windows::Forms::PictureBox^  pictureBox70;
private: System::Windows::Forms::PictureBox^  pictureBox71;
private: System::Windows::Forms::PictureBox^  pictureBox72;
private: System::Windows::Forms::PictureBox^  pictureBox73;
private: System::Windows::Forms::PictureBox^  pictureBox74;
private: System::Windows::Forms::PictureBox^  pictureBox75;
private: System::Windows::Forms::PictureBox^  pictureBox76;
private: System::Windows::Forms::PictureBox^  pictureBox77;
private: System::Windows::Forms::PictureBox^  pictureBox78;
private: System::Windows::Forms::PictureBox^  pictureBox79;
private: System::Windows::Forms::PictureBox^  pictureBox80;
private: System::Windows::Forms::PictureBox^  pictureBox81;
private: System::Windows::Forms::PictureBox^  pictureBox82;
private: System::Windows::Forms::PictureBox^  pictureBox83;
private: System::Windows::Forms::PictureBox^  pictureBox84;
private: System::Windows::Forms::PictureBox^  pictureBox85;
private: System::Windows::Forms::PictureBox^  pictureBox86;
private: System::Windows::Forms::PictureBox^  pictureBox87;
private: System::Windows::Forms::PictureBox^  pictureBox88;
private: System::Windows::Forms::PictureBox^  pictureBox89;
private: System::Windows::Forms::PictureBox^  pictureBox90;
private: System::Windows::Forms::PictureBox^  pictureBox91;
private: System::Windows::Forms::PictureBox^  pictureBox92;
private: System::Windows::Forms::PictureBox^  pictureBox93;
private: System::Windows::Forms::PictureBox^  pictureBox94;
private: System::Windows::Forms::PictureBox^  pictureBox95;
private: System::Windows::Forms::PictureBox^  pictureBox96;
private: System::Windows::Forms::PictureBox^  pictureBox97;
private: System::Windows::Forms::PictureBox^  pictureBox98;
private: System::Windows::Forms::PictureBox^  pictureBox99;
private: System::Windows::Forms::PictureBox^  pictureBox100;
private: System::Windows::Forms::PictureBox^  pictureBox101;
private: System::Windows::Forms::PictureBox^  pictureBox102;
private: System::Windows::Forms::PictureBox^  pictureBox103;
private: System::Windows::Forms::PictureBox^  pictureBox104;
private: System::Windows::Forms::PictureBox^  pictureBox105;
private: System::Windows::Forms::PictureBox^  pictureBox106;
private: System::Windows::Forms::PictureBox^  pictureBox107;
private: System::Windows::Forms::PictureBox^  pictureBox108;
private: System::Windows::Forms::PictureBox^  pictureBox109;
private: System::Windows::Forms::PictureBox^  pictureBox110;
private: System::Windows::Forms::PictureBox^  pictureBox111;
private: System::Windows::Forms::PictureBox^  pictureBox112;
private: System::Windows::Forms::PictureBox^  pictureBox113;
private: System::Windows::Forms::PictureBox^  pictureBox114;
private: System::Windows::Forms::PictureBox^  pictureBox115;
private: System::Windows::Forms::PictureBox^  pictureBox116;
private: System::Windows::Forms::PictureBox^  pictureBox117;
private: System::Windows::Forms::PictureBox^  pictureBox118;
private: System::Windows::Forms::PictureBox^  pictureBox119;
private: System::Windows::Forms::PictureBox^  pictureBox120;
private: System::Windows::Forms::PictureBox^  pictureBox121;
private: System::Windows::Forms::PictureBox^  pictureBox122;
private: System::Windows::Forms::PictureBox^  pictureBox123;
private: System::Windows::Forms::PictureBox^  pictureBox124;
private: System::Windows::Forms::PictureBox^  pictureBox125;
private: System::Windows::Forms::PictureBox^  pictureBox126;
private: System::Windows::Forms::PictureBox^  pictureBox127;
private: System::Windows::Forms::PictureBox^  pictureBox128;
private: System::Windows::Forms::PictureBox^  pictureBox129;
private: System::Windows::Forms::PictureBox^  pictureBox130;
private: System::Windows::Forms::PictureBox^  pictureBox131;
private: System::Windows::Forms::PictureBox^  pictureBox132;
private: System::Windows::Forms::PictureBox^  pictureBox133;
private: System::Windows::Forms::PictureBox^  pictureBox134;
private: System::Windows::Forms::PictureBox^  pictureBox135;
private: System::Windows::Forms::PictureBox^  pictureBox136;
private: System::Windows::Forms::PictureBox^  pictureBox137;
private: System::Windows::Forms::PictureBox^  pictureBox138;
private: System::Windows::Forms::PictureBox^  pictureBox139;
private: System::Windows::Forms::PictureBox^  pictureBox140;
private: System::Windows::Forms::PictureBox^  pictureBox141;
private: System::Windows::Forms::PictureBox^  pictureBox142;
private: System::Windows::Forms::PictureBox^  pictureBox143;
private: System::Windows::Forms::PictureBox^  pictureBox144;
private: System::Windows::Forms::PictureBox^  pictureBox145;
private: System::Windows::Forms::PictureBox^  pictureBox146;
private: System::Windows::Forms::PictureBox^  pictureBox147;
private: System::Windows::Forms::PictureBox^  pictureBox148;
private: System::Windows::Forms::PictureBox^  pictureBox149;
private: System::Windows::Forms::PictureBox^  pictureBox150;
private: System::Windows::Forms::PictureBox^  pictureBox151;
private: System::Windows::Forms::PictureBox^  pictureBox152;
private: System::Windows::Forms::PictureBox^  pictureBox153;
private: System::Windows::Forms::PictureBox^  pictureBox154;
private: System::Windows::Forms::PictureBox^  pictureBox155;
private: System::Windows::Forms::PictureBox^  pictureBox156;
private: System::Windows::Forms::PictureBox^  pictureBox157;
private: System::Windows::Forms::PictureBox^  pictureBox158;
private: System::Windows::Forms::PictureBox^  pictureBox159;
private: System::Windows::Forms::PictureBox^  pictureBox160;
private: System::Windows::Forms::PictureBox^  pictureBox161;
private: System::Windows::Forms::PictureBox^  pictureBox162;
private: System::Windows::Forms::PictureBox^  pictureBox163;
private: System::Windows::Forms::PictureBox^  pictureBox164;
private: System::Windows::Forms::PictureBox^  pictureBox165;
private: System::Windows::Forms::PictureBox^  pictureBox166;
private: System::Windows::Forms::PictureBox^  pictureBox167;
private: System::Windows::Forms::PictureBox^  pictureBox168;
private: System::Windows::Forms::PictureBox^  pictureBox169;
private: System::Windows::Forms::PictureBox^  pictureBox170;
private: System::Windows::Forms::PictureBox^  pictureBox171;
private: System::Windows::Forms::PictureBox^  pictureBox172;
private: System::Windows::Forms::PictureBox^  pictureBox173;
private: System::Windows::Forms::PictureBox^  pictureBox174;
private: System::Windows::Forms::PictureBox^  pictureBox175;
private: System::Windows::Forms::PictureBox^  pictureBox176;
private: System::Windows::Forms::PictureBox^  pictureBox177;
private: System::Windows::Forms::PictureBox^  pictureBox178;
private: System::Windows::Forms::PictureBox^  pictureBox179;
private: System::Windows::Forms::PictureBox^  pictureBox180;
private: System::Windows::Forms::PictureBox^  pictureBox181;
private: System::Windows::Forms::PictureBox^  pictureBox182;
private: System::Windows::Forms::PictureBox^  pictureBox183;
private: System::Windows::Forms::PictureBox^  pictureBox184;
private: System::Windows::Forms::PictureBox^  pictureBox185;
private: System::Windows::Forms::PictureBox^  pictureBox186;
private: System::Windows::Forms::PictureBox^  pictureBox187;
private: System::Windows::Forms::PictureBox^  pictureBox188;
private: System::Windows::Forms::PictureBox^  pictureBox189;
private: System::Windows::Forms::PictureBox^  pictureBox190;
private: System::Windows::Forms::PictureBox^  pictureBox191;
private: System::Windows::Forms::PictureBox^  pictureBox192;
private: System::Windows::Forms::PictureBox^  pictureBox193;
private: System::Windows::Forms::PictureBox^  pictureBox194;
private: System::Windows::Forms::PictureBox^  pictureBox195;
private: System::Windows::Forms::PictureBox^  pictureBox196;
private: System::Windows::Forms::PictureBox^  pictureBox197;
private: System::Windows::Forms::PictureBox^  pictureBox198;
private: System::Windows::Forms::PictureBox^  pictureBox199;
private: System::Windows::Forms::PictureBox^  pictureBox200;
private: System::Windows::Forms::PictureBox^  pictureBox201;
private: System::Windows::Forms::PictureBox^  pictureBox202;
private: System::Windows::Forms::PictureBox^  pictureBox203;
private: System::Windows::Forms::PictureBox^  pictureBox204;
private: System::Windows::Forms::PictureBox^  pictureBox205;
private: System::Windows::Forms::PictureBox^  pictureBox206;
private: System::Windows::Forms::PictureBox^  pictureBox207;
private: System::Windows::Forms::PictureBox^  pictureBox208;
private: System::Windows::Forms::PictureBox^  pictureBox209;
private: System::Windows::Forms::PictureBox^  pictureBox210;
private: System::Windows::Forms::PictureBox^  pictureBox211;
private: System::Windows::Forms::PictureBox^  pictureBox212;
private: System::Windows::Forms::PictureBox^  pictureBox213;
private: System::Windows::Forms::PictureBox^  pictureBox214;
private: System::Windows::Forms::PictureBox^  pictureBox215;
private: System::Windows::Forms::PictureBox^  pictureBox216;
private: System::Windows::Forms::PictureBox^  pictureBox217;
private: System::Windows::Forms::PictureBox^  pictureBox218;
private: System::Windows::Forms::PictureBox^  pictureBox219;
private: System::Windows::Forms::PictureBox^  pictureBox220;
private: System::Windows::Forms::PictureBox^  pictureBox221;
private: System::Windows::Forms::PictureBox^  pictureBox222;
private: System::Windows::Forms::PictureBox^  pictureBox223;
private: System::Windows::Forms::PictureBox^  pictureBox224;
private: System::Windows::Forms::PictureBox^  pictureBox225;
private: System::Windows::Forms::PictureBox^  pictureBox226;
private: System::Windows::Forms::PictureBox^  pictureBox227;
private: System::Windows::Forms::PictureBox^  pictureBox228;
private: System::Windows::Forms::PictureBox^  pictureBox229;
private: System::Windows::Forms::PictureBox^  pictureBox230;
private: System::Windows::Forms::PictureBox^  pictureBox231;
private: System::Windows::Forms::PictureBox^  pictureBox232;
private: System::Windows::Forms::PictureBox^  pictureBox233;
private: System::Windows::Forms::PictureBox^  pictureBox234;
private: System::Windows::Forms::PictureBox^  pictureBox235;
private: System::Windows::Forms::PictureBox^  pictureBox236;
private: System::Windows::Forms::PictureBox^  pictureBox237;
private: System::Windows::Forms::PictureBox^  pictureBox238;
private: System::Windows::Forms::PictureBox^  pictureBox239;
private: System::Windows::Forms::PictureBox^  pictureBox240;
private: System::Windows::Forms::PictureBox^  pictureBox241;
private: System::Windows::Forms::PictureBox^  pictureBox242;
private: System::Windows::Forms::PictureBox^  pictureBox243;
private: System::Windows::Forms::PictureBox^  pictureBox244;
private: System::Windows::Forms::PictureBox^  pictureBox245;
private: System::Windows::Forms::PictureBox^  pictureBox246;
private: System::Windows::Forms::PictureBox^  pictureBox247;
private: System::Windows::Forms::PictureBox^  pictureBox248;
private: System::Windows::Forms::PictureBox^  pictureBox249;
private: System::Windows::Forms::PictureBox^  pictureBox250;
private: System::Windows::Forms::PictureBox^  pictureBox251;
private: System::Windows::Forms::PictureBox^  pictureBox252;
private: System::Windows::Forms::PictureBox^  pictureBox253;
private: System::Windows::Forms::PictureBox^  pictureBox254;
private: System::Windows::Forms::PictureBox^  pictureBox255;
private: System::Windows::Forms::PictureBox^  pictureBox256;
private: System::Windows::Forms::PictureBox^  pictureBox257;
private: System::Windows::Forms::PictureBox^  pictureBox258;
private: System::Windows::Forms::PictureBox^  pictureBox259;
private: System::Windows::Forms::PictureBox^  pictureBox260;
private: System::Windows::Forms::PictureBox^  pictureBox261;
private: System::Windows::Forms::PictureBox^  pictureBox262;
private: System::Windows::Forms::PictureBox^  pictureBox263;
private: System::Windows::Forms::PictureBox^  pictureBox264;
private: System::Windows::Forms::PictureBox^  pictureBox265;
private: System::Windows::Forms::PictureBox^  pictureBox266;
private: System::Windows::Forms::PictureBox^  pictureBox267;
private: System::Windows::Forms::PictureBox^  pictureBox268;
private: System::Windows::Forms::PictureBox^  pictureBox269;
private: System::Windows::Forms::PictureBox^  pictureBox270;
private: System::Windows::Forms::PictureBox^  pictureBox271;
private: System::Windows::Forms::PictureBox^  pictureBox272;
private: System::Windows::Forms::PictureBox^  pictureBox273;
private: System::Windows::Forms::PictureBox^  pictureBox274;
private: System::Windows::Forms::PictureBox^  pictureBox275;
private: System::Windows::Forms::PictureBox^  pictureBox276;
private: System::Windows::Forms::PictureBox^  pictureBox277;
private: System::Windows::Forms::PictureBox^  pictureBox278;
private: System::Windows::Forms::PictureBox^  pictureBox279;
private: System::Windows::Forms::PictureBox^  pictureBox280;












































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
			this->Start = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zegar = (gcnew System::Windows::Forms::Label());
			this->pictureBoxplusnatezenie = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxminusnatezenie = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelnatezenie = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labellosowosc = (gcnew System::Windows::Forms::Label());
			this->pictureBoxpluslosowosc = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxminuslosowosc = (gcnew System::Windows::Forms::PictureBox());
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
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
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox102 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox103 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox104 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox105 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox106 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox107 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox108 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox109 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox110 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox111 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox112 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox113 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox114 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox115 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox116 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox117 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox118 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox119 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox120 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox121 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox122 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox123 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox124 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox125 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox126 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox127 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox128 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox129 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox130 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox131 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox132 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox133 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox134 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox135 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox136 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox137 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox138 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox139 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox140 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox141 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox142 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox143 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox144 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox145 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox146 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox147 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox148 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox149 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox150 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox151 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox152 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox153 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox154 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox155 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox156 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox157 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox158 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox159 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox160 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox161 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox162 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox163 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox164 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox165 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox166 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox167 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox168 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox169 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox170 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox171 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox172 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox173 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox174 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox175 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox176 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox177 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox178 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox179 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox180 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox181 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox182 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox183 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox184 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox185 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox186 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox187 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox188 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox189 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox190 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox191 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox192 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox193 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox194 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox195 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox196 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox197 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox198 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox199 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox200 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox201 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox202 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox203 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox204 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox205 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox206 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox207 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox208 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox209 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox210 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox211 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox212 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox213 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox214 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox215 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox216 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox217 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox218 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox219 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox220 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox221 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox222 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox223 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox224 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox225 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox226 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox227 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox228 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox229 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox230 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox231 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox232 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox233 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox234 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox235 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox236 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox237 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox238 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox239 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox240 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox241 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox242 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox243 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox244 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox245 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox246 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox247 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox248 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox249 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox250 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox251 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox252 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox253 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox254 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox255 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox256 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox257 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox258 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox259 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox260 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox261 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox262 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox263 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox264 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox265 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox266 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox267 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox268 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox269 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox270 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox271 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox272 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox273 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox274 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox275 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox276 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox277 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox278 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox279 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox280 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxplusnatezenie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxminusnatezenie))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxpluslosowosc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxminuslosowosc))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox126))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox127))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox133))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox141))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox142))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox146))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox147))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox148))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox156))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox157))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox158))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox160))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox161))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox162))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox163))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox164))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox170))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox171))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox172))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox173))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox174))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox175))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox176))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox177))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox178))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox179))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox180))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox181))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox182))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox183))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox184))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox185))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox186))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox187))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox188))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox189))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox190))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox191))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox192))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox193))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox194))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox195))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox196))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox197))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox198))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox199))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox200))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox201))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox202))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox203))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox204))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox205))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox206))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox207))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox208))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox209))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox210))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox211))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox212))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox213))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox214))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox215))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox216))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox217))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox218))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox219))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox220))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox221))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox222))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox223))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox224))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox225))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox226))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox227))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox228))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox229))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox230))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox231))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox232))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox233))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox234))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox235))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox236))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox237))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox238))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox239))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox240))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox241))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox242))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox243))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox244))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox245))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox246))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox247))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox248))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox249))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox250))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox251))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox252))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox253))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox254))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox255))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox256))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox257))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox258))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox259))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox260))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox261))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox262))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox263))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox264))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox265))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox266))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox267))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox268))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox269))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox270))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox271))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox272))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox273))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox274))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox275))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox276))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox277))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox278))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox279))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox280))->BeginInit();
			this->SuspendLayout();
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
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(1785, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 32);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Zegar";
			// 
			// zegar
			// 
			this->zegar->AutoSize = true;
			this->zegar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zegar->Location = System::Drawing::Point(1772, 49);
			this->zegar->Name = L"zegar";
			this->zegar->Size = System::Drawing::Size(114, 27);
			this->zegar->TabIndex = 17;
			this->zegar->Text = L"00:00:00";
			// 
			// pictureBoxplusnatezenie
			// 
			this->pictureBoxplusnatezenie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxplusnatezenie.Image")));
			this->pictureBoxplusnatezenie->Location = System::Drawing::Point(109, 32);
			this->pictureBoxplusnatezenie->Name = L"pictureBoxplusnatezenie";
			this->pictureBoxplusnatezenie->Size = System::Drawing::Size(30, 30);
			this->pictureBoxplusnatezenie->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxplusnatezenie->TabIndex = 18;
			this->pictureBoxplusnatezenie->TabStop = false;
			this->pictureBoxplusnatezenie->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBoxminusnatezenie
			// 
			this->pictureBoxminusnatezenie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxminusnatezenie.Image")));
			this->pictureBoxminusnatezenie->Location = System::Drawing::Point(6, 33);
			this->pictureBoxminusnatezenie->Name = L"pictureBoxminusnatezenie";
			this->pictureBoxminusnatezenie->Size = System::Drawing::Size(30, 30);
			this->pictureBoxminusnatezenie->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxminusnatezenie->TabIndex = 20;
			this->pictureBoxminusnatezenie->TabStop = false;
			this->pictureBoxminusnatezenie->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelnatezenie);
			this->groupBox1->Controls->Add(this->pictureBoxplusnatezenie);
			this->groupBox1->Controls->Add(this->pictureBoxminusnatezenie);
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
			this->labelnatezenie->Size = System::Drawing::Size(27, 29);
			this->labelnatezenie->TabIndex = 21;
			this->labelnatezenie->Text = L"0";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labellosowosc);
			this->groupBox2->Controls->Add(this->pictureBoxpluslosowosc);
			this->groupBox2->Controls->Add(this->pictureBoxminuslosowosc);
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
			this->labellosowosc->Size = System::Drawing::Size(27, 29);
			this->labellosowosc->TabIndex = 22;
			this->labellosowosc->Text = L"0";
			// 
			// pictureBoxpluslosowosc
			// 
			this->pictureBoxpluslosowosc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxpluslosowosc.Image")));
			this->pictureBoxpluslosowosc->Location = System::Drawing::Point(109, 32);
			this->pictureBoxpluslosowosc->Name = L"pictureBoxpluslosowosc";
			this->pictureBoxpluslosowosc->Size = System::Drawing::Size(30, 30);
			this->pictureBoxpluslosowosc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxpluslosowosc->TabIndex = 18;
			this->pictureBoxpluslosowosc->TabStop = false;
			this->pictureBoxpluslosowosc->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBoxminuslosowosc
			// 
			this->pictureBoxminuslosowosc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxminuslosowosc.Image")));
			this->pictureBoxminuslosowosc->Location = System::Drawing::Point(6, 32);
			this->pictureBoxminuslosowosc->Name = L"pictureBoxminuslosowosc";
			this->pictureBoxminuslosowosc->Size = System::Drawing::Size(30, 30);
			this->pictureBoxminuslosowosc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxminuslosowosc->TabIndex = 20;
			this->pictureBoxminuslosowosc->TabStop = false;
			this->pictureBoxminuslosowosc->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(562, 707);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(16, 15);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(586, 689);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(16, 15);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(606, 676);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(16, 15);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 26;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(631, 655);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(16, 15);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 27;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(651, 644);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(16, 15);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 28;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(673, 628);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(16, 15);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 29;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(697, 610);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(16, 15);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 30;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(722, 595);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(16, 15);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 31;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(741, 581);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(16, 15);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 32;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(762, 567);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(16, 15);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 33;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(784, 552);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(16, 15);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 34;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(806, 536);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(16, 15);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 35;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(539, 724);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(16, 15);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 36;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(551, 738);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(16, 15);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 37;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(573, 718);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(16, 15);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 38;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(595, 702);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(16, 15);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 39;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(617, 686);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(16, 15);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 40;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(642, 668);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(16, 15);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 41;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(665, 654);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(16, 15);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 42;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(686, 636);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(16, 15);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 43;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(710, 620);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(16, 15);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 44;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(734, 605);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(16, 15);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 45;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(754, 591);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(16, 15);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 46;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(773, 579);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(16, 15);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 47;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(794, 564);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(16, 15);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 48;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(817, 550);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(16, 15);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 49;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(829, 522);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(16, 16);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 50;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(848, 507);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(16, 16);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 51;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(867, 494);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(16, 16);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 52;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(888, 482);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(16, 16);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 53;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(909, 468);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(16, 16);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 54;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(933, 451);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(16, 15);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 55;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(955, 437);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(16, 15);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 56;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(977, 425);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(16, 13);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 57;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(1004, 423);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(16, 12);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 58;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(1031, 426);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(16, 14);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 59;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(1051, 432);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(16, 14);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox37->TabIndex = 60;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(1069, 447);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(16, 16);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 61;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(1058, 347);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(14, 16);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 62;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(1040, 363);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(16, 16);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 63;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(1022, 376);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(16, 16);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox41->TabIndex = 64;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(1000, 390);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(16, 16);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox42->TabIndex = 65;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(973, 405);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(16, 16);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox43->TabIndex = 66;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(949, 423);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(16, 16);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox44->TabIndex = 67;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(924, 439);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(16, 16);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox45->TabIndex = 68;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(901, 454);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(16, 16);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox46->TabIndex = 69;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(878, 469);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(16, 16);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox47->TabIndex = 70;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(859, 481);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(16, 16);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox48->TabIndex = 71;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(838, 498);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(16, 16);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox49->TabIndex = 72;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(817, 515);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(16, 16);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox50->TabIndex = 73;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(792, 531);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(16, 16);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox51->TabIndex = 74;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(770, 543);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(16, 16);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox52->TabIndex = 75;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(748, 557);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(16, 16);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox53->TabIndex = 76;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(727, 569);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(16, 16);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox54->TabIndex = 77;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(710, 580);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(16, 16);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox55->TabIndex = 78;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(683, 595);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(16, 16);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox56->TabIndex = 79;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(659, 608);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(16, 16);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox57->TabIndex = 80;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(634, 623);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(16, 16);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox58->TabIndex = 81;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(607, 639);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(16, 16);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox59->TabIndex = 82;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(582, 659);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(16, 16);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox60->TabIndex = 83;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(553, 681);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(16, 16);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox61->TabIndex = 84;
			this->pictureBox61->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1058, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 85;
			this->label2->Text = L"label2";
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(1114, 249);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(14, 16);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox62->TabIndex = 86;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(1097, 276);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(14, 16);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox63->TabIndex = 87;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(1083, 306);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(14, 16);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox64->TabIndex = 88;
			this->pictureBox64->TabStop = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(1073, 331);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(14, 16);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox65->TabIndex = 89;
			this->pictureBox65->TabStop = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(1070, 357);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(14, 16);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox66->TabIndex = 90;
			this->pictureBox66->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(1069, 385);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(14, 16);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox67->TabIndex = 91;
			this->pictureBox67->TabStop = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(1075, 421);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(14, 16);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox68->TabIndex = 92;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(1086, 451);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(14, 16);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox69->TabIndex = 93;
			this->pictureBox69->TabStop = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(1096, 479);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(14, 16);
			this->pictureBox70->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox70->TabIndex = 94;
			this->pictureBox70->TabStop = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(1113, 502);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(14, 16);
			this->pictureBox71->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox71->TabIndex = 95;
			this->pictureBox71->TabStop = false;
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(1134, 524);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(14, 16);
			this->pictureBox72->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox72->TabIndex = 96;
			this->pictureBox72->TabStop = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(1162, 541);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(14, 16);
			this->pictureBox73->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox73->TabIndex = 97;
			this->pictureBox73->TabStop = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(1189, 557);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(14, 16);
			this->pictureBox74->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox74->TabIndex = 98;
			this->pictureBox74->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(1217, 565);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(14, 16);
			this->pictureBox75->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox75->TabIndex = 99;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(1249, 570);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(14, 16);
			this->pictureBox76->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox76->TabIndex = 100;
			this->pictureBox76->TabStop = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(1280, 568);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(14, 16);
			this->pictureBox77->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox77->TabIndex = 101;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox78
			// 
			this->pictureBox78->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(1314, 563);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(14, 16);
			this->pictureBox78->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox78->TabIndex = 102;
			this->pictureBox78->TabStop = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(1348, 553);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(14, 16);
			this->pictureBox79->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox79->TabIndex = 103;
			this->pictureBox79->TabStop = false;
			// 
			// pictureBox80
			// 
			this->pictureBox80->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->Location = System::Drawing::Point(1379, 534);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(14, 16);
			this->pictureBox80->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox80->TabIndex = 104;
			this->pictureBox80->TabStop = false;
			// 
			// pictureBox81
			// 
			this->pictureBox81->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.Image")));
			this->pictureBox81->Location = System::Drawing::Point(1403, 511);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(14, 16);
			this->pictureBox81->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox81->TabIndex = 105;
			this->pictureBox81->TabStop = false;
			// 
			// pictureBox82
			// 
			this->pictureBox82->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.Image")));
			this->pictureBox82->Location = System::Drawing::Point(1425, 486);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(14, 16);
			this->pictureBox82->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox82->TabIndex = 106;
			this->pictureBox82->TabStop = false;
			// 
			// pictureBox83
			// 
			this->pictureBox83->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox83->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.Image")));
			this->pictureBox83->Location = System::Drawing::Point(1441, 453);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(14, 16);
			this->pictureBox83->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox83->TabIndex = 107;
			this->pictureBox83->TabStop = false;
			// 
			// pictureBox84
			// 
			this->pictureBox84->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.Image")));
			this->pictureBox84->Location = System::Drawing::Point(1453, 416);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(14, 16);
			this->pictureBox84->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox84->TabIndex = 108;
			this->pictureBox84->TabStop = false;
			// 
			// pictureBox85
			// 
			this->pictureBox85->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.Image")));
			this->pictureBox85->Location = System::Drawing::Point(1456, 371);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(14, 16);
			this->pictureBox85->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox85->TabIndex = 109;
			this->pictureBox85->TabStop = false;
			// 
			// pictureBox86
			// 
			this->pictureBox86->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.Image")));
			this->pictureBox86->Location = System::Drawing::Point(1451, 333);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(14, 16);
			this->pictureBox86->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox86->TabIndex = 110;
			this->pictureBox86->TabStop = false;
			// 
			// pictureBox87
			// 
			this->pictureBox87->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox87->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox87.Image")));
			this->pictureBox87->Location = System::Drawing::Point(1443, 300);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(14, 16);
			this->pictureBox87->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox87->TabIndex = 111;
			this->pictureBox87->TabStop = false;
			// 
			// pictureBox88
			// 
			this->pictureBox88->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox88->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox88.Image")));
			this->pictureBox88->Location = System::Drawing::Point(1426, 270);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(14, 16);
			this->pictureBox88->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox88->TabIndex = 112;
			this->pictureBox88->TabStop = false;
			// 
			// pictureBox89
			// 
			this->pictureBox89->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox89->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox89.Image")));
			this->pictureBox89->Location = System::Drawing::Point(1404, 244);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(14, 16);
			this->pictureBox89->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox89->TabIndex = 113;
			this->pictureBox89->TabStop = false;
			// 
			// pictureBox90
			// 
			this->pictureBox90->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox90->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox90.Image")));
			this->pictureBox90->Location = System::Drawing::Point(1379, 221);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(14, 16);
			this->pictureBox90->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox90->TabIndex = 114;
			this->pictureBox90->TabStop = false;
			// 
			// pictureBox91
			// 
			this->pictureBox91->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox91->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox91.Image")));
			this->pictureBox91->Location = System::Drawing::Point(1352, 204);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(14, 16);
			this->pictureBox91->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox91->TabIndex = 115;
			this->pictureBox91->TabStop = false;
			// 
			// pictureBox92
			// 
			this->pictureBox92->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox92.Image")));
			this->pictureBox92->Location = System::Drawing::Point(1314, 188);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(14, 16);
			this->pictureBox92->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox92->TabIndex = 116;
			this->pictureBox92->TabStop = false;
			// 
			// pictureBox93
			// 
			this->pictureBox93->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.Image")));
			this->pictureBox93->Location = System::Drawing::Point(1269, 183);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(14, 16);
			this->pictureBox93->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox93->TabIndex = 117;
			this->pictureBox93->TabStop = false;
			// 
			// pictureBox94
			// 
			this->pictureBox94->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox94.Image")));
			this->pictureBox94->Location = System::Drawing::Point(1230, 183);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(14, 16);
			this->pictureBox94->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox94->TabIndex = 118;
			this->pictureBox94->TabStop = false;
			// 
			// pictureBox95
			// 
			this->pictureBox95->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox95->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox95.Image")));
			this->pictureBox95->Location = System::Drawing::Point(1196, 194);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(14, 16);
			this->pictureBox95->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox95->TabIndex = 119;
			this->pictureBox95->TabStop = false;
			// 
			// pictureBox96
			// 
			this->pictureBox96->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox96->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox96.Image")));
			this->pictureBox96->Location = System::Drawing::Point(1162, 207);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(14, 16);
			this->pictureBox96->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox96->TabIndex = 120;
			this->pictureBox96->TabStop = false;
			// 
			// pictureBox97
			// 
			this->pictureBox97->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox97->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox97.Image")));
			this->pictureBox97->Location = System::Drawing::Point(1134, 226);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(14, 16);
			this->pictureBox97->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox97->TabIndex = 121;
			this->pictureBox97->TabStop = false;
			// 
			// pictureBox98
			// 
			this->pictureBox98->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox98->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox98.Image")));
			this->pictureBox98->Location = System::Drawing::Point(1128, 255);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(14, 16);
			this->pictureBox98->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox98->TabIndex = 122;
			this->pictureBox98->TabStop = false;
			// 
			// pictureBox99
			// 
			this->pictureBox99->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox99->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox99.Image")));
			this->pictureBox99->Location = System::Drawing::Point(1108, 281);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(14, 16);
			this->pictureBox99->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox99->TabIndex = 123;
			this->pictureBox99->TabStop = false;
			// 
			// pictureBox100
			// 
			this->pictureBox100->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox100.Image")));
			this->pictureBox100->Location = System::Drawing::Point(1097, 311);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(14, 16);
			this->pictureBox100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox100->TabIndex = 124;
			this->pictureBox100->TabStop = false;
			// 
			// pictureBox101
			// 
			this->pictureBox101->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox101.Image")));
			this->pictureBox101->Location = System::Drawing::Point(1087, 334);
			this->pictureBox101->Name = L"pictureBox101";
			this->pictureBox101->Size = System::Drawing::Size(14, 16);
			this->pictureBox101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox101->TabIndex = 125;
			this->pictureBox101->TabStop = false;
			// 
			// pictureBox102
			// 
			this->pictureBox102->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox102->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox102.Image")));
			this->pictureBox102->Location = System::Drawing::Point(1083, 359);
			this->pictureBox102->Name = L"pictureBox102";
			this->pictureBox102->Size = System::Drawing::Size(14, 16);
			this->pictureBox102->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox102->TabIndex = 126;
			this->pictureBox102->TabStop = false;
			// 
			// pictureBox103
			// 
			this->pictureBox103->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox103->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox103.Image")));
			this->pictureBox103->Location = System::Drawing::Point(1083, 387);
			this->pictureBox103->Name = L"pictureBox103";
			this->pictureBox103->Size = System::Drawing::Size(14, 16);
			this->pictureBox103->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox103->TabIndex = 127;
			this->pictureBox103->TabStop = false;
			// 
			// pictureBox104
			// 
			this->pictureBox104->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox104->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox104.Image")));
			this->pictureBox104->Location = System::Drawing::Point(1087, 419);
			this->pictureBox104->Name = L"pictureBox104";
			this->pictureBox104->Size = System::Drawing::Size(14, 16);
			this->pictureBox104->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox104->TabIndex = 128;
			this->pictureBox104->TabStop = false;
			// 
			// pictureBox105
			// 
			this->pictureBox105->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox105->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox105.Image")));
			this->pictureBox105->Location = System::Drawing::Point(1098, 449);
			this->pictureBox105->Name = L"pictureBox105";
			this->pictureBox105->Size = System::Drawing::Size(14, 16);
			this->pictureBox105->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox105->TabIndex = 129;
			this->pictureBox105->TabStop = false;
			// 
			// pictureBox106
			// 
			this->pictureBox106->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox106->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox106.Image")));
			this->pictureBox106->Location = System::Drawing::Point(1110, 473);
			this->pictureBox106->Name = L"pictureBox106";
			this->pictureBox106->Size = System::Drawing::Size(14, 16);
			this->pictureBox106->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox106->TabIndex = 130;
			this->pictureBox106->TabStop = false;
			// 
			// pictureBox107
			// 
			this->pictureBox107->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox107->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox107.Image")));
			this->pictureBox107->Location = System::Drawing::Point(1124, 492);
			this->pictureBox107->Name = L"pictureBox107";
			this->pictureBox107->Size = System::Drawing::Size(14, 16);
			this->pictureBox107->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox107->TabIndex = 131;
			this->pictureBox107->TabStop = false;
			// 
			// pictureBox108
			// 
			this->pictureBox108->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox108->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox108.Image")));
			this->pictureBox108->Location = System::Drawing::Point(1146, 511);
			this->pictureBox108->Name = L"pictureBox108";
			this->pictureBox108->Size = System::Drawing::Size(14, 16);
			this->pictureBox108->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox108->TabIndex = 132;
			this->pictureBox108->TabStop = false;
			// 
			// pictureBox109
			// 
			this->pictureBox109->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox109->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox109.Image")));
			this->pictureBox109->Location = System::Drawing::Point(1174, 530);
			this->pictureBox109->Name = L"pictureBox109";
			this->pictureBox109->Size = System::Drawing::Size(14, 16);
			this->pictureBox109->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox109->TabIndex = 133;
			this->pictureBox109->TabStop = false;
			// 
			// pictureBox110
			// 
			this->pictureBox110->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox110.Image")));
			this->pictureBox110->Location = System::Drawing::Point(1197, 542);
			this->pictureBox110->Name = L"pictureBox110";
			this->pictureBox110->Size = System::Drawing::Size(14, 16);
			this->pictureBox110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox110->TabIndex = 134;
			this->pictureBox110->TabStop = false;
			// 
			// pictureBox111
			// 
			this->pictureBox111->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox111.Image")));
			this->pictureBox111->Location = System::Drawing::Point(1222, 549);
			this->pictureBox111->Name = L"pictureBox111";
			this->pictureBox111->Size = System::Drawing::Size(14, 16);
			this->pictureBox111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox111->TabIndex = 135;
			this->pictureBox111->TabStop = false;
			// 
			// pictureBox112
			// 
			this->pictureBox112->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox112->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox112.Image")));
			this->pictureBox112->Location = System::Drawing::Point(1250, 552);
			this->pictureBox112->Name = L"pictureBox112";
			this->pictureBox112->Size = System::Drawing::Size(14, 16);
			this->pictureBox112->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox112->TabIndex = 136;
			this->pictureBox112->TabStop = false;
			// 
			// pictureBox113
			// 
			this->pictureBox113->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox113->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox113.Image")));
			this->pictureBox113->Location = System::Drawing::Point(1278, 554);
			this->pictureBox113->Name = L"pictureBox113";
			this->pictureBox113->Size = System::Drawing::Size(14, 16);
			this->pictureBox113->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox113->TabIndex = 137;
			this->pictureBox113->TabStop = false;
			// 
			// pictureBox114
			// 
			this->pictureBox114->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox114->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox114.Image")));
			this->pictureBox114->Location = System::Drawing::Point(1311, 546);
			this->pictureBox114->Name = L"pictureBox114";
			this->pictureBox114->Size = System::Drawing::Size(14, 16);
			this->pictureBox114->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox114->TabIndex = 138;
			this->pictureBox114->TabStop = false;
			// 
			// pictureBox115
			// 
			this->pictureBox115->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox115->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox115.Image")));
			this->pictureBox115->Location = System::Drawing::Point(1340, 536);
			this->pictureBox115->Name = L"pictureBox115";
			this->pictureBox115->Size = System::Drawing::Size(14, 16);
			this->pictureBox115->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox115->TabIndex = 139;
			this->pictureBox115->TabStop = false;
			// 
			// pictureBox116
			// 
			this->pictureBox116->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox116->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox116.Image")));
			this->pictureBox116->Location = System::Drawing::Point(1369, 519);
			this->pictureBox116->Name = L"pictureBox116";
			this->pictureBox116->Size = System::Drawing::Size(14, 16);
			this->pictureBox116->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox116->TabIndex = 140;
			this->pictureBox116->TabStop = false;
			// 
			// pictureBox117
			// 
			this->pictureBox117->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox117->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox117.Image")));
			this->pictureBox117->Location = System::Drawing::Point(1391, 498);
			this->pictureBox117->Name = L"pictureBox117";
			this->pictureBox117->Size = System::Drawing::Size(14, 16);
			this->pictureBox117->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox117->TabIndex = 141;
			this->pictureBox117->TabStop = false;
			// 
			// pictureBox118
			// 
			this->pictureBox118->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox118->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox118.Image")));
			this->pictureBox118->Location = System::Drawing::Point(1411, 475);
			this->pictureBox118->Name = L"pictureBox118";
			this->pictureBox118->Size = System::Drawing::Size(14, 16);
			this->pictureBox118->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox118->TabIndex = 142;
			this->pictureBox118->TabStop = false;
			// 
			// pictureBox119
			// 
			this->pictureBox119->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox119->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox119.Image")));
			this->pictureBox119->Location = System::Drawing::Point(1425, 449);
			this->pictureBox119->Name = L"pictureBox119";
			this->pictureBox119->Size = System::Drawing::Size(14, 16);
			this->pictureBox119->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox119->TabIndex = 143;
			this->pictureBox119->TabStop = false;
			// 
			// pictureBox120
			// 
			this->pictureBox120->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox120->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox120.Image")));
			this->pictureBox120->Location = System::Drawing::Point(1438, 413);
			this->pictureBox120->Name = L"pictureBox120";
			this->pictureBox120->Size = System::Drawing::Size(14, 16);
			this->pictureBox120->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox120->TabIndex = 144;
			this->pictureBox120->TabStop = false;
			// 
			// pictureBox121
			// 
			this->pictureBox121->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox121->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox121.Image")));
			this->pictureBox121->Location = System::Drawing::Point(1441, 372);
			this->pictureBox121->Name = L"pictureBox121";
			this->pictureBox121->Size = System::Drawing::Size(14, 16);
			this->pictureBox121->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox121->TabIndex = 145;
			this->pictureBox121->TabStop = false;
			// 
			// pictureBox122
			// 
			this->pictureBox122->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox122->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox122.Image")));
			this->pictureBox122->Location = System::Drawing::Point(1436, 336);
			this->pictureBox122->Name = L"pictureBox122";
			this->pictureBox122->Size = System::Drawing::Size(14, 16);
			this->pictureBox122->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox122->TabIndex = 146;
			this->pictureBox122->TabStop = false;
			// 
			// pictureBox123
			// 
			this->pictureBox123->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox123->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox123.Image")));
			this->pictureBox123->Location = System::Drawing::Point(1426, 305);
			this->pictureBox123->Name = L"pictureBox123";
			this->pictureBox123->Size = System::Drawing::Size(14, 16);
			this->pictureBox123->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox123->TabIndex = 147;
			this->pictureBox123->TabStop = false;
			// 
			// pictureBox124
			// 
			this->pictureBox124->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox124->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox124.Image")));
			this->pictureBox124->Location = System::Drawing::Point(1412, 280);
			this->pictureBox124->Name = L"pictureBox124";
			this->pictureBox124->Size = System::Drawing::Size(14, 16);
			this->pictureBox124->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox124->TabIndex = 148;
			this->pictureBox124->TabStop = false;
			// 
			// pictureBox125
			// 
			this->pictureBox125->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox125->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox125.Image")));
			this->pictureBox125->Location = System::Drawing::Point(1394, 257);
			this->pictureBox125->Name = L"pictureBox125";
			this->pictureBox125->Size = System::Drawing::Size(14, 16);
			this->pictureBox125->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox125->TabIndex = 149;
			this->pictureBox125->TabStop = false;
			// 
			// pictureBox126
			// 
			this->pictureBox126->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox126->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox126.Image")));
			this->pictureBox126->Location = System::Drawing::Point(1373, 235);
			this->pictureBox126->Name = L"pictureBox126";
			this->pictureBox126->Size = System::Drawing::Size(14, 16);
			this->pictureBox126->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox126->TabIndex = 150;
			this->pictureBox126->TabStop = false;
			// 
			// pictureBox127
			// 
			this->pictureBox127->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox127->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox127.Image")));
			this->pictureBox127->Location = System::Drawing::Point(1347, 219);
			this->pictureBox127->Name = L"pictureBox127";
			this->pictureBox127->Size = System::Drawing::Size(14, 16);
			this->pictureBox127->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox127->TabIndex = 151;
			this->pictureBox127->TabStop = false;
			// 
			// pictureBox128
			// 
			this->pictureBox128->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox128->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox128.Image")));
			this->pictureBox128->Location = System::Drawing::Point(1311, 204);
			this->pictureBox128->Name = L"pictureBox128";
			this->pictureBox128->Size = System::Drawing::Size(14, 16);
			this->pictureBox128->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox128->TabIndex = 152;
			this->pictureBox128->TabStop = false;
			// 
			// pictureBox129
			// 
			this->pictureBox129->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox129->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox129.Image")));
			this->pictureBox129->Location = System::Drawing::Point(1269, 197);
			this->pictureBox129->Name = L"pictureBox129";
			this->pictureBox129->Size = System::Drawing::Size(14, 16);
			this->pictureBox129->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox129->TabIndex = 153;
			this->pictureBox129->TabStop = false;
			// 
			// pictureBox130
			// 
			this->pictureBox130->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox130->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox130.Image")));
			this->pictureBox130->Location = System::Drawing::Point(1236, 199);
			this->pictureBox130->Name = L"pictureBox130";
			this->pictureBox130->Size = System::Drawing::Size(14, 16);
			this->pictureBox130->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox130->TabIndex = 154;
			this->pictureBox130->TabStop = false;
			// 
			// pictureBox131
			// 
			this->pictureBox131->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox131->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox131.Image")));
			this->pictureBox131->Location = System::Drawing::Point(1197, 210);
			this->pictureBox131->Name = L"pictureBox131";
			this->pictureBox131->Size = System::Drawing::Size(14, 16);
			this->pictureBox131->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox131->TabIndex = 155;
			this->pictureBox131->TabStop = false;
			// 
			// pictureBox132
			// 
			this->pictureBox132->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox132->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox132.Image")));
			this->pictureBox132->Location = System::Drawing::Point(1167, 222);
			this->pictureBox132->Name = L"pictureBox132";
			this->pictureBox132->Size = System::Drawing::Size(14, 16);
			this->pictureBox132->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox132->TabIndex = 156;
			this->pictureBox132->TabStop = false;
			// 
			// pictureBox133
			// 
			this->pictureBox133->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox133->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox133.Image")));
			this->pictureBox133->Location = System::Drawing::Point(1143, 238);
			this->pictureBox133->Name = L"pictureBox133";
			this->pictureBox133->Size = System::Drawing::Size(14, 16);
			this->pictureBox133->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox133->TabIndex = 157;
			this->pictureBox133->TabStop = false;
			// 
			// pictureBox134
			// 
			this->pictureBox134->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox134->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox134.Image")));
			this->pictureBox134->Location = System::Drawing::Point(1287, 169);
			this->pictureBox134->Name = L"pictureBox134";
			this->pictureBox134->Size = System::Drawing::Size(14, 16);
			this->pictureBox134->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox134->TabIndex = 158;
			this->pictureBox134->TabStop = false;
			// 
			// pictureBox135
			// 
			this->pictureBox135->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox135->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox135.Image")));
			this->pictureBox135->Location = System::Drawing::Point(1277, 141);
			this->pictureBox135->Name = L"pictureBox135";
			this->pictureBox135->Size = System::Drawing::Size(14, 16);
			this->pictureBox135->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox135->TabIndex = 159;
			this->pictureBox135->TabStop = false;
			// 
			// pictureBox136
			// 
			this->pictureBox136->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox136->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox136.Image")));
			this->pictureBox136->Location = System::Drawing::Point(1270, 107);
			this->pictureBox136->Name = L"pictureBox136";
			this->pictureBox136->Size = System::Drawing::Size(14, 16);
			this->pictureBox136->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox136->TabIndex = 160;
			this->pictureBox136->TabStop = false;
			// 
			// pictureBox137
			// 
			this->pictureBox137->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox137->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox137.Image")));
			this->pictureBox137->Location = System::Drawing::Point(1268, 71);
			this->pictureBox137->Name = L"pictureBox137";
			this->pictureBox137->Size = System::Drawing::Size(14, 16);
			this->pictureBox137->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox137->TabIndex = 161;
			this->pictureBox137->TabStop = false;
			// 
			// pictureBox138
			// 
			this->pictureBox138->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox138->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox138.Image")));
			this->pictureBox138->Location = System::Drawing::Point(1268, 37);
			this->pictureBox138->Name = L"pictureBox138";
			this->pictureBox138->Size = System::Drawing::Size(14, 16);
			this->pictureBox138->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox138->TabIndex = 162;
			this->pictureBox138->TabStop = false;
			// 
			// pictureBox139
			// 
			this->pictureBox139->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox139->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox139.Image")));
			this->pictureBox139->Location = System::Drawing::Point(1266, 5);
			this->pictureBox139->Name = L"pictureBox139";
			this->pictureBox139->Size = System::Drawing::Size(14, 16);
			this->pictureBox139->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox139->TabIndex = 163;
			this->pictureBox139->TabStop = false;
			// 
			// pictureBox140
			// 
			this->pictureBox140->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox140->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox140.Image")));
			this->pictureBox140->Location = System::Drawing::Point(1252, 4);
			this->pictureBox140->Name = L"pictureBox140";
			this->pictureBox140->Size = System::Drawing::Size(14, 16);
			this->pictureBox140->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox140->TabIndex = 164;
			this->pictureBox140->TabStop = false;
			// 
			// pictureBox141
			// 
			this->pictureBox141->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox141->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox141.Image")));
			this->pictureBox141->Location = System::Drawing::Point(1252, 36);
			this->pictureBox141->Name = L"pictureBox141";
			this->pictureBox141->Size = System::Drawing::Size(14, 16);
			this->pictureBox141->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox141->TabIndex = 165;
			this->pictureBox141->TabStop = false;
			// 
			// pictureBox142
			// 
			this->pictureBox142->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox142->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox142.Image")));
			this->pictureBox142->Location = System::Drawing::Point(1252, 72);
			this->pictureBox142->Name = L"pictureBox142";
			this->pictureBox142->Size = System::Drawing::Size(14, 16);
			this->pictureBox142->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox142->TabIndex = 166;
			this->pictureBox142->TabStop = false;
			// 
			// pictureBox143
			// 
			this->pictureBox143->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox143->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox143.Image")));
			this->pictureBox143->Location = System::Drawing::Point(1251, 102);
			this->pictureBox143->Name = L"pictureBox143";
			this->pictureBox143->Size = System::Drawing::Size(14, 16);
			this->pictureBox143->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox143->TabIndex = 167;
			this->pictureBox143->TabStop = false;
			// 
			// pictureBox144
			// 
			this->pictureBox144->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox144->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox144.Image")));
			this->pictureBox144->Location = System::Drawing::Point(1249, 138);
			this->pictureBox144->Name = L"pictureBox144";
			this->pictureBox144->Size = System::Drawing::Size(14, 16);
			this->pictureBox144->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox144->TabIndex = 168;
			this->pictureBox144->TabStop = false;
			// 
			// pictureBox145
			// 
			this->pictureBox145->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox145->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox145.Image")));
			this->pictureBox145->Location = System::Drawing::Point(1240, 165);
			this->pictureBox145->Name = L"pictureBox145";
			this->pictureBox145->Size = System::Drawing::Size(14, 16);
			this->pictureBox145->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox145->TabIndex = 169;
			this->pictureBox145->TabStop = false;
			// 
			// pictureBox146
			// 
			this->pictureBox146->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox146->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox146.Image")));
			this->pictureBox146->Location = System::Drawing::Point(1471, 348);
			this->pictureBox146->Name = L"pictureBox146";
			this->pictureBox146->Size = System::Drawing::Size(14, 16);
			this->pictureBox146->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox146->TabIndex = 170;
			this->pictureBox146->TabStop = false;
			// 
			// pictureBox147
			// 
			this->pictureBox147->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox147->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox147.Image")));
			this->pictureBox147->Location = System::Drawing::Point(1490, 322);
			this->pictureBox147->Name = L"pictureBox147";
			this->pictureBox147->Size = System::Drawing::Size(14, 16);
			this->pictureBox147->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox147->TabIndex = 171;
			this->pictureBox147->TabStop = false;
			// 
			// pictureBox148
			// 
			this->pictureBox148->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox148->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox148.Image")));
			this->pictureBox148->Location = System::Drawing::Point(1522, 305);
			this->pictureBox148->Name = L"pictureBox148";
			this->pictureBox148->Size = System::Drawing::Size(14, 16);
			this->pictureBox148->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox148->TabIndex = 172;
			this->pictureBox148->TabStop = false;
			// 
			// pictureBox149
			// 
			this->pictureBox149->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox149->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox149.Image")));
			this->pictureBox149->Location = System::Drawing::Point(1565, 303);
			this->pictureBox149->Name = L"pictureBox149";
			this->pictureBox149->Size = System::Drawing::Size(14, 16);
			this->pictureBox149->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox149->TabIndex = 173;
			this->pictureBox149->TabStop = false;
			// 
			// pictureBox150
			// 
			this->pictureBox150->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox150->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox150.Image")));
			this->pictureBox150->Location = System::Drawing::Point(1605, 311);
			this->pictureBox150->Name = L"pictureBox150";
			this->pictureBox150->Size = System::Drawing::Size(14, 16);
			this->pictureBox150->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox150->TabIndex = 174;
			this->pictureBox150->TabStop = false;
			// 
			// pictureBox151
			// 
			this->pictureBox151->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox151->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox151.Image")));
			this->pictureBox151->Location = System::Drawing::Point(1645, 317);
			this->pictureBox151->Name = L"pictureBox151";
			this->pictureBox151->Size = System::Drawing::Size(14, 16);
			this->pictureBox151->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox151->TabIndex = 175;
			this->pictureBox151->TabStop = false;
			// 
			// pictureBox152
			// 
			this->pictureBox152->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox152->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox152.Image")));
			this->pictureBox152->Location = System::Drawing::Point(1684, 322);
			this->pictureBox152->Name = L"pictureBox152";
			this->pictureBox152->Size = System::Drawing::Size(14, 16);
			this->pictureBox152->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox152->TabIndex = 176;
			this->pictureBox152->TabStop = false;
			// 
			// pictureBox153
			// 
			this->pictureBox153->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox153->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox153.Image")));
			this->pictureBox153->Location = System::Drawing::Point(1717, 327);
			this->pictureBox153->Name = L"pictureBox153";
			this->pictureBox153->Size = System::Drawing::Size(14, 16);
			this->pictureBox153->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox153->TabIndex = 177;
			this->pictureBox153->TabStop = false;
			// 
			// pictureBox154
			// 
			this->pictureBox154->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox154->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox154.Image")));
			this->pictureBox154->Location = System::Drawing::Point(1751, 333);
			this->pictureBox154->Name = L"pictureBox154";
			this->pictureBox154->Size = System::Drawing::Size(14, 16);
			this->pictureBox154->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox154->TabIndex = 178;
			this->pictureBox154->TabStop = false;
			// 
			// pictureBox155
			// 
			this->pictureBox155->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox155->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox155.Image")));
			this->pictureBox155->Location = System::Drawing::Point(1782, 338);
			this->pictureBox155->Name = L"pictureBox155";
			this->pictureBox155->Size = System::Drawing::Size(14, 16);
			this->pictureBox155->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox155->TabIndex = 179;
			this->pictureBox155->TabStop = false;
			// 
			// pictureBox156
			// 
			this->pictureBox156->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox156->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox156.Image")));
			this->pictureBox156->Location = System::Drawing::Point(1816, 343);
			this->pictureBox156->Name = L"pictureBox156";
			this->pictureBox156->Size = System::Drawing::Size(14, 16);
			this->pictureBox156->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox156->TabIndex = 180;
			this->pictureBox156->TabStop = false;
			// 
			// pictureBox157
			// 
			this->pictureBox157->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox157->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox157.Image")));
			this->pictureBox157->Location = System::Drawing::Point(1849, 343);
			this->pictureBox157->Name = L"pictureBox157";
			this->pictureBox157->Size = System::Drawing::Size(14, 16);
			this->pictureBox157->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox157->TabIndex = 181;
			this->pictureBox157->TabStop = false;
			// 
			// pictureBox158
			// 
			this->pictureBox158->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox158->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox158.Image")));
			this->pictureBox158->Location = System::Drawing::Point(1883, 347);
			this->pictureBox158->Name = L"pictureBox158";
			this->pictureBox158->Size = System::Drawing::Size(14, 16);
			this->pictureBox158->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox158->TabIndex = 182;
			this->pictureBox158->TabStop = false;
			// 
			// pictureBox159
			// 
			this->pictureBox159->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox159->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox159.Image")));
			this->pictureBox159->Location = System::Drawing::Point(1878, 317);
			this->pictureBox159->Name = L"pictureBox159";
			this->pictureBox159->Size = System::Drawing::Size(14, 16);
			this->pictureBox159->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox159->TabIndex = 183;
			this->pictureBox159->TabStop = false;
			// 
			// pictureBox160
			// 
			this->pictureBox160->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox160->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox160.Image")));
			this->pictureBox160->Location = System::Drawing::Point(1848, 313);
			this->pictureBox160->Name = L"pictureBox160";
			this->pictureBox160->Size = System::Drawing::Size(14, 16);
			this->pictureBox160->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox160->TabIndex = 184;
			this->pictureBox160->TabStop = false;
			// 
			// pictureBox161
			// 
			this->pictureBox161->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox161->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox161.Image")));
			this->pictureBox161->Location = System::Drawing::Point(1815, 310);
			this->pictureBox161->Name = L"pictureBox161";
			this->pictureBox161->Size = System::Drawing::Size(14, 16);
			this->pictureBox161->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox161->TabIndex = 185;
			this->pictureBox161->TabStop = false;
			// 
			// pictureBox162
			// 
			this->pictureBox162->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox162->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox162.Image")));
			this->pictureBox162->Location = System::Drawing::Point(1782, 303);
			this->pictureBox162->Name = L"pictureBox162";
			this->pictureBox162->Size = System::Drawing::Size(14, 16);
			this->pictureBox162->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox162->TabIndex = 186;
			this->pictureBox162->TabStop = false;
			// 
			// pictureBox163
			// 
			this->pictureBox163->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox163->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox163.Image")));
			this->pictureBox163->Location = System::Drawing::Point(1747, 298);
			this->pictureBox163->Name = L"pictureBox163";
			this->pictureBox163->Size = System::Drawing::Size(14, 16);
			this->pictureBox163->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox163->TabIndex = 187;
			this->pictureBox163->TabStop = false;
			// 
			// pictureBox164
			// 
			this->pictureBox164->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox164->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox164.Image")));
			this->pictureBox164->Location = System::Drawing::Point(1713, 290);
			this->pictureBox164->Name = L"pictureBox164";
			this->pictureBox164->Size = System::Drawing::Size(14, 16);
			this->pictureBox164->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox164->TabIndex = 188;
			this->pictureBox164->TabStop = false;
			// 
			// pictureBox165
			// 
			this->pictureBox165->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox165->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox165.Image")));
			this->pictureBox165->Location = System::Drawing::Point(1681, 287);
			this->pictureBox165->Name = L"pictureBox165";
			this->pictureBox165->Size = System::Drawing::Size(14, 16);
			this->pictureBox165->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox165->TabIndex = 189;
			this->pictureBox165->TabStop = false;
			// 
			// pictureBox166
			// 
			this->pictureBox166->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox166->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox166.Image")));
			this->pictureBox166->Location = System::Drawing::Point(1645, 282);
			this->pictureBox166->Name = L"pictureBox166";
			this->pictureBox166->Size = System::Drawing::Size(14, 16);
			this->pictureBox166->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox166->TabIndex = 190;
			this->pictureBox166->TabStop = false;
			// 
			// pictureBox167
			// 
			this->pictureBox167->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox167->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox167.Image")));
			this->pictureBox167->Location = System::Drawing::Point(1612, 277);
			this->pictureBox167->Name = L"pictureBox167";
			this->pictureBox167->Size = System::Drawing::Size(14, 16);
			this->pictureBox167->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox167->TabIndex = 191;
			this->pictureBox167->TabStop = false;
			// 
			// pictureBox168
			// 
			this->pictureBox168->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox168->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox168.Image")));
			this->pictureBox168->Location = System::Drawing::Point(1576, 268);
			this->pictureBox168->Name = L"pictureBox168";
			this->pictureBox168->Size = System::Drawing::Size(14, 16);
			this->pictureBox168->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox168->TabIndex = 192;
			this->pictureBox168->TabStop = false;
			// 
			// pictureBox169
			// 
			this->pictureBox169->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox169->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox169.Image")));
			this->pictureBox169->Location = System::Drawing::Point(1541, 266);
			this->pictureBox169->Name = L"pictureBox169";
			this->pictureBox169->Size = System::Drawing::Size(14, 16);
			this->pictureBox169->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox169->TabIndex = 193;
			this->pictureBox169->TabStop = false;
			// 
			// pictureBox170
			// 
			this->pictureBox170->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox170->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox170.Image")));
			this->pictureBox170->Location = System::Drawing::Point(1504, 271);
			this->pictureBox170->Name = L"pictureBox170";
			this->pictureBox170->Size = System::Drawing::Size(14, 16);
			this->pictureBox170->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox170->TabIndex = 194;
			this->pictureBox170->TabStop = false;
			// 
			// pictureBox171
			// 
			this->pictureBox171->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox171->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox171.Image")));
			this->pictureBox171->Location = System::Drawing::Point(1474, 278);
			this->pictureBox171->Name = L"pictureBox171";
			this->pictureBox171->Size = System::Drawing::Size(14, 16);
			this->pictureBox171->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox171->TabIndex = 195;
			this->pictureBox171->TabStop = false;
			// 
			// pictureBox172
			// 
			this->pictureBox172->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox172->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox172.Image")));
			this->pictureBox172->Location = System::Drawing::Point(1449, 283);
			this->pictureBox172->Name = L"pictureBox172";
			this->pictureBox172->Size = System::Drawing::Size(14, 16);
			this->pictureBox172->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox172->TabIndex = 196;
			this->pictureBox172->TabStop = false;
			// 
			// pictureBox173
			// 
			this->pictureBox173->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox173->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox173.Image")));
			this->pictureBox173->Location = System::Drawing::Point(1878, 303);
			this->pictureBox173->Name = L"pictureBox173";
			this->pictureBox173->Size = System::Drawing::Size(14, 16);
			this->pictureBox173->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox173->TabIndex = 197;
			this->pictureBox173->TabStop = false;
			// 
			// pictureBox174
			// 
			this->pictureBox174->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox174->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox174.Image")));
			this->pictureBox174->Location = System::Drawing::Point(1850, 302);
			this->pictureBox174->Name = L"pictureBox174";
			this->pictureBox174->Size = System::Drawing::Size(14, 16);
			this->pictureBox174->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox174->TabIndex = 198;
			this->pictureBox174->TabStop = false;
			// 
			// pictureBox175
			// 
			this->pictureBox175->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox175->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox175.Image")));
			this->pictureBox175->Location = System::Drawing::Point(1817, 294);
			this->pictureBox175->Name = L"pictureBox175";
			this->pictureBox175->Size = System::Drawing::Size(14, 16);
			this->pictureBox175->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox175->TabIndex = 199;
			this->pictureBox175->TabStop = false;
			// 
			// pictureBox176
			// 
			this->pictureBox176->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox176->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox176.Image")));
			this->pictureBox176->Location = System::Drawing::Point(1782, 288);
			this->pictureBox176->Name = L"pictureBox176";
			this->pictureBox176->Size = System::Drawing::Size(14, 16);
			this->pictureBox176->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox176->TabIndex = 200;
			this->pictureBox176->TabStop = false;
			// 
			// pictureBox177
			// 
			this->pictureBox177->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox177->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox177.Image")));
			this->pictureBox177->Location = System::Drawing::Point(1748, 283);
			this->pictureBox177->Name = L"pictureBox177";
			this->pictureBox177->Size = System::Drawing::Size(14, 16);
			this->pictureBox177->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox177->TabIndex = 201;
			this->pictureBox177->TabStop = false;
			// 
			// pictureBox178
			// 
			this->pictureBox178->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox178->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox178.Image")));
			this->pictureBox178->Location = System::Drawing::Point(1713, 278);
			this->pictureBox178->Name = L"pictureBox178";
			this->pictureBox178->Size = System::Drawing::Size(14, 16);
			this->pictureBox178->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox178->TabIndex = 202;
			this->pictureBox178->TabStop = false;
			// 
			// pictureBox179
			// 
			this->pictureBox179->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox179->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox179.Image")));
			this->pictureBox179->Location = System::Drawing::Point(1682, 274);
			this->pictureBox179->Name = L"pictureBox179";
			this->pictureBox179->Size = System::Drawing::Size(14, 16);
			this->pictureBox179->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox179->TabIndex = 203;
			this->pictureBox179->TabStop = false;
			// 
			// pictureBox180
			// 
			this->pictureBox180->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox180->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox180.Image")));
			this->pictureBox180->Location = System::Drawing::Point(1647, 267);
			this->pictureBox180->Name = L"pictureBox180";
			this->pictureBox180->Size = System::Drawing::Size(14, 16);
			this->pictureBox180->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox180->TabIndex = 204;
			this->pictureBox180->TabStop = false;
			// 
			// pictureBox181
			// 
			this->pictureBox181->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox181->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox181.Image")));
			this->pictureBox181->Location = System::Drawing::Point(1614, 259);
			this->pictureBox181->Name = L"pictureBox181";
			this->pictureBox181->Size = System::Drawing::Size(14, 16);
			this->pictureBox181->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox181->TabIndex = 205;
			this->pictureBox181->TabStop = false;
			// 
			// pictureBox182
			// 
			this->pictureBox182->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox182->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox182.Image")));
			this->pictureBox182->Location = System::Drawing::Point(1576, 254);
			this->pictureBox182->Name = L"pictureBox182";
			this->pictureBox182->Size = System::Drawing::Size(14, 16);
			this->pictureBox182->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox182->TabIndex = 206;
			this->pictureBox182->TabStop = false;
			// 
			// pictureBox183
			// 
			this->pictureBox183->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox183->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox183.Image")));
			this->pictureBox183->Location = System::Drawing::Point(1543, 252);
			this->pictureBox183->Name = L"pictureBox183";
			this->pictureBox183->Size = System::Drawing::Size(14, 16);
			this->pictureBox183->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox183->TabIndex = 207;
			this->pictureBox183->TabStop = false;
			// 
			// pictureBox184
			// 
			this->pictureBox184->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox184->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox184.Image")));
			this->pictureBox184->Location = System::Drawing::Point(1505, 257);
			this->pictureBox184->Name = L"pictureBox184";
			this->pictureBox184->Size = System::Drawing::Size(14, 16);
			this->pictureBox184->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox184->TabIndex = 208;
			this->pictureBox184->TabStop = false;
			// 
			// pictureBox185
			// 
			this->pictureBox185->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox185->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox185.Image")));
			this->pictureBox185->Location = System::Drawing::Point(1478, 264);
			this->pictureBox185->Name = L"pictureBox185";
			this->pictureBox185->Size = System::Drawing::Size(14, 16);
			this->pictureBox185->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox185->TabIndex = 209;
			this->pictureBox185->TabStop = false;
			// 
			// pictureBox186
			// 
			this->pictureBox186->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox186->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox186.Image")));
			this->pictureBox186->Location = System::Drawing::Point(1443, 268);
			this->pictureBox186->Name = L"pictureBox186";
			this->pictureBox186->Size = System::Drawing::Size(14, 16);
			this->pictureBox186->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox186->TabIndex = 210;
			this->pictureBox186->TabStop = false;
			// 
			// pictureBox187
			// 
			this->pictureBox187->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox187->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox187.Image")));
			this->pictureBox187->Location = System::Drawing::Point(1531, 859);
			this->pictureBox187->Name = L"pictureBox187";
			this->pictureBox187->Size = System::Drawing::Size(14, 16);
			this->pictureBox187->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox187->TabIndex = 211;
			this->pictureBox187->TabStop = false;
			// 
			// pictureBox188
			// 
			this->pictureBox188->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox188->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox188.Image")));
			this->pictureBox188->Location = System::Drawing::Point(1520, 831);
			this->pictureBox188->Name = L"pictureBox188";
			this->pictureBox188->Size = System::Drawing::Size(14, 16);
			this->pictureBox188->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox188->TabIndex = 212;
			this->pictureBox188->TabStop = false;
			// 
			// pictureBox189
			// 
			this->pictureBox189->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox189->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox189.Image")));
			this->pictureBox189->Location = System::Drawing::Point(1510, 800);
			this->pictureBox189->Name = L"pictureBox189";
			this->pictureBox189->Size = System::Drawing::Size(14, 16);
			this->pictureBox189->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox189->TabIndex = 213;
			this->pictureBox189->TabStop = false;
			// 
			// pictureBox190
			// 
			this->pictureBox190->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox190->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox190.Image")));
			this->pictureBox190->Location = System::Drawing::Point(1501, 770);
			this->pictureBox190->Name = L"pictureBox190";
			this->pictureBox190->Size = System::Drawing::Size(14, 16);
			this->pictureBox190->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox190->TabIndex = 214;
			this->pictureBox190->TabStop = false;
			// 
			// pictureBox191
			// 
			this->pictureBox191->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox191->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox191.Image")));
			this->pictureBox191->Location = System::Drawing::Point(1499, 737);
			this->pictureBox191->Name = L"pictureBox191";
			this->pictureBox191->Size = System::Drawing::Size(14, 16);
			this->pictureBox191->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox191->TabIndex = 215;
			this->pictureBox191->TabStop = false;
			// 
			// pictureBox192
			// 
			this->pictureBox192->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox192->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox192.Image")));
			this->pictureBox192->Location = System::Drawing::Point(1496, 705);
			this->pictureBox192->Name = L"pictureBox192";
			this->pictureBox192->Size = System::Drawing::Size(14, 16);
			this->pictureBox192->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox192->TabIndex = 216;
			this->pictureBox192->TabStop = false;
			// 
			// pictureBox193
			// 
			this->pictureBox193->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox193->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox193.Image")));
			this->pictureBox193->Location = System::Drawing::Point(1499, 674);
			this->pictureBox193->Name = L"pictureBox193";
			this->pictureBox193->Size = System::Drawing::Size(14, 16);
			this->pictureBox193->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox193->TabIndex = 217;
			this->pictureBox193->TabStop = false;
			// 
			// pictureBox194
			// 
			this->pictureBox194->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox194->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox194.Image")));
			this->pictureBox194->Location = System::Drawing::Point(1501, 645);
			this->pictureBox194->Name = L"pictureBox194";
			this->pictureBox194->Size = System::Drawing::Size(14, 16);
			this->pictureBox194->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox194->TabIndex = 218;
			this->pictureBox194->TabStop = false;
			// 
			// pictureBox195
			// 
			this->pictureBox195->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox195->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox195.Image")));
			this->pictureBox195->Location = System::Drawing::Point(1509, 611);
			this->pictureBox195->Name = L"pictureBox195";
			this->pictureBox195->Size = System::Drawing::Size(14, 16);
			this->pictureBox195->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox195->TabIndex = 219;
			this->pictureBox195->TabStop = false;
			// 
			// pictureBox196
			// 
			this->pictureBox196->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox196->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox196.Image")));
			this->pictureBox196->Location = System::Drawing::Point(1519, 581);
			this->pictureBox196->Name = L"pictureBox196";
			this->pictureBox196->Size = System::Drawing::Size(14, 16);
			this->pictureBox196->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox196->TabIndex = 220;
			this->pictureBox196->TabStop = false;
			// 
			// pictureBox197
			// 
			this->pictureBox197->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox197->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox197.Image")));
			this->pictureBox197->Location = System::Drawing::Point(1533, 553);
			this->pictureBox197->Name = L"pictureBox197";
			this->pictureBox197->Size = System::Drawing::Size(14, 16);
			this->pictureBox197->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox197->TabIndex = 221;
			this->pictureBox197->TabStop = false;
			// 
			// pictureBox198
			// 
			this->pictureBox198->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox198->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox198.Image")));
			this->pictureBox198->Location = System::Drawing::Point(1547, 529);
			this->pictureBox198->Name = L"pictureBox198";
			this->pictureBox198->Size = System::Drawing::Size(14, 16);
			this->pictureBox198->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox198->TabIndex = 222;
			this->pictureBox198->TabStop = false;
			// 
			// pictureBox199
			// 
			this->pictureBox199->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox199->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox199.Image")));
			this->pictureBox199->Location = System::Drawing::Point(1564, 504);
			this->pictureBox199->Name = L"pictureBox199";
			this->pictureBox199->Size = System::Drawing::Size(14, 16);
			this->pictureBox199->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox199->TabIndex = 223;
			this->pictureBox199->TabStop = false;
			// 
			// pictureBox200
			// 
			this->pictureBox200->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox200->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox200.Image")));
			this->pictureBox200->Location = System::Drawing::Point(1583, 481);
			this->pictureBox200->Name = L"pictureBox200";
			this->pictureBox200->Size = System::Drawing::Size(14, 16);
			this->pictureBox200->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox200->TabIndex = 224;
			this->pictureBox200->TabStop = false;
			// 
			// pictureBox201
			// 
			this->pictureBox201->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox201->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox201.Image")));
			this->pictureBox201->Location = System::Drawing::Point(1602, 458);
			this->pictureBox201->Name = L"pictureBox201";
			this->pictureBox201->Size = System::Drawing::Size(14, 16);
			this->pictureBox201->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox201->TabIndex = 225;
			this->pictureBox201->TabStop = false;
			// 
			// pictureBox202
			// 
			this->pictureBox202->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox202->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox202.Image")));
			this->pictureBox202->Location = System::Drawing::Point(1627, 435);
			this->pictureBox202->Name = L"pictureBox202";
			this->pictureBox202->Size = System::Drawing::Size(14, 16);
			this->pictureBox202->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox202->TabIndex = 226;
			this->pictureBox202->TabStop = false;
			// 
			// pictureBox203
			// 
			this->pictureBox203->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox203->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox203.Image")));
			this->pictureBox203->Location = System::Drawing::Point(1651, 416);
			this->pictureBox203->Name = L"pictureBox203";
			this->pictureBox203->Size = System::Drawing::Size(14, 16);
			this->pictureBox203->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox203->TabIndex = 227;
			this->pictureBox203->TabStop = false;
			// 
			// pictureBox204
			// 
			this->pictureBox204->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox204->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox204.Image")));
			this->pictureBox204->Location = System::Drawing::Point(1675, 402);
			this->pictureBox204->Name = L"pictureBox204";
			this->pictureBox204->Size = System::Drawing::Size(14, 16);
			this->pictureBox204->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox204->TabIndex = 228;
			this->pictureBox204->TabStop = false;
			// 
			// pictureBox205
			// 
			this->pictureBox205->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox205->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox205.Image")));
			this->pictureBox205->Location = System::Drawing::Point(1700, 389);
			this->pictureBox205->Name = L"pictureBox205";
			this->pictureBox205->Size = System::Drawing::Size(14, 16);
			this->pictureBox205->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox205->TabIndex = 229;
			this->pictureBox205->TabStop = false;
			// 
			// pictureBox206
			// 
			this->pictureBox206->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox206->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox206.Image")));
			this->pictureBox206->Location = System::Drawing::Point(1725, 377);
			this->pictureBox206->Name = L"pictureBox206";
			this->pictureBox206->Size = System::Drawing::Size(14, 16);
			this->pictureBox206->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox206->TabIndex = 230;
			this->pictureBox206->TabStop = false;
			// 
			// pictureBox207
			// 
			this->pictureBox207->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox207->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox207.Image")));
			this->pictureBox207->Location = System::Drawing::Point(1758, 367);
			this->pictureBox207->Name = L"pictureBox207";
			this->pictureBox207->Size = System::Drawing::Size(14, 16);
			this->pictureBox207->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox207->TabIndex = 231;
			this->pictureBox207->TabStop = false;
			// 
			// pictureBox208
			// 
			this->pictureBox208->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox208->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox208.Image")));
			this->pictureBox208->Location = System::Drawing::Point(1785, 360);
			this->pictureBox208->Name = L"pictureBox208";
			this->pictureBox208->Size = System::Drawing::Size(14, 16);
			this->pictureBox208->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox208->TabIndex = 232;
			this->pictureBox208->TabStop = false;
			// 
			// pictureBox209
			// 
			this->pictureBox209->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox209->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox209.Image")));
			this->pictureBox209->Location = System::Drawing::Point(1816, 358);
			this->pictureBox209->Name = L"pictureBox209";
			this->pictureBox209->Size = System::Drawing::Size(14, 16);
			this->pictureBox209->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox209->TabIndex = 233;
			this->pictureBox209->TabStop = false;
			// 
			// pictureBox210
			// 
			this->pictureBox210->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox210->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox210.Image")));
			this->pictureBox210->Location = System::Drawing::Point(1849, 356);
			this->pictureBox210->Name = L"pictureBox210";
			this->pictureBox210->Size = System::Drawing::Size(14, 16);
			this->pictureBox210->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox210->TabIndex = 234;
			this->pictureBox210->TabStop = false;
			// 
			// pictureBox211
			// 
			this->pictureBox211->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox211->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox211.Image")));
			this->pictureBox211->Location = System::Drawing::Point(1881, 363);
			this->pictureBox211->Name = L"pictureBox211";
			this->pictureBox211->Size = System::Drawing::Size(14, 16);
			this->pictureBox211->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox211->TabIndex = 235;
			this->pictureBox211->TabStop = false;
			// 
			// pictureBox212
			// 
			this->pictureBox212->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox212->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox212.Image")));
			this->pictureBox212->Location = System::Drawing::Point(1590, 1010);
			this->pictureBox212->Name = L"pictureBox212";
			this->pictureBox212->Size = System::Drawing::Size(14, 16);
			this->pictureBox212->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox212->TabIndex = 236;
			this->pictureBox212->TabStop = false;
			// 
			// pictureBox213
			// 
			this->pictureBox213->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox213->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox213.Image")));
			this->pictureBox213->Location = System::Drawing::Point(1580, 986);
			this->pictureBox213->Name = L"pictureBox213";
			this->pictureBox213->Size = System::Drawing::Size(14, 16);
			this->pictureBox213->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox213->TabIndex = 237;
			this->pictureBox213->TabStop = false;
			// 
			// pictureBox214
			// 
			this->pictureBox214->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox214->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox214.Image")));
			this->pictureBox214->Location = System::Drawing::Point(1571, 959);
			this->pictureBox214->Name = L"pictureBox214";
			this->pictureBox214->Size = System::Drawing::Size(14, 16);
			this->pictureBox214->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox214->TabIndex = 238;
			this->pictureBox214->TabStop = false;
			// 
			// pictureBox215
			// 
			this->pictureBox215->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox215->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox215.Image")));
			this->pictureBox215->Location = System::Drawing::Point(1560, 934);
			this->pictureBox215->Name = L"pictureBox215";
			this->pictureBox215->Size = System::Drawing::Size(14, 16);
			this->pictureBox215->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox215->TabIndex = 239;
			this->pictureBox215->TabStop = false;
			// 
			// pictureBox216
			// 
			this->pictureBox216->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox216->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox216.Image")));
			this->pictureBox216->Location = System::Drawing::Point(1549, 907);
			this->pictureBox216->Name = L"pictureBox216";
			this->pictureBox216->Size = System::Drawing::Size(14, 16);
			this->pictureBox216->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox216->TabIndex = 240;
			this->pictureBox216->TabStop = false;
			// 
			// pictureBox217
			// 
			this->pictureBox217->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox217->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox217.Image")));
			this->pictureBox217->Location = System::Drawing::Point(1540, 882);
			this->pictureBox217->Name = L"pictureBox217";
			this->pictureBox217->Size = System::Drawing::Size(14, 16);
			this->pictureBox217->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox217->TabIndex = 241;
			this->pictureBox217->TabStop = false;
			// 
			// pictureBox218
			// 
			this->pictureBox218->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox218->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox218.Image")));
			this->pictureBox218->Location = System::Drawing::Point(1576, 1011);
			this->pictureBox218->Name = L"pictureBox218";
			this->pictureBox218->Size = System::Drawing::Size(14, 16);
			this->pictureBox218->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox218->TabIndex = 242;
			this->pictureBox218->TabStop = false;
			// 
			// pictureBox219
			// 
			this->pictureBox219->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox219->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox219.Image")));
			this->pictureBox219->Location = System::Drawing::Point(1568, 991);
			this->pictureBox219->Name = L"pictureBox219";
			this->pictureBox219->Size = System::Drawing::Size(14, 16);
			this->pictureBox219->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox219->TabIndex = 243;
			this->pictureBox219->TabStop = false;
			// 
			// pictureBox220
			// 
			this->pictureBox220->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox220->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox220.Image")));
			this->pictureBox220->Location = System::Drawing::Point(1557, 963);
			this->pictureBox220->Name = L"pictureBox220";
			this->pictureBox220->Size = System::Drawing::Size(14, 16);
			this->pictureBox220->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox220->TabIndex = 244;
			this->pictureBox220->TabStop = false;
			// 
			// pictureBox221
			// 
			this->pictureBox221->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox221->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox221.Image")));
			this->pictureBox221->Location = System::Drawing::Point(1545, 939);
			this->pictureBox221->Name = L"pictureBox221";
			this->pictureBox221->Size = System::Drawing::Size(14, 16);
			this->pictureBox221->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox221->TabIndex = 245;
			this->pictureBox221->TabStop = false;
			// 
			// pictureBox222
			// 
			this->pictureBox222->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox222->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox222.Image")));
			this->pictureBox222->Location = System::Drawing::Point(1535, 912);
			this->pictureBox222->Name = L"pictureBox222";
			this->pictureBox222->Size = System::Drawing::Size(14, 16);
			this->pictureBox222->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox222->TabIndex = 246;
			this->pictureBox222->TabStop = false;
			// 
			// pictureBox223
			// 
			this->pictureBox223->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox223->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox223.Image")));
			this->pictureBox223->Location = System::Drawing::Point(1527, 888);
			this->pictureBox223->Name = L"pictureBox223";
			this->pictureBox223->Size = System::Drawing::Size(14, 16);
			this->pictureBox223->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox223->TabIndex = 247;
			this->pictureBox223->TabStop = false;
			// 
			// pictureBox224
			// 
			this->pictureBox224->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox224->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox224.Image")));
			this->pictureBox224->Location = System::Drawing::Point(1518, 864);
			this->pictureBox224->Name = L"pictureBox224";
			this->pictureBox224->Size = System::Drawing::Size(14, 16);
			this->pictureBox224->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox224->TabIndex = 248;
			this->pictureBox224->TabStop = false;
			// 
			// pictureBox225
			// 
			this->pictureBox225->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox225->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox225.Image")));
			this->pictureBox225->Location = System::Drawing::Point(1508, 836);
			this->pictureBox225->Name = L"pictureBox225";
			this->pictureBox225->Size = System::Drawing::Size(14, 16);
			this->pictureBox225->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox225->TabIndex = 249;
			this->pictureBox225->TabStop = false;
			// 
			// pictureBox226
			// 
			this->pictureBox226->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox226->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox226.Image")));
			this->pictureBox226->Location = System::Drawing::Point(1496, 806);
			this->pictureBox226->Name = L"pictureBox226";
			this->pictureBox226->Size = System::Drawing::Size(14, 16);
			this->pictureBox226->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox226->TabIndex = 250;
			this->pictureBox226->TabStop = false;
			// 
			// pictureBox227
			// 
			this->pictureBox227->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox227->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox227.Image")));
			this->pictureBox227->Location = System::Drawing::Point(1485, 778);
			this->pictureBox227->Name = L"pictureBox227";
			this->pictureBox227->Size = System::Drawing::Size(14, 16);
			this->pictureBox227->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox227->TabIndex = 251;
			this->pictureBox227->TabStop = false;
			// 
			// pictureBox228
			// 
			this->pictureBox228->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox228->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox228.Image")));
			this->pictureBox228->Location = System::Drawing::Point(1477, 749);
			this->pictureBox228->Name = L"pictureBox228";
			this->pictureBox228->Size = System::Drawing::Size(14, 16);
			this->pictureBox228->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox228->TabIndex = 252;
			this->pictureBox228->TabStop = false;
			// 
			// pictureBox229
			// 
			this->pictureBox229->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox229->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox229.Image")));
			this->pictureBox229->Location = System::Drawing::Point(1465, 720);
			this->pictureBox229->Name = L"pictureBox229";
			this->pictureBox229->Size = System::Drawing::Size(14, 16);
			this->pictureBox229->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox229->TabIndex = 253;
			this->pictureBox229->TabStop = false;
			// 
			// pictureBox230
			// 
			this->pictureBox230->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox230->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox230.Image")));
			this->pictureBox230->Location = System::Drawing::Point(1453, 694);
			this->pictureBox230->Name = L"pictureBox230";
			this->pictureBox230->Size = System::Drawing::Size(14, 16);
			this->pictureBox230->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox230->TabIndex = 254;
			this->pictureBox230->TabStop = false;
			// 
			// pictureBox231
			// 
			this->pictureBox231->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox231->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox231.Image")));
			this->pictureBox231->Location = System::Drawing::Point(1444, 670);
			this->pictureBox231->Name = L"pictureBox231";
			this->pictureBox231->Size = System::Drawing::Size(14, 16);
			this->pictureBox231->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox231->TabIndex = 255;
			this->pictureBox231->TabStop = false;
			// 
			// pictureBox232
			// 
			this->pictureBox232->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox232->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox232.Image")));
			this->pictureBox232->Location = System::Drawing::Point(1433, 642);
			this->pictureBox232->Name = L"pictureBox232";
			this->pictureBox232->Size = System::Drawing::Size(14, 16);
			this->pictureBox232->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox232->TabIndex = 256;
			this->pictureBox232->TabStop = false;
			// 
			// pictureBox233
			// 
			this->pictureBox233->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox233->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox233.Image")));
			this->pictureBox233->Location = System::Drawing::Point(1422, 616);
			this->pictureBox233->Name = L"pictureBox233";
			this->pictureBox233->Size = System::Drawing::Size(14, 16);
			this->pictureBox233->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox233->TabIndex = 257;
			this->pictureBox233->TabStop = false;
			// 
			// pictureBox234
			// 
			this->pictureBox234->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox234->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox234.Image")));
			this->pictureBox234->Location = System::Drawing::Point(1412, 588);
			this->pictureBox234->Name = L"pictureBox234";
			this->pictureBox234->Size = System::Drawing::Size(14, 16);
			this->pictureBox234->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox234->TabIndex = 258;
			this->pictureBox234->TabStop = false;
			// 
			// pictureBox235
			// 
			this->pictureBox235->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox235->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox235.Image")));
			this->pictureBox235->Location = System::Drawing::Point(1405, 564);
			this->pictureBox235->Name = L"pictureBox235";
			this->pictureBox235->Size = System::Drawing::Size(14, 16);
			this->pictureBox235->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox235->TabIndex = 259;
			this->pictureBox235->TabStop = false;
			// 
			// pictureBox236
			// 
			this->pictureBox236->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox236->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox236.Image")));
			this->pictureBox236->Location = System::Drawing::Point(1403, 537);
			this->pictureBox236->Name = L"pictureBox236";
			this->pictureBox236->Size = System::Drawing::Size(14, 16);
			this->pictureBox236->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox236->TabIndex = 260;
			this->pictureBox236->TabStop = false;
			// 
			// pictureBox237
			// 
			this->pictureBox237->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox237->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox237.Image")));
			this->pictureBox237->Location = System::Drawing::Point(839, 535);
			this->pictureBox237->Name = L"pictureBox237";
			this->pictureBox237->Size = System::Drawing::Size(14, 16);
			this->pictureBox237->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox237->TabIndex = 261;
			this->pictureBox237->TabStop = false;
			// 
			// pictureBox238
			// 
			this->pictureBox238->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox238->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox238.Image")));
			this->pictureBox238->Location = System::Drawing::Point(859, 523);
			this->pictureBox238->Name = L"pictureBox238";
			this->pictureBox238->Size = System::Drawing::Size(14, 16);
			this->pictureBox238->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox238->TabIndex = 262;
			this->pictureBox238->TabStop = false;
			// 
			// pictureBox239
			// 
			this->pictureBox239->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox239->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox239.Image")));
			this->pictureBox239->Location = System::Drawing::Point(878, 509);
			this->pictureBox239->Name = L"pictureBox239";
			this->pictureBox239->Size = System::Drawing::Size(14, 16);
			this->pictureBox239->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox239->TabIndex = 263;
			this->pictureBox239->TabStop = false;
			// 
			// pictureBox240
			// 
			this->pictureBox240->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox240->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox240.Image")));
			this->pictureBox240->Location = System::Drawing::Point(906, 501);
			this->pictureBox240->Name = L"pictureBox240";
			this->pictureBox240->Size = System::Drawing::Size(14, 16);
			this->pictureBox240->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox240->TabIndex = 264;
			this->pictureBox240->TabStop = false;
			// 
			// pictureBox241
			// 
			this->pictureBox241->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox241->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox241.Image")));
			this->pictureBox241->Location = System::Drawing::Point(934, 495);
			this->pictureBox241->Name = L"pictureBox241";
			this->pictureBox241->Size = System::Drawing::Size(14, 16);
			this->pictureBox241->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox241->TabIndex = 265;
			this->pictureBox241->TabStop = false;
			// 
			// pictureBox242
			// 
			this->pictureBox242->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox242->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox242.Image")));
			this->pictureBox242->Location = System::Drawing::Point(965, 497);
			this->pictureBox242->Name = L"pictureBox242";
			this->pictureBox242->Size = System::Drawing::Size(14, 16);
			this->pictureBox242->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox242->TabIndex = 266;
			this->pictureBox242->TabStop = false;
			// 
			// pictureBox243
			// 
			this->pictureBox243->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox243->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox243.Image")));
			this->pictureBox243->Location = System::Drawing::Point(995, 502);
			this->pictureBox243->Name = L"pictureBox243";
			this->pictureBox243->Size = System::Drawing::Size(14, 16);
			this->pictureBox243->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox243->TabIndex = 267;
			this->pictureBox243->TabStop = false;
			// 
			// pictureBox244
			// 
			this->pictureBox244->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox244->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox244.Image")));
			this->pictureBox244->Location = System::Drawing::Point(1030, 513);
			this->pictureBox244->Name = L"pictureBox244";
			this->pictureBox244->Size = System::Drawing::Size(14, 16);
			this->pictureBox244->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox244->TabIndex = 268;
			this->pictureBox244->TabStop = false;
			// 
			// pictureBox245
			// 
			this->pictureBox245->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox245->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox245.Image")));
			this->pictureBox245->Location = System::Drawing::Point(1062, 530);
			this->pictureBox245->Name = L"pictureBox245";
			this->pictureBox245->Size = System::Drawing::Size(14, 16);
			this->pictureBox245->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox245->TabIndex = 269;
			this->pictureBox245->TabStop = false;
			// 
			// pictureBox246
			// 
			this->pictureBox246->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox246->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox246.Image")));
			this->pictureBox246->Location = System::Drawing::Point(1093, 550);
			this->pictureBox246->Name = L"pictureBox246";
			this->pictureBox246->Size = System::Drawing::Size(14, 16);
			this->pictureBox246->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox246->TabIndex = 270;
			this->pictureBox246->TabStop = false;
			// 
			// pictureBox247
			// 
			this->pictureBox247->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox247->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox247.Image")));
			this->pictureBox247->Location = System::Drawing::Point(1115, 568);
			this->pictureBox247->Name = L"pictureBox247";
			this->pictureBox247->Size = System::Drawing::Size(14, 16);
			this->pictureBox247->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox247->TabIndex = 271;
			this->pictureBox247->TabStop = false;
			// 
			// pictureBox248
			// 
			this->pictureBox248->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox248->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox248.Image")));
			this->pictureBox248->Location = System::Drawing::Point(1140, 582);
			this->pictureBox248->Name = L"pictureBox248";
			this->pictureBox248->Size = System::Drawing::Size(14, 16);
			this->pictureBox248->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox248->TabIndex = 272;
			this->pictureBox248->TabStop = false;
			// 
			// pictureBox249
			// 
			this->pictureBox249->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox249->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox249.Image")));
			this->pictureBox249->Location = System::Drawing::Point(1164, 598);
			this->pictureBox249->Name = L"pictureBox249";
			this->pictureBox249->Size = System::Drawing::Size(14, 16);
			this->pictureBox249->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox249->TabIndex = 273;
			this->pictureBox249->TabStop = false;
			// 
			// pictureBox250
			// 
			this->pictureBox250->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox250->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox250.Image")));
			this->pictureBox250->Location = System::Drawing::Point(1188, 616);
			this->pictureBox250->Name = L"pictureBox250";
			this->pictureBox250->Size = System::Drawing::Size(14, 16);
			this->pictureBox250->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox250->TabIndex = 274;
			this->pictureBox250->TabStop = false;
			// 
			// pictureBox251
			// 
			this->pictureBox251->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox251->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox251.Image")));
			this->pictureBox251->Location = System::Drawing::Point(1215, 632);
			this->pictureBox251->Name = L"pictureBox251";
			this->pictureBox251->Size = System::Drawing::Size(14, 16);
			this->pictureBox251->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox251->TabIndex = 275;
			this->pictureBox251->TabStop = false;
			// 
			// pictureBox252
			// 
			this->pictureBox252->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox252->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox252.Image")));
			this->pictureBox252->Location = System::Drawing::Point(1240, 652);
			this->pictureBox252->Name = L"pictureBox252";
			this->pictureBox252->Size = System::Drawing::Size(14, 16);
			this->pictureBox252->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox252->TabIndex = 276;
			this->pictureBox252->TabStop = false;
			// 
			// pictureBox253
			// 
			this->pictureBox253->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox253->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox253.Image")));
			this->pictureBox253->Location = System::Drawing::Point(1262, 673);
			this->pictureBox253->Name = L"pictureBox253";
			this->pictureBox253->Size = System::Drawing::Size(14, 16);
			this->pictureBox253->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox253->TabIndex = 277;
			this->pictureBox253->TabStop = false;
			// 
			// pictureBox254
			// 
			this->pictureBox254->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox254->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox254.Image")));
			this->pictureBox254->Location = System::Drawing::Point(1283, 698);
			this->pictureBox254->Name = L"pictureBox254";
			this->pictureBox254->Size = System::Drawing::Size(14, 16);
			this->pictureBox254->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox254->TabIndex = 278;
			this->pictureBox254->TabStop = false;
			// 
			// pictureBox255
			// 
			this->pictureBox255->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox255->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox255.Image")));
			this->pictureBox255->Location = System::Drawing::Point(1301, 725);
			this->pictureBox255->Name = L"pictureBox255";
			this->pictureBox255->Size = System::Drawing::Size(14, 16);
			this->pictureBox255->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox255->TabIndex = 279;
			this->pictureBox255->TabStop = false;
			// 
			// pictureBox256
			// 
			this->pictureBox256->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox256->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox256.Image")));
			this->pictureBox256->Location = System::Drawing::Point(1317, 748);
			this->pictureBox256->Name = L"pictureBox256";
			this->pictureBox256->Size = System::Drawing::Size(14, 16);
			this->pictureBox256->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox256->TabIndex = 280;
			this->pictureBox256->TabStop = false;
			// 
			// pictureBox257
			// 
			this->pictureBox257->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox257->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox257.Image")));
			this->pictureBox257->Location = System::Drawing::Point(1333, 779);
			this->pictureBox257->Name = L"pictureBox257";
			this->pictureBox257->Size = System::Drawing::Size(14, 16);
			this->pictureBox257->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox257->TabIndex = 281;
			this->pictureBox257->TabStop = false;
			// 
			// pictureBox258
			// 
			this->pictureBox258->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox258->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox258.Image")));
			this->pictureBox258->Location = System::Drawing::Point(1343, 806);
			this->pictureBox258->Name = L"pictureBox258";
			this->pictureBox258->Size = System::Drawing::Size(14, 16);
			this->pictureBox258->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox258->TabIndex = 282;
			this->pictureBox258->TabStop = false;
			// 
			// pictureBox259
			// 
			this->pictureBox259->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox259->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox259.Image")));
			this->pictureBox259->Location = System::Drawing::Point(1355, 835);
			this->pictureBox259->Name = L"pictureBox259";
			this->pictureBox259->Size = System::Drawing::Size(14, 16);
			this->pictureBox259->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox259->TabIndex = 283;
			this->pictureBox259->TabStop = false;
			// 
			// pictureBox260
			// 
			this->pictureBox260->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox260->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox260.Image")));
			this->pictureBox260->Location = System::Drawing::Point(1366, 867);
			this->pictureBox260->Name = L"pictureBox260";
			this->pictureBox260->Size = System::Drawing::Size(14, 16);
			this->pictureBox260->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox260->TabIndex = 284;
			this->pictureBox260->TabStop = false;
			// 
			// pictureBox261
			// 
			this->pictureBox261->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox261->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox261.Image")));
			this->pictureBox261->Location = System::Drawing::Point(1264, 585);
			this->pictureBox261->Name = L"pictureBox261";
			this->pictureBox261->Size = System::Drawing::Size(14, 16);
			this->pictureBox261->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox261->TabIndex = 285;
			this->pictureBox261->TabStop = false;
			// 
			// pictureBox262
			// 
			this->pictureBox262->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox262->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox262.Image")));
			this->pictureBox262->Location = System::Drawing::Point(1282, 608);
			this->pictureBox262->Name = L"pictureBox262";
			this->pictureBox262->Size = System::Drawing::Size(14, 16);
			this->pictureBox262->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox262->TabIndex = 286;
			this->pictureBox262->TabStop = false;
			// 
			// pictureBox263
			// 
			this->pictureBox263->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox263->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox263.Image")));
			this->pictureBox263->Location = System::Drawing::Point(1295, 638);
			this->pictureBox263->Name = L"pictureBox263";
			this->pictureBox263->Size = System::Drawing::Size(14, 16);
			this->pictureBox263->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox263->TabIndex = 287;
			this->pictureBox263->TabStop = false;
			// 
			// pictureBox264
			// 
			this->pictureBox264->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox264->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox264.Image")));
			this->pictureBox264->Location = System::Drawing::Point(1308, 669);
			this->pictureBox264->Name = L"pictureBox264";
			this->pictureBox264->Size = System::Drawing::Size(14, 16);
			this->pictureBox264->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox264->TabIndex = 288;
			this->pictureBox264->TabStop = false;
			// 
			// pictureBox265
			// 
			this->pictureBox265->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox265->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox265.Image")));
			this->pictureBox265->Location = System::Drawing::Point(1320, 702);
			this->pictureBox265->Name = L"pictureBox265";
			this->pictureBox265->Size = System::Drawing::Size(14, 16);
			this->pictureBox265->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox265->TabIndex = 289;
			this->pictureBox265->TabStop = false;
			// 
			// pictureBox266
			// 
			this->pictureBox266->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox266->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox266.Image")));
			this->pictureBox266->Location = System::Drawing::Point(1332, 729);
			this->pictureBox266->Name = L"pictureBox266";
			this->pictureBox266->Size = System::Drawing::Size(14, 16);
			this->pictureBox266->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox266->TabIndex = 290;
			this->pictureBox266->TabStop = false;
			// 
			// pictureBox267
			// 
			this->pictureBox267->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox267->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox267.Image")));
			this->pictureBox267->Location = System::Drawing::Point(1345, 764);
			this->pictureBox267->Name = L"pictureBox267";
			this->pictureBox267->Size = System::Drawing::Size(14, 16);
			this->pictureBox267->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox267->TabIndex = 291;
			this->pictureBox267->TabStop = false;
			// 
			// pictureBox268
			// 
			this->pictureBox268->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox268->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox268.Image")));
			this->pictureBox268->Location = System::Drawing::Point(1355, 796);
			this->pictureBox268->Name = L"pictureBox268";
			this->pictureBox268->Size = System::Drawing::Size(14, 16);
			this->pictureBox268->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox268->TabIndex = 292;
			this->pictureBox268->TabStop = false;
			// 
			// pictureBox269
			// 
			this->pictureBox269->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox269->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox269.Image")));
			this->pictureBox269->Location = System::Drawing::Point(1366, 828);
			this->pictureBox269->Name = L"pictureBox269";
			this->pictureBox269->Size = System::Drawing::Size(14, 16);
			this->pictureBox269->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox269->TabIndex = 293;
			this->pictureBox269->TabStop = false;
			// 
			// pictureBox270
			// 
			this->pictureBox270->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox270->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox270.Image")));
			this->pictureBox270->Location = System::Drawing::Point(1381, 857);
			this->pictureBox270->Name = L"pictureBox270";
			this->pictureBox270->Size = System::Drawing::Size(14, 16);
			this->pictureBox270->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox270->TabIndex = 294;
			this->pictureBox270->TabStop = false;
			// 
			// pictureBox271
			// 
			this->pictureBox271->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox271->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox271.Image")));
			this->pictureBox271->Location = System::Drawing::Point(1376, 891);
			this->pictureBox271->Name = L"pictureBox271";
			this->pictureBox271->Size = System::Drawing::Size(14, 16);
			this->pictureBox271->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox271->TabIndex = 295;
			this->pictureBox271->TabStop = false;
			// 
			// pictureBox272
			// 
			this->pictureBox272->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox272->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox272.Image")));
			this->pictureBox272->Location = System::Drawing::Point(1387, 919);
			this->pictureBox272->Name = L"pictureBox272";
			this->pictureBox272->Size = System::Drawing::Size(14, 16);
			this->pictureBox272->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox272->TabIndex = 296;
			this->pictureBox272->TabStop = false;
			// 
			// pictureBox273
			// 
			this->pictureBox273->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox273->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox273.Image")));
			this->pictureBox273->Location = System::Drawing::Point(1395, 945);
			this->pictureBox273->Name = L"pictureBox273";
			this->pictureBox273->Size = System::Drawing::Size(14, 16);
			this->pictureBox273->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox273->TabIndex = 297;
			this->pictureBox273->TabStop = false;
			// 
			// pictureBox274
			// 
			this->pictureBox274->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox274->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox274.Image")));
			this->pictureBox274->Location = System::Drawing::Point(1406, 971);
			this->pictureBox274->Name = L"pictureBox274";
			this->pictureBox274->Size = System::Drawing::Size(14, 16);
			this->pictureBox274->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox274->TabIndex = 298;
			this->pictureBox274->TabStop = false;
			// 
			// pictureBox275
			// 
			this->pictureBox275->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox275->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox275.Image")));
			this->pictureBox275->Location = System::Drawing::Point(1416, 998);
			this->pictureBox275->Name = L"pictureBox275";
			this->pictureBox275->Size = System::Drawing::Size(14, 16);
			this->pictureBox275->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox275->TabIndex = 299;
			this->pictureBox275->TabStop = false;
			// 
			// pictureBox276
			// 
			this->pictureBox276->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox276->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox276.Image")));
			this->pictureBox276->Location = System::Drawing::Point(1391, 884);
			this->pictureBox276->Name = L"pictureBox276";
			this->pictureBox276->Size = System::Drawing::Size(14, 16);
			this->pictureBox276->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox276->TabIndex = 300;
			this->pictureBox276->TabStop = false;
			// 
			// pictureBox277
			// 
			this->pictureBox277->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox277->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox277.Image")));
			this->pictureBox277->Location = System::Drawing::Point(1402, 918);
			this->pictureBox277->Name = L"pictureBox277";
			this->pictureBox277->Size = System::Drawing::Size(14, 16);
			this->pictureBox277->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox277->TabIndex = 301;
			this->pictureBox277->TabStop = false;
			// 
			// pictureBox278
			// 
			this->pictureBox278->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox278->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox278.Image")));
			this->pictureBox278->Location = System::Drawing::Point(1409, 941);
			this->pictureBox278->Name = L"pictureBox278";
			this->pictureBox278->Size = System::Drawing::Size(14, 16);
			this->pictureBox278->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox278->TabIndex = 302;
			this->pictureBox278->TabStop = false;
			// 
			// pictureBox279
			// 
			this->pictureBox279->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox279->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox279.Image")));
			this->pictureBox279->Location = System::Drawing::Point(1422, 967);
			this->pictureBox279->Name = L"pictureBox279";
			this->pictureBox279->Size = System::Drawing::Size(14, 16);
			this->pictureBox279->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox279->TabIndex = 303;
			this->pictureBox279->TabStop = false;
			// 
			// pictureBox280
			// 
			this->pictureBox280->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox280->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox280.Image")));
			this->pictureBox280->Location = System::Drawing::Point(1430, 996);
			this->pictureBox280->Name = L"pictureBox280";
			this->pictureBox280->Size = System::Drawing::Size(14, 16);
			this->pictureBox280->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox280->TabIndex = 304;
			this->pictureBox280->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1898, 1029);
			this->Controls->Add(this->pictureBox280);
			this->Controls->Add(this->pictureBox279);
			this->Controls->Add(this->pictureBox278);
			this->Controls->Add(this->pictureBox277);
			this->Controls->Add(this->pictureBox276);
			this->Controls->Add(this->pictureBox275);
			this->Controls->Add(this->pictureBox274);
			this->Controls->Add(this->pictureBox273);
			this->Controls->Add(this->pictureBox272);
			this->Controls->Add(this->pictureBox271);
			this->Controls->Add(this->pictureBox270);
			this->Controls->Add(this->pictureBox269);
			this->Controls->Add(this->pictureBox268);
			this->Controls->Add(this->pictureBox267);
			this->Controls->Add(this->pictureBox266);
			this->Controls->Add(this->pictureBox265);
			this->Controls->Add(this->pictureBox264);
			this->Controls->Add(this->pictureBox263);
			this->Controls->Add(this->pictureBox262);
			this->Controls->Add(this->pictureBox261);
			this->Controls->Add(this->pictureBox260);
			this->Controls->Add(this->pictureBox259);
			this->Controls->Add(this->pictureBox258);
			this->Controls->Add(this->pictureBox257);
			this->Controls->Add(this->pictureBox256);
			this->Controls->Add(this->pictureBox255);
			this->Controls->Add(this->pictureBox254);
			this->Controls->Add(this->pictureBox253);
			this->Controls->Add(this->pictureBox252);
			this->Controls->Add(this->pictureBox251);
			this->Controls->Add(this->pictureBox250);
			this->Controls->Add(this->pictureBox249);
			this->Controls->Add(this->pictureBox248);
			this->Controls->Add(this->pictureBox247);
			this->Controls->Add(this->pictureBox246);
			this->Controls->Add(this->pictureBox245);
			this->Controls->Add(this->pictureBox244);
			this->Controls->Add(this->pictureBox243);
			this->Controls->Add(this->pictureBox242);
			this->Controls->Add(this->pictureBox241);
			this->Controls->Add(this->pictureBox240);
			this->Controls->Add(this->pictureBox239);
			this->Controls->Add(this->pictureBox238);
			this->Controls->Add(this->pictureBox237);
			this->Controls->Add(this->pictureBox236);
			this->Controls->Add(this->pictureBox235);
			this->Controls->Add(this->pictureBox234);
			this->Controls->Add(this->pictureBox233);
			this->Controls->Add(this->pictureBox232);
			this->Controls->Add(this->pictureBox231);
			this->Controls->Add(this->pictureBox230);
			this->Controls->Add(this->pictureBox229);
			this->Controls->Add(this->pictureBox228);
			this->Controls->Add(this->pictureBox227);
			this->Controls->Add(this->pictureBox226);
			this->Controls->Add(this->pictureBox225);
			this->Controls->Add(this->pictureBox224);
			this->Controls->Add(this->pictureBox223);
			this->Controls->Add(this->pictureBox222);
			this->Controls->Add(this->pictureBox221);
			this->Controls->Add(this->pictureBox220);
			this->Controls->Add(this->pictureBox219);
			this->Controls->Add(this->pictureBox218);
			this->Controls->Add(this->pictureBox217);
			this->Controls->Add(this->pictureBox216);
			this->Controls->Add(this->pictureBox215);
			this->Controls->Add(this->pictureBox214);
			this->Controls->Add(this->pictureBox213);
			this->Controls->Add(this->pictureBox212);
			this->Controls->Add(this->pictureBox211);
			this->Controls->Add(this->pictureBox210);
			this->Controls->Add(this->pictureBox209);
			this->Controls->Add(this->pictureBox208);
			this->Controls->Add(this->pictureBox207);
			this->Controls->Add(this->pictureBox206);
			this->Controls->Add(this->pictureBox205);
			this->Controls->Add(this->pictureBox204);
			this->Controls->Add(this->pictureBox203);
			this->Controls->Add(this->pictureBox202);
			this->Controls->Add(this->pictureBox201);
			this->Controls->Add(this->pictureBox200);
			this->Controls->Add(this->pictureBox199);
			this->Controls->Add(this->pictureBox198);
			this->Controls->Add(this->pictureBox197);
			this->Controls->Add(this->pictureBox196);
			this->Controls->Add(this->pictureBox195);
			this->Controls->Add(this->pictureBox194);
			this->Controls->Add(this->pictureBox193);
			this->Controls->Add(this->pictureBox192);
			this->Controls->Add(this->pictureBox191);
			this->Controls->Add(this->pictureBox190);
			this->Controls->Add(this->pictureBox189);
			this->Controls->Add(this->pictureBox188);
			this->Controls->Add(this->pictureBox187);
			this->Controls->Add(this->pictureBox186);
			this->Controls->Add(this->pictureBox185);
			this->Controls->Add(this->pictureBox184);
			this->Controls->Add(this->pictureBox183);
			this->Controls->Add(this->pictureBox182);
			this->Controls->Add(this->pictureBox181);
			this->Controls->Add(this->pictureBox180);
			this->Controls->Add(this->pictureBox179);
			this->Controls->Add(this->pictureBox178);
			this->Controls->Add(this->pictureBox177);
			this->Controls->Add(this->pictureBox176);
			this->Controls->Add(this->pictureBox175);
			this->Controls->Add(this->pictureBox174);
			this->Controls->Add(this->pictureBox173);
			this->Controls->Add(this->pictureBox172);
			this->Controls->Add(this->pictureBox171);
			this->Controls->Add(this->pictureBox170);
			this->Controls->Add(this->pictureBox169);
			this->Controls->Add(this->pictureBox168);
			this->Controls->Add(this->pictureBox167);
			this->Controls->Add(this->pictureBox166);
			this->Controls->Add(this->pictureBox165);
			this->Controls->Add(this->pictureBox164);
			this->Controls->Add(this->pictureBox163);
			this->Controls->Add(this->pictureBox162);
			this->Controls->Add(this->pictureBox161);
			this->Controls->Add(this->pictureBox160);
			this->Controls->Add(this->pictureBox159);
			this->Controls->Add(this->pictureBox158);
			this->Controls->Add(this->pictureBox157);
			this->Controls->Add(this->pictureBox156);
			this->Controls->Add(this->pictureBox155);
			this->Controls->Add(this->pictureBox154);
			this->Controls->Add(this->pictureBox153);
			this->Controls->Add(this->pictureBox152);
			this->Controls->Add(this->pictureBox151);
			this->Controls->Add(this->pictureBox150);
			this->Controls->Add(this->pictureBox149);
			this->Controls->Add(this->pictureBox148);
			this->Controls->Add(this->pictureBox147);
			this->Controls->Add(this->pictureBox146);
			this->Controls->Add(this->pictureBox145);
			this->Controls->Add(this->pictureBox144);
			this->Controls->Add(this->pictureBox143);
			this->Controls->Add(this->pictureBox142);
			this->Controls->Add(this->pictureBox141);
			this->Controls->Add(this->pictureBox140);
			this->Controls->Add(this->pictureBox139);
			this->Controls->Add(this->pictureBox138);
			this->Controls->Add(this->pictureBox137);
			this->Controls->Add(this->pictureBox136);
			this->Controls->Add(this->pictureBox135);
			this->Controls->Add(this->pictureBox134);
			this->Controls->Add(this->pictureBox133);
			this->Controls->Add(this->pictureBox132);
			this->Controls->Add(this->pictureBox131);
			this->Controls->Add(this->pictureBox130);
			this->Controls->Add(this->pictureBox129);
			this->Controls->Add(this->pictureBox128);
			this->Controls->Add(this->pictureBox127);
			this->Controls->Add(this->pictureBox126);
			this->Controls->Add(this->pictureBox125);
			this->Controls->Add(this->pictureBox124);
			this->Controls->Add(this->pictureBox123);
			this->Controls->Add(this->pictureBox122);
			this->Controls->Add(this->pictureBox121);
			this->Controls->Add(this->pictureBox120);
			this->Controls->Add(this->pictureBox119);
			this->Controls->Add(this->pictureBox118);
			this->Controls->Add(this->pictureBox117);
			this->Controls->Add(this->pictureBox116);
			this->Controls->Add(this->pictureBox115);
			this->Controls->Add(this->pictureBox114);
			this->Controls->Add(this->pictureBox113);
			this->Controls->Add(this->pictureBox112);
			this->Controls->Add(this->pictureBox111);
			this->Controls->Add(this->pictureBox110);
			this->Controls->Add(this->pictureBox109);
			this->Controls->Add(this->pictureBox108);
			this->Controls->Add(this->pictureBox107);
			this->Controls->Add(this->pictureBox106);
			this->Controls->Add(this->pictureBox105);
			this->Controls->Add(this->pictureBox104);
			this->Controls->Add(this->pictureBox103);
			this->Controls->Add(this->pictureBox102);
			this->Controls->Add(this->pictureBox101);
			this->Controls->Add(this->pictureBox100);
			this->Controls->Add(this->pictureBox99);
			this->Controls->Add(this->pictureBox98);
			this->Controls->Add(this->pictureBox97);
			this->Controls->Add(this->pictureBox96);
			this->Controls->Add(this->pictureBox95);
			this->Controls->Add(this->pictureBox94);
			this->Controls->Add(this->pictureBox93);
			this->Controls->Add(this->pictureBox92);
			this->Controls->Add(this->pictureBox91);
			this->Controls->Add(this->pictureBox90);
			this->Controls->Add(this->pictureBox89);
			this->Controls->Add(this->pictureBox88);
			this->Controls->Add(this->pictureBox87);
			this->Controls->Add(this->pictureBox86);
			this->Controls->Add(this->pictureBox85);
			this->Controls->Add(this->pictureBox84);
			this->Controls->Add(this->pictureBox83);
			this->Controls->Add(this->pictureBox82);
			this->Controls->Add(this->pictureBox81);
			this->Controls->Add(this->pictureBox80);
			this->Controls->Add(this->pictureBox79);
			this->Controls->Add(this->pictureBox78);
			this->Controls->Add(this->pictureBox77);
			this->Controls->Add(this->pictureBox76);
			this->Controls->Add(this->pictureBox75);
			this->Controls->Add(this->pictureBox74);
			this->Controls->Add(this->pictureBox73);
			this->Controls->Add(this->pictureBox72);
			this->Controls->Add(this->pictureBox71);
			this->Controls->Add(this->pictureBox70);
			this->Controls->Add(this->pictureBox69);
			this->Controls->Add(this->pictureBox68);
			this->Controls->Add(this->pictureBox67);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox57);
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
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox1);
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
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->zegar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Start);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxplusnatezenie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxminusnatezenie))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxpluslosowosc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxminuslosowosc))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox126))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox127))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox133))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox141))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox142))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox146))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox147))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox148))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox156))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox157))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox158))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox160))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox161))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox162))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox163))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox164))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox170))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox171))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox172))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox173))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox174))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox175))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox176))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox177))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox178))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox179))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox180))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox181))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox182))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox183))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox184))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox185))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox186))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox187))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox188))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox189))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox190))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox191))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox192))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox193))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox194))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox195))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox196))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox197))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox198))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox199))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox200))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox201))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox202))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox203))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox204))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox205))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox206))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox207))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox208))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox209))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox210))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox211))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox212))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox213))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox214))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox215))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox216))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox217))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox218))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox219))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox220))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox221))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox222))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox223))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox224))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox225))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox226))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox227))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox228))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox229))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox230))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox231))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox232))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox233))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox234))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox235))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox236))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox237))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox238))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox239))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox240))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox241))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox242))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox243))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox244))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox245))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox246))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox247))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox248))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox249))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox250))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox251))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox252))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox253))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox254))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox255))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox256))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox257))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox258))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox259))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox260))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox261))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox262))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox263))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox264))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox265))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox266))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox267))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox268))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox269))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox270))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox271))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox272))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox273))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox274))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox275))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox276))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox277))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox278))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox279))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox280))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

		int czas = 0;
		int natezenie = 9;	
		int losowosc = 0;
		Mechanika M;
		array< Auto^ >^ Droga1;
		array< Auto^ >^ Droga2;
		array< Auto^ >^ Droga3;
		array< Auto^ >^ Droga4;
		array< Auto^ >^ Droga5;
		array< Auto^ >^ Droga6;
		array< Auto^ >^ Droga7;
		array< Auto^ >^ Droga8;
		array< Auto^ >^ Droga9;
		array< Auto^ >^ Droga10;
		array< Auto^ >^ Droga11;
		array< Auto^ >^ Droga12;
		array< Auto^ >^ Droga13;
		array< Auto^ >^ Droga14;
		array< Auto^ >^ Droga15;
		array< Auto^ >^ Droga16;
		array< Auto^ >^ Droga17;
		array< Auto^ >^ Droga18;
		array< Auto^ >^ Droga19;
		Random^ rnd;


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
	//M.Ustaw_Przeszkode();
	M.Nowe_Auto();
	//M.Zmiana_Pasa();
	M.Przyspieszani_Hamowanie();
	M.Zdarzenia_Losowe();
	//M.Przemieszczenie();

	Droga1 = M.DajDroge1();
	Droga2 = M.DajDroge2();
	Droga3 = M.DajDroge3();
	Droga4 = M.DajDroge4();
	Droga5 = M.DajDroge5();
	Droga6 = M.DajDroge6();
	Droga7 = M.DajDroge7();
	Droga8 = M.DajDroge8();
	Droga9 = M.DajDroge9();
	Droga10 = M.DajDroge10();
	Droga11 = M.DajDroge11();
	Droga12 = M.DajDroge12();
	Droga13 = M.DajDroge13();
	Droga14 = M.DajDroge14();
	Droga15 = M.DajDroge15();
	Droga16 = M.DajDroge16();
	Droga17 = M.DajDroge17();
	Droga18 = M.DajDroge18();
	Droga19 = M.DajDroge19();


#pragma region wyœwietlanie_drogi_1
	if (Droga1[0]->zycie == true) {
		pictureBox1->Visible = true;
		switch (Droga1[0]->rodzaj)
		{
		case 1: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox1->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox1->Visible = false;
	if (Droga1[1]->zycie == true) {
		pictureBox2->Visible = true;
		switch (Droga1[1]->rodzaj)
		{
		case 1: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox2->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox2->Visible = false;
	if (Droga1[2]->zycie == true) {
		pictureBox3->Visible = true;
		switch (Droga1[2]->rodzaj)
		{
		case 1: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox3->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox3->Visible = false;
	if (Droga1[3]->zycie == true) {
		pictureBox4->Visible = true;
		switch (Droga1[3]->rodzaj)
		{
		case 1: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox4->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox4->Visible = false;
	if (Droga1[4]->zycie == true) {
		pictureBox5->Visible = true;
		switch (Droga1[4]->rodzaj)
		{
		case 1: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox5->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox5->Visible = false;
	if (Droga1[5]->zycie == true) {
		pictureBox6->Visible = true;
		switch (Droga1[5]->rodzaj)
		{
		case 1: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox6->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox6->Visible = false;
	if (Droga1[6]->zycie == true) {
		pictureBox7->Visible = true;
		switch (Droga1[6]->rodzaj)
		{
		case 1: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox7->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox7->Visible = false;
	if (Droga1[7]->zycie == true) {
		pictureBox8->Visible = true;
		switch (Droga1[7]->rodzaj)
		{
		case 1: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox8->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox8->Visible = false;
	if (Droga1[8]->zycie == true) {
		pictureBox9->Visible = true;
		switch (Droga1[8]->rodzaj)
		{
		case 1: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox9->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox9->Visible = false;
	if (Droga1[9]->zycie == true) {
		pictureBox10->Visible = true;
		switch (Droga1[9]->rodzaj)
		{
		case 1: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox10->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox10->Visible = false;
	if (Droga1[10]->zycie == true) {
		pictureBox11->Visible = true;
		switch (Droga1[10]->rodzaj)
		{
		case 1: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox11->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox11->Visible = false;
	if (Droga1[11]->zycie == true) {
		pictureBox12->Visible = true;
		switch (Droga1[11]->rodzaj)
		{
		case 1: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox12->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox12->Visible = false;
	if (Droga1[12]->zycie == true) {
		pictureBox13->Visible = true;
		switch (Droga1[12]->rodzaj)
		{
		case 1: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox13->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox13->Visible = false;
#pragma endregion

#pragma region wyœwietlanie_drogi_2
	if (Droga2[0]->zycie == true) {
		pictureBox14->Visible = true;
		switch (Droga2[0]->rodzaj)
		{
		case 1: pictureBox14->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox14->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox14->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox14->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox14->Visible = false;

	if (Droga2[1]->zycie == true) {
		pictureBox15->Visible = true;
		switch (Droga2[1]->rodzaj)
		{
		case 1: pictureBox15->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox15->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox15->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox15->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox15->Visible = false;

	if (Droga2[2]->zycie == true) {
		pictureBox16->Visible = true;
		switch (Droga2[2]->rodzaj)
		{
		case 1: pictureBox16->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox16->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox16->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox16->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox16->Visible = false;

	if (Droga2[3]->zycie == true) {
		pictureBox17->Visible = true;
		switch (Droga2[3]->rodzaj)
		{
		case 1: pictureBox17->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox17->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox17->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox17->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox17->Visible = false;

	if (Droga2[4]->zycie == true) {
		pictureBox18->Visible = true;
		switch (Droga2[4]->rodzaj)
		{
		case 1: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox18->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox18->Visible = false;

	if (Droga2[5]->zycie == true) {
		pictureBox19->Visible = true;
		switch (Droga2[5]->rodzaj)
		{
		case 1: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox19->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox19->Visible = false;

	if (Droga2[6]->zycie == true) {
		pictureBox20->Visible = true;
		switch (Droga2[6]->rodzaj)
		{
		case 1: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox20->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox20->Visible = false;

	if (Droga2[7]->zycie == true) {
		pictureBox21->Visible = true;
		switch (Droga2[7]->rodzaj)
		{
		case 1: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox21->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox21->Visible = false;

	if (Droga2[8]->zycie == true) {
		pictureBox22->Visible = true;
		switch (Droga2[8]->rodzaj)
		{
		case 1: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox22->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox22->Visible = false;

	if (Droga2[9]->zycie == true) {
		pictureBox23->Visible = true;
		switch (Droga2[9]->rodzaj)
		{
		case 1: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox23->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox23->Visible = false;

	if (Droga2[10]->zycie == true) {
		pictureBox24->Visible = true;
		switch (Droga2[10]->rodzaj)
		{
		case 1: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox24->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox24->Visible = false;

	if (Droga2[11]->zycie == true) {
		pictureBox25->Visible = true;
		switch (Droga2[11]->rodzaj)
		{
		case 1: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox25->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox25->Visible = false;

	if (Droga2[12]->zycie == true) {
		pictureBox26->Visible = true;
		switch (Droga2[12]->rodzaj)
		{
		case 1: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox26->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox26->Visible = false;


#pragma endregion

#pragma region wœwietlanie_drogi_3


	if (Droga3[0]->zycie == true) {
		pictureBox27->Visible = true;
		switch (Droga3[0]->rodzaj)
		{
		case 1: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox27->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox27->Visible = false;


	if (Droga3[1]->zycie == true) {
		pictureBox28->Visible = true;
		switch (Droga3[1]->rodzaj)
		{
		case 1: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox28->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox28->Visible = false;


	if (Droga3[2]->zycie == true) {
		pictureBox29->Visible = true;
		switch (Droga3[2]->rodzaj)
		{
		case 1: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox29->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox29->Visible = false;


	if (Droga3[3]->zycie == true) {
		pictureBox30->Visible = true;
		switch (Droga3[3]->rodzaj)
		{
		case 1: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox30->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox30->Visible = false;


	if (Droga3[4]->zycie == true) {
		pictureBox31->Visible = true;
		switch (Droga3[4]->rodzaj)
		{
		case 1: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox31->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox31->Visible = false;


	if (Droga3[5]->zycie == true) {
		pictureBox32->Visible = true;
		switch (Droga3[5]->rodzaj)
		{
		case 1: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox32->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox32->Visible = false;


	if (Droga3[6]->zycie == true) {
		pictureBox33->Visible = true;
		switch (Droga3[6]->rodzaj)
		{
		case 1: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NE.png"); break;
		case 2: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NE.png"); break;
		case 3: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NE.png"); break;
		case 4: pictureBox33->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NE.png"); break;
		default:
			break;
		}
	}
	else pictureBox33->Visible = false;


	if (Droga3[7]->zycie == true) {
		pictureBox34->Visible = true;
		switch (Droga3[7]->rodzaj)
		{
		case 1: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_NEE.png"); break;
		case 2: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_NEE.png"); break;
		case 3: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_NEE.png"); break;
		case 4: pictureBox34->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_NEE.png"); break;
		default:
			break;
		}
	}
	else pictureBox34->Visible = false;


	if (Droga3[8]->zycie == true) {
		pictureBox35->Visible = true;
		switch (Droga3[8]->rodzaj)
		{
		case 1: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_E.png"); break;
		case 2: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_E.png"); break;
		case 3: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_E.png"); break;
		case 4: pictureBox35->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_E.png"); break;
		default:
			break;
		}
	}
	else pictureBox35->Visible = false;


	if (Droga3[9]->zycie == true) {
		pictureBox36->Visible = true;
		switch (Droga3[9]->rodzaj)
		{
		case 1: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_E.png"); break;
		case 2: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_E.png"); break;
		case 3: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_E.png"); break;
		case 4: pictureBox36->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_E.png"); break;
		default:
			break;
		}
	}
	else pictureBox36->Visible = false;


	if (Droga3[10]->zycie == true) {
		pictureBox37->Visible = true;
		switch (Droga3[10]->rodzaj)
		{
		case 1: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_SEE.png"); break;
		case 2: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_SEE.png"); break;
		case 3: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_SEE.png"); break;
		case 4: pictureBox37->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_SEE.png"); break;
		default:
			break;
		}
	}
	else pictureBox37->Visible = false;

	if (Droga3[11]->zycie == true) {
		pictureBox38->Visible = true;
		switch (Droga3[11]->rodzaj)
		{
		case 1: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLACK_SE.png"); break;
		case 2: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigBLUE_SE.png"); break;
		case 3: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigRED_SE.png"); break;
		case 4: pictureBox38->Image = Image::FromFile(L"C:\\Users\\Krystian\\Documents\\GitHub\\Autosim\\Project11111\\Obrazki\\Autka\\BigGRAY_SE.png"); break;
		default:
			break;
		}
	}
	else pictureBox38->Visible = false;


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
	if (losowosc <= 0) losowosc = 0;
	String^ str1 = Convert::ToString(losowosc);
	labellosowosc->Text = str1;
}
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
	losowosc++;
	if (losowosc >= 9) losowosc = 9;
	String^ str1 = Convert::ToString(losowosc);
	labellosowosc->Text = str1;
}


};//----------------------------------------------
}
