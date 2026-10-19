#pragma once

namespace Dmd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
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
	private: System::Windows::Forms::RichTextBox^ view;

	private: System::Windows::Forms::Button^ button_connect;
	private: System::Windows::Forms::Button^ button_send;
	protected:



	private: System::Windows::Forms::Button^ button_reset;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ settingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ largeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ meduimToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ smallToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blackToolStripMenuItem;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Button^ button_received;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ CBBAUD;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ CBDATABITS;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ CBHandshake;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ CBparity;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::ComboBox^ CBstopBits;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ CLEAR;
	private: System::Windows::Forms::TextBox^ senddata;
	private: System::Windows::Forms::ProgressBar^ progressBar1;


	private: System::ComponentModel::IContainer^ components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->view = (gcnew System::Windows::Forms::RichTextBox());
			this->button_connect = (gcnew System::Windows::Forms::Button());
			this->button_send = (gcnew System::Windows::Forms::Button());
			this->button_reset = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->largeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meduimToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->smallToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button_received = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CBBAUD = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CBDATABITS = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->CBstopBits = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->CBHandshake = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CBparity = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->CLEAR = (gcnew System::Windows::Forms::Button());
			this->senddata = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// view
			// 
			this->view->Location = System::Drawing::Point(24, 47);
			this->view->Name = L"view";
			this->view->Size = System::Drawing::Size(237, 257);
			this->view->TabIndex = 0;
			this->view->Text = L"";
			// 
			// button_connect
			// 
			this->button_connect->Location = System::Drawing::Point(24, 324);
			this->button_connect->Name = L"button_connect";
			this->button_connect->Size = System::Drawing::Size(88, 55);
			this->button_connect->TabIndex = 2;
			this->button_connect->Text = L"CONNECT";
			this->button_connect->UseVisualStyleBackColor = true;
			this->button_connect->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_send
			// 
			this->button_send->Location = System::Drawing::Point(270, 411);
			this->button_send->Name = L"button_send";
			this->button_send->Size = System::Drawing::Size(88, 55);
			this->button_send->TabIndex = 3;
			this->button_send->Text = L"SEND";
			this->button_send->UseVisualStyleBackColor = true;
			this->button_send->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button_reset
			// 
			this->button_reset->Location = System::Drawing::Point(118, 324);
			this->button_reset->Name = L"button_reset";
			this->button_reset->Size = System::Drawing::Size(88, 55);
			this->button_reset->TabIndex = 4;
			this->button_reset->Text = L"RESET";
			this->button_reset->UseVisualStyleBackColor = true;
			this->button_reset->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 5;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->settingToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(492, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(122, 26);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(122, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// settingToolStripMenuItem
			// 
			this->settingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fontToolStripMenuItem,
					this->colorToolStripMenuItem
			});
			this->settingToolStripMenuItem->Name = L"settingToolStripMenuItem";
			this->settingToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->settingToolStripMenuItem->Text = L"Setting";
			this->settingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::settingToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->largeToolStripMenuItem,
					this->meduimToolStripMenuItem, this->smallToolStripMenuItem
			});
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->fontToolStripMenuItem->Text = L"Font";
			// 
			// largeToolStripMenuItem
			// 
			this->largeToolStripMenuItem->Name = L"largeToolStripMenuItem";
			this->largeToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->largeToolStripMenuItem->Text = L"Large";
			this->largeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::largeToolStripMenuItem_Click);
			// 
			// meduimToolStripMenuItem
			// 
			this->meduimToolStripMenuItem->Name = L"meduimToolStripMenuItem";
			this->meduimToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->meduimToolStripMenuItem->Text = L"Meduim";
			this->meduimToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::meduimToolStripMenuItem_Click);
			// 
			// smallToolStripMenuItem
			// 
			this->smallToolStripMenuItem->Name = L"smallToolStripMenuItem";
			this->smallToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->smallToolStripMenuItem->Text = L"Small";
			this->smallToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::smallToolStripMenuItem_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->readToolStripMenuItem,
					this->blackToolStripMenuItem
			});
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->colorToolStripMenuItem->Text = L"Color";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->Size = System::Drawing::Size(155, 26);
			this->readToolStripMenuItem->Text = L"Red ";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// blackToolStripMenuItem
			// 
			this->blackToolStripMenuItem->ForeColor = System::Drawing::Color::Indigo;
			this->blackToolStripMenuItem->Name = L"blackToolStripMenuItem";
			this->blackToolStripMenuItem->Size = System::Drawing::Size(155, 26);
			this->blackToolStripMenuItem->Text = L"Light Red";
			this->blackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::blackToolStripMenuItem_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// button_received
			// 
			this->button_received->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button_received->Location = System::Drawing::Point(383, 411);
			this->button_received->Name = L"button_received";
			this->button_received->Size = System::Drawing::Size(88, 55);
			this->button_received->TabIndex = 7;
			this->button_received->Text = L"Received";
			this->button_received->UseVisualStyleBackColor = true;
			this->button_received->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"COM1", L"COM2", L"COM3" });
			this->comboBox1->Location = System::Drawing::Point(89, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->Location = System::Drawing::Point(2, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 26);
			this->label3->TabIndex = 10;
			this->label3->Text = L"NAME";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label4->Location = System::Drawing::Point(2, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 26);
			this->label4->TabIndex = 11;
			this->label4->Text = L"BAUD";
			// 
			// CBBAUD
			// 
			this->CBBAUD->FormattingEnabled = true;
			this->CBBAUD->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2400", L"4800", L"9600" });
			this->CBBAUD->Location = System::Drawing::Point(89, 67);
			this->CBBAUD->Name = L"CBBAUD";
			this->CBBAUD->Size = System::Drawing::Size(121, 24);
			this->CBBAUD->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label5->Location = System::Drawing::Point(2, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 37);
			this->label5->TabIndex = 13;
			this->label5->Text = L"DATA BITS";
			// 
			// CBDATABITS
			// 
			this->CBDATABITS->FormattingEnabled = true;
			this->CBDATABITS->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"7", L"8" });
			this->CBDATABITS->Location = System::Drawing::Point(89, 107);
			this->CBDATABITS->Name = L"CBDATABITS";
			this->CBDATABITS->Size = System::Drawing::Size(121, 24);
			this->CBDATABITS->TabIndex = 14;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->CBstopBits);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->CBHandshake);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->CBparity);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->CBDATABITS);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->CBBAUD);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(270, 47);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(221, 293);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"SERIAL";
			// 
			// CBstopBits
			// 
			this->CBstopBits->FormattingEnabled = true;
			this->CBstopBits->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"One", L"Two" });
			this->CBstopBits->Location = System::Drawing::Point(89, 238);
			this->CBstopBits->Name = L"CBstopBits";
			this->CBstopBits->Size = System::Drawing::Size(121, 24);
			this->CBstopBits->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label7->Location = System::Drawing::Point(-3, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 37);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Stopbits";
			// 
			// CBHandshake
			// 
			this->CBHandshake->FormattingEnabled = true;
			this->CBHandshake->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"XOnXOff", L"RequestToSend" });
			this->CBHandshake->Location = System::Drawing::Point(89, 201);
			this->CBHandshake->Name = L"CBHandshake";
			this->CBHandshake->Size = System::Drawing::Size(121, 24);
			this->CBHandshake->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label6->Location = System::Drawing::Point(-3, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 37);
			this->label6->TabIndex = 17;
			this->label6->Text = L"HandShake";
			// 
			// CBparity
			// 
			this->CBparity->FormattingEnabled = true;
			this->CBparity->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"None", L"Even ", L"Odd ", L"Mark" });
			this->CBparity->Location = System::Drawing::Point(89, 163);
			this->CBparity->Name = L"CBparity";
			this->CBparity->Size = System::Drawing::Size(121, 24);
			this->CBparity->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->Location = System::Drawing::Point(2, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 37);
			this->label2->TabIndex = 15;
			this->label2->Text = L"PARITY";
			// 
			// button_close
			// 
			this->button_close->Location = System::Drawing::Point(24, 385);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(88, 55);
			this->button_close->TabIndex = 16;
			this->button_close->Text = L"CLOSE";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// CLEAR
			// 
			this->CLEAR->Location = System::Drawing::Point(118, 385);
			this->CLEAR->Name = L"CLEAR";
			this->CLEAR->Size = System::Drawing::Size(88, 55);
			this->CLEAR->TabIndex = 17;
			this->CLEAR->Text = L"CLEAR";
			this->CLEAR->UseVisualStyleBackColor = true;
			this->CLEAR->Click += gcnew System::EventHandler(this, &MyForm::CLEAR_Click);
			// 
			// senddata
			// 
			this->senddata->Location = System::Drawing::Point(270, 346);
			this->senddata->Multiline = true;
			this->senddata->Name = L"senddata";
			this->senddata->Size = System::Drawing::Size(210, 59);
			this->senddata->TabIndex = 18;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(24, 453);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(182, 23);
			this->progressBar1->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 488);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->senddata);
			this->Controls->Add(this->CLEAR);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_received);
			this->Controls->Add(this->button_reset);
			this->Controls->Add(this->button_send);
			this->Controls->Add(this->button_connect);
			this->Controls->Add(this->view);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool isconnectbuttonpress = false;
		SerialPort^ _serialPort;
		bool sendbuttonpress = false;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try
		{
			Connectserial();
			isconnectbuttonpress = true;
			MessageBox::Show("Connected");
			button_connect->Enabled = false;
			progressBar1->Value = 100;
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Error opening serial port: ",ex->Message);
		}
		
	  
    
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		GetPortName();
		
		
}
private: System::Void settingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void largeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->view->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(254)));
	
}
private: System::Void meduimToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->view->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(254)));
}
private: System::Void smallToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->view->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(254)));
}
private: System::Void SendData_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	view->Text = " ";
	comboBox1->ResetText();
	CBBAUD->ResetText();
	CBDATABITS->ResetText();
	CBparity->ResetText();
	CBHandshake->ResetText();
	CBstopBits->ResetText();
	button_connect->Enabled = true;
	_serialPort->Close();
}
private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	
	String^ data = _serialPort->ReadExisting();
	senddata->AppendText(data);
	while (isconnectbuttonpress == true) 
	{

		senddata->AppendText(data);
		
	}
	
}
	 
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	   String^ data;
	   if (isconnectbuttonpress == true) {
		   data = _serialPort->ReadExisting();
		   view->AppendText(data);
	   }
	   sendbuttonpress = false;
}

	 public: void GetPortName()
	 {
array<String^>^ Ports = SerialPort::GetPortNames();
		for each (String^ port in Ports)
		{
			comboBox1->Items->Add(port);
		}
		comboBox1->SelectedIndex = 0;

	 }
		   
