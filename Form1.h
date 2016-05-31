#pragma once
#include <math.h>
#include <string>

#define PI 3.14159265

namespace Nakeeb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  ResultShow;

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  basicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;

	private: System::Windows::Forms::Button^  button27;

	private: System::Windows::Forms::Button^  button29;

	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button26;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->ResultShow = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->basicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"8";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(117, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"9";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"0";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 113);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 41);
			this->button4->TabIndex = 3;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(117, 254);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 41);
			this->button5->TabIndex = 4;
			this->button5->Text = L".";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(223, 160);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 41);
			this->button6->TabIndex = 9;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 160);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(48, 41);
			this->button7->TabIndex = 8;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(171, 161);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 41);
			this->button8->TabIndex = 7;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(117, 160);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 41);
			this->button9->TabIndex = 6;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(64, 160);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 41);
			this->button10->TabIndex = 5;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(223, 207);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(48, 41);
			this->button11->TabIndex = 14;
			this->button11->Text = L"/";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(12, 207);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(48, 41);
			this->button12->TabIndex = 13;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(171, 208);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(48, 41);
			this->button13->TabIndex = 12;
			this->button13->Text = L"x";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(117, 207);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 41);
			this->button14->TabIndex = 11;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(64, 207);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 41);
			this->button15->TabIndex = 10;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// ResultShow
			// 
			this->ResultShow->BackColor = System::Drawing::Color::White;
			this->ResultShow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ResultShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ResultShow->Location = System::Drawing::Point(12, 56);
			this->ResultShow->Name = L"ResultShow";
			this->ResultShow->Size = System::Drawing::Size(259, 43);
			this->ResultShow->TabIndex = 15;
			this->ResultShow->Text = L"0";
			this->ResultShow->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(170, 254);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(101, 41);
			this->button16->TabIndex = 16;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(170, 113);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(101, 41);
			this->button17->TabIndex = 17;
			this->button17->Text = L"C";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(474, 24);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->basicToolStripMenuItem, 
				this->scientificToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// basicToolStripMenuItem
			// 
			this->basicToolStripMenuItem->Name = L"basicToolStripMenuItem";
			this->basicToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->basicToolStripMenuItem->Text = L"Basic";
			this->basicToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::basicToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::scientificToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(289, 207);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(53, 41);
			this->button18->TabIndex = 24;
			this->button18->Text = L"tan";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(348, 207);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(54, 41);
			this->button19->TabIndex = 23;
			this->button19->Text = L"tanh";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(289, 160);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(53, 41);
			this->button20->TabIndex = 22;
			this->button20->Text = L"cos";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(348, 160);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(54, 41);
			this->button21->TabIndex = 21;
			this->button21->Text = L"cosh";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(289, 113);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(53, 41);
			this->button22->TabIndex = 20;
			this->button22->Text = L"sin";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(348, 113);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(54, 41);
			this->button23->TabIndex = 19;
			this->button23->Text = L"sinh";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(289, 254);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(53, 41);
			this->button24->TabIndex = 25;
			this->button24->Text = L"^";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(408, 207);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(53, 41);
			this->button25->TabIndex = 31;
			this->button25->Text = L"tan^-1";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(408, 160);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(53, 41);
			this->button27->TabIndex = 29;
			this->button27->Text = L"cos^-1";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(408, 113);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(53, 41);
			this->button29->TabIndex = 27;
			this->button29->Text = L"sin^-1";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(408, 254);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(53, 41);
			this->button31->TabIndex = 32;
			this->button31->Text = L"Log";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(349, 254);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(53, 41);
			this->button26->TabIndex = 33;
			this->button26->Text = L"Ln";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 309);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->ResultShow);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Nakeeb Calculator";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double in1;
		double in2;
		double out;
		char oper;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (ResultShow->Text =="0"){
				ResultShow->Text = "7" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "7";
			 }
			 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "6" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "6";
			 }
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0" || ResultShow->Text =="."){
				ResultShow->Text = "2" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "2";
			 }

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "0" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "0";
			 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "1" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "1";
			 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "3" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "3";
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "4" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "4";
			 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "5" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "5";
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "8" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "8";
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "9" ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "9";
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ResultShow->Text =="0"){
				ResultShow->Text = "." ;
			 }else{
				ResultShow -> Text= Convert::ToDouble(ResultShow -> Text) + "." ;
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 ResultShow -> Text = "0";
			 oper = '+';
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 ResultShow -> Text = "0";
			 oper = '-';
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 ResultShow -> Text = "0";
			 oper = 'x';
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 ResultShow -> Text = "0";
			 oper = '/';
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 ResultShow -> Text = "";
			 ResultShow -> Text = "0";
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 in2 = Convert::ToDouble (ResultShow -> Text);				  

			 switch (oper){
			 case '+': out = in1 + in2 ;
				 ResultShow -> Text = System::Convert::ToString(out);
				 break;
			 case '-': out = in1 - in2 ;
				 ResultShow -> Text = System::Convert::ToString(out);
				 break;
			 case 'x': out = in1 * in2 ;
				 ResultShow -> Text = System::Convert::ToString(out);
				 break;
			 case '/': out = in1 / in2 ;
				 ResultShow -> Text = System::Convert::ToString(out);
				 break;
			 case '^': out = pow(in1 ,in2) ;
				 ResultShow -> Text = System::Convert::ToString(out);
				 break;


		/*	 default:
				 if (MessageBox::Show ("Enter a No." ,"Nakeeb Calculator", MessageBoxButtons::OKCancel, 
					 MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
				 break;*/
			 }
		 }
private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 if (MessageBox::Show("Exit ?" , "Are You Sure ?" , 
				 MessageBoxButtons::YesNo ,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				Application::Exit();
			 }
		 }

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void basicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form1::Width = 300;
		 }
private: System::Void scientificToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Width = 490;
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = sin(in1 * PI / 180) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = cos(in1 * PI / 180) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 ResultShow -> Text = "0";
			 oper = '^';
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = tan(in1 * PI / 180) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = sinh(in1) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = cosh(in1) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = tanh(in1) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = log10(in1) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			in1 = Convert::ToDouble (ResultShow ->Text);
			 out = asin(in1) * 180 / PI ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = acos(in1) * 180 / PI ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = atan(in1) * 180 / PI ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 in1 = Convert::ToDouble (ResultShow ->Text);
			 out = log10(in1) ;
				 ResultShow -> Text = System::Convert::ToString(out);
		 }
};
}

