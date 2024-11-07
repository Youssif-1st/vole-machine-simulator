#pragma once
#include"Header.h"
#include"Source.cpp"


namespace GUI {

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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ decodebutton;

	private: System::Windows::Forms::DataGridView^ Register;

	private: System::Windows::Forms::DataGridView^ Memory;




	private: System::Windows::Forms::Button^ button5;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ decodetext;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Addres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Label^ loadBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ xtext;
	private: System::Windows::Forms::TextBox^ ytext;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ opcodetext;
	private: System::Windows::Forms::TextBox^ rtext;










	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->decodebutton = (gcnew System::Windows::Forms::Button());
			this->Register = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Memory = (gcnew System::Windows::Forms::DataGridView());
			this->Addres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->decodetext = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->loadBox = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->opcodetext = (gcnew System::Windows::Forms::TextBox());
			this->rtext = (gcnew System::Windows::Forms::TextBox());
			this->xtext = (gcnew System::Windows::Forms::TextBox());
			this->ytext = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Register))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Memory))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(13, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(603, 481);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Clear Memory";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(13, 241);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 30);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Fetch";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// decodebutton
			// 
			this->decodebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decodebutton->Location = System::Drawing::Point(10, 338);
			this->decodebutton->Name = L"decodebutton";
			this->decodebutton->Size = System::Drawing::Size(120, 30);
			this->decodebutton->TabIndex = 4;
			this->decodebutton->Text = L"DeCode";
			this->decodebutton->UseVisualStyleBackColor = true;
			this->decodebutton->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// Register
			// 
			this->Register->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Register->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Register->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column3, this->Column4,
					this->Column5
			});
			this->Register->Location = System::Drawing::Point(895, 48);
			this->Register->Name = L"Register";
			this->Register->RowHeadersWidth = 51;
			this->Register->RowTemplate->Height = 24;
			this->Register->Size = System::Drawing::Size(260, 370);
			this->Register->TabIndex = 5;
			this->Register->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Address";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Hex";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 60;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Floating Point";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 80;
			// 
			// Memory
			// 
			this->Memory->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Memory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Memory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Addres, this->Column1,
					this->Column2
			});
			this->Memory->Location = System::Drawing::Point(502, 48);
			this->Memory->Name = L"Memory";
			this->Memory->RowHeadersWidth = 51;
			this->Memory->RowTemplate->Height = 24;
			this->Memory->Size = System::Drawing::Size(299, 427);
			this->Memory->TabIndex = 6;
			this->Memory->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// Addres
			// 
			this->Addres->HeaderText = L"Addres";
			this->Addres->MinimumWidth = 6;
			this->Addres->Name = L"Addres";
			this->Addres->Width = 70;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Hex";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 90;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Floating Point";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 90;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(978, 424);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 40);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Clear Register";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(154, 182);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 30);
			this->button6->TabIndex = 8;
			this->button6->Text = L"ADD";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// decodetext
			// 
			this->decodetext->Location = System::Drawing::Point(23, 310);
			this->decodetext->Name = L"decodetext";
			this->decodetext->Size = System::Drawing::Size(100, 22);
			this->decodetext->TabIndex = 11;
			this->decodetext->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(23, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(10, 529);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 60);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Execute";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// loadBox
			// 
			this->loadBox->AutoSize = true;
			this->loadBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadBox->Location = System::Drawing::Point(42, 88);
			this->loadBox->Name = L"loadBox";
			this->loadBox->Size = System::Drawing::Size(76, 16);
			this->loadBox->TabIndex = 14;
			this->loadBox->Text = L"Add Code\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(594, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 16);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Main Memory";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(953, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"The Processing Unit";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Counter";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Instruction Register";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(161, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Starting Point";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(287, 18);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 10);
			this->panel1->TabIndex = 20;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->opcodetext);
			this->panel2->Controls->Add(this->rtext);
			this->panel2->Controls->Add(this->xtext);
			this->panel2->Controls->Add(this->ytext);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->loadBox);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->decodetext);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->decodebutton);
			this->panel2->Location = System::Drawing::Point(-3, -5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(297, 601);
			this->panel2->TabIndex = 21;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(232, 367);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 18);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Y";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(231, 329);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 18);
			this->label10->TabIndex = 28;
			this->label10->Text = L"X";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(230, 292);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 18);
			this->label9->TabIndex = 27;
			this->label9->Text = L"R";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(161, 253);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 18);
			this->label8->TabIndex = 26;
			this->label8->Text = L"OP Code";
			// 
			// opcodetext
			// 
			this->opcodetext->Location = System::Drawing::Point(244, 249);
			this->opcodetext->Name = L"opcodetext";
			this->opcodetext->Size = System::Drawing::Size(30, 22);
			this->opcodetext->TabIndex = 25;
			this->opcodetext->TextChanged += gcnew System::EventHandler(this, &MyForm::opcodetext_TextChanged);
			// 
			// rtext
			// 
			this->rtext->Location = System::Drawing::Point(252, 291);
			this->rtext->Name = L"rtext";
			this->rtext->Size = System::Drawing::Size(22, 22);
			this->rtext->TabIndex = 24;
			this->rtext->TextChanged += gcnew System::EventHandler(this, &MyForm::rtext_TextChanged);
			// 
			// xtext
			// 
			this->xtext->Location = System::Drawing::Point(252, 329);
			this->xtext->Name = L"xtext";
			this->xtext->Size = System::Drawing::Size(22, 22);
			this->xtext->TabIndex = 23;
			this->xtext->TextChanged += gcnew System::EventHandler(this, &MyForm::xtext_TextChanged);
			// 
			// ytext
			// 
			this->ytext->Location = System::Drawing::Point(252, 367);
			this->ytext->Name = L"ytext";
			this->ytext->Size = System::Drawing::Size(22, 22);
			this->ytext->TabIndex = 22;
			this->ytext->TextChanged += gcnew System::EventHandler(this, &MyForm::ytext_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(5, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 29);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Control Unit";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1207, 596);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Memory);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->button2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Register))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Memory))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ code;
		private: System::String^ loadedInstruction;
		
		int start;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		for (int i = 0; i <= 255; i++)
		{
			String^ address = i.ToString("X2");
			String^ hex = system_Converter(m1.getCell(i));
			String^ floating = "0";

		    Memory->Rows->Add(address, hex, floating);
		}
		
		for (int i = 0; i <= 15; i++)
		{
			String^ registerStr = i < 10 ? i.ToString() : Convert::ToChar(i + 55).ToString();
			String^ hexStr = "00";
			String^ floating0 = "0";

			Register->Rows->Add(registerStr, hexStr, floating0);
		}
	}
	
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		 code = textBox1->Text;
		std::string loadBox;
		loadedInstruction = code;
		
			loadBox = someFunction(code);
			add( start ,loadBox, m1);
		
			Memory->Rows->Clear();
			for (int i = 0; i <= 255; i++)
			{
				String^ address = i.ToString("X2");
				String^ hex = system_Converter(m1.getCell(i));
				String^ floating = "0";

				Memory->Rows->Add(address, hex, floating);
			}
			start += 2;
			
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Register->Rows->Clear();
	for (int i = 0; i <= 15; i++)
	{
		String^ registerStr = i < 10 ? i.ToString() : Convert::ToChar(i + 55).ToString();
		String^ hexStr = "00";
		String^ floating0 = "0";

		Register->Rows->Add(registerStr, hexStr, floating0);
	}
	rr.clearRegisters();   //امسح ريجيستر
	
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{
		std::vector<int> decodedInstruction;
		char op = cp.instructionRegister[0];

		// Call the decode function
		cp.decode(decodedInstruction);

		// Update the UI with decoded values (for example, display the opcode and operands)
		if (op == '1' || op == '2' || op == '3' || op == 'B' || op == 'D' ) {
			decodetext->Text = loadedInstruction;
			opcodetext->Text = system_Converter(cp.instructionRegister.substr(0 , 1));
			rtext->Text = system_Converter(cp.instructionRegister.substr(1, 1));
			xtext->Text = system_Converter(cp.instructionRegister.substr(2,1));
			ytext->Text = system_Converter(cp.instructionRegister.substr(3));


		}
		else if (op == '9' || op == '5' || op == '6' || op == '7' || op == '8') {
			decodetext->Text = loadedInstruction;
			opcodetext->Text = system_Converter(cp.instructionRegister.substr(0, 1));
			rtext->Text = system_Converter(cp.instructionRegister.substr(1, 1));
			xtext->Text = system_Converter(cp.instructionRegister.substr(2, 1));
			ytext->Text = system_Converter(cp.instructionRegister.substr(3));
			label10->Text = "S";
			label11->Text = "T";
		}
		else if (op == '4') {
			decodetext->Text = loadedInstruction;
			opcodetext->Text = system_Converter(cp.instructionRegister.substr(0, 1));
			rtext->Text = system_Converter(cp.instructionRegister.substr(1, 1));
			xtext->Text = system_Converter(cp.instructionRegister.substr(2, 1));
			ytext->Text = system_Converter(cp.instructionRegister.substr(3));
			label9->Text = "x";

			label10->Text = "R";
			label11->Text = "S";

		}
		else if (op == 'A') {
			decodetext->Text = loadedInstruction;
			opcodetext->Text = system_Converter(cp.instructionRegister.substr(0, 1));
			rtext->Text = system_Converter(cp.instructionRegister.substr(1, 1));
			xtext->Text = system_Converter(cp.instructionRegister.substr(2, 1));
			ytext->Text = system_Converter(cp.instructionRegister.substr(3));
			label9->Text = "R";

			label10->Text = "x";
			label11->Text = "X";




		}
		else if (op == 'C')
		{
			decodetext->Text = loadedInstruction;
			opcodetext->Text = system_Converter(cp.instructionRegister.substr(0, 1));
			rtext->Text = system_Converter(cp.instructionRegister.substr(1, 1));
			xtext->Text = system_Converter(cp.instructionRegister.substr(2, 1));
			ytext->Text = system_Converter(cp.instructionRegister.substr(3));
			label9->Text = "x";

			label10->Text = "x";
			label11->Text = "x";

		}
		else {


			decodetext->Text = "Invalid Instruction";
		}

	}
	catch (...)
	{
		
	}

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ hex;
	hex = textBox2->Text;
	std::string num = someFunction(hex);
	start = ALU::hextodec(num);
	textBox2->MaxLength = 2;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	cp.fetch(m1 );
	textBox4->Text = system_Converter(cp.instructionRegister);
	
		
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ input = textBox1->Text;

	// Check if the input is more than 4 characters
	if (input->Length > 4) {
		MessageBox::Show("Please enter no more than 4 characters.");
		textBox1->Text = input->Substring(0, 4); // Truncate to 4 characters
		textBox1->SelectionStart = textBox1->Text->Length; // Move cursor to the end
		return;
	}

	// Regular expression to allow only hexadecimal characters (0-9, A-F)
	System::Text::RegularExpressions::Regex^ hexPattern = gcnew System::Text::RegularExpressions::Regex("^[0-9A-Fa-f]*$");

	// If input is invalid, clear the textbox and show an error message
	if (!hexPattern->IsMatch(input)) {
		MessageBox::Show("Please enter only hexadecimal characters (0-9, A-F).");
		textBox1->Text = ""; // Clear the invalid input
	}
}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Register->Rows->Clear();
	Memory->Rows->Clear();
	std::vector<int>decodedInstruction;

	cp.decode(decodedInstruction);
	cp.execute(m1, decodedInstruction);

	for (int i = 0; i <= 15; i++)
	{
		String^ registerStr = i < 10 ? i.ToString() : Convert::ToChar(i + 55).ToString();
		String^ hexStr = system_Converter(rr.getCell(i));
		String^ floating0 = "0";

		Register->Rows->Add(registerStr, hexStr, floating0);
	}
	for (int i = 0; i <= 255; i++)
	{
		String^ address = i.ToString("X2");
		String^ hex = system_Converter(m1.getCell(i));
		String^ floating = "0";

		Memory->Rows->Add(address, hex, floating);
	}
	


	


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Memory->Rows->Clear();
	for (int i = 0; i <= 255; i++)
	{
		String^ address = i.ToString("X2");
		String^ hex = "00";
		String^ floating = "0";

		Memory->Rows->Add(address, hex, floating);
		
	}
	m1.clearMemory();
	
	
	//امسح الميموري
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox4->ReadOnly = true;
	String^ input = textBox4->Text;


	if (input->Length > 4) {
		MessageBox::Show("Please enter no more than 4 characters.");
		textBox4->Text = input->Substring(0, 4); // Truncate to 4 characters
		textBox4->SelectionStart = textBox4->Text->Length; // Move cursor to the end
		return;
	}

	// Regular expression to allow only hexadecimal characters (0-9, A-F)
	System::Text::RegularExpressions::Regex^ hexPattern = gcnew System::Text::RegularExpressions::Regex("^[0-9A-Fa-f]*$");

	// If input is invalid, clear the textbox and show an error message
	if (!hexPattern->IsMatch(input)) {
		MessageBox::Show("Please enter only hexadecimal characters (0-9, A-F).");
		textBox4->Text = ""; // Clear the invalid input
	}
	
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(
		System::Drawing::Color::FromArgb(128, 192, 192, 192)); // Semi-transparent gray
	e->Graphics->FillRectangle(brush, 0, 0, panel1->Width, panel1->Height);
}
private: System::Void opcodetext_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	opcodetext->ReadOnly = true;
}
private: System::Void rtext_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	rtext->ReadOnly = true;
}
private: System::Void xtext_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	xtext->ReadOnly = true;
}
private: System::Void ytext_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ytext->ReadOnly = true;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