public:void Connectserial()
{
	
	//(StopBits)Enum::Parse((StopBits::typeid), CBstopBits->Text);

    _serialPort = gcnew SerialPort;
    _serialPort->PortName = comboBox1->Text;
    _serialPort->BaudRate = Convert::ToInt32(CBBAUD->Text);
    _serialPort->DataBits = Convert::ToInt32(CBDATABITS->Text);
	_serialPort->StopBits = (StopBits)Enum::Parse((StopBits::typeid), CBstopBits->Text);
	_serialPort->Handshake = (Handshake)Enum::Parse((Handshake::typeid), CBHandshake->Text);
	_serialPort->Parity = (Parity)Enum::Parse((Parity::typeid), CBparity->Text);
	_serialPort->WriteTimeout = 500;
	_serialPort->Open();
	_serialPort->WriteLine("Hello");

	
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	sendbuttonpress = true;
	if (_serialPort->IsOpen)
	{
		_serialPort->WriteLine(senddata->Text);
	}
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	view->Text = " ";
}
private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->view->ForeColor = System::Drawing::Color::Red;

}
private: System::Void blackToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->view->ForeColor = System::Drawing::Color::IndianRed;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	_serialPort->Close();
}
private: System::Void CLEAR_Click(System::Object^ sender, System::EventArgs^ e) {
	view->Text = " ";
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}
