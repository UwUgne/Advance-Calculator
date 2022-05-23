#pragma once

namespace AdvanceCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;

	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Label^ LBL;
	private: System::Windows::Forms::Button^ button23;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->textBox = (gcnew System::Windows::Forms::TextBox());
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
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->LBL = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(26, 16);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(399, 61);
			this->textBox->TabIndex = 0;
			this->textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(26, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(107, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 63);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(188, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 63);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(269, 83);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 63);
			this->button4->TabIndex = 1;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(350, 83);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 63);
			this->button5->TabIndex = 1;
			this->button5->Text = L"C";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::Clear);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(26, 152);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 63);
			this->button6->TabIndex = 1;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(107, 152);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 63);
			this->button7->TabIndex = 1;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(188, 152);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 63);
			this->button8->TabIndex = 1;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(269, 152);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 63);
			this->button9->TabIndex = 1;
			this->button9->Text = L".";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Main::Decimal);
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(350, 152);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 63);
			this->button10->TabIndex = 1;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Main::Delete);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(26, 221);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 63);
			this->button11->TabIndex = 1;
			this->button11->Text = L"7";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(107, 221);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 63);
			this->button12->TabIndex = 1;
			this->button12->Text = L"8";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(188, 221);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 63);
			this->button13->TabIndex = 1;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Main::button_number_click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(269, 221);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 63);
			this->button14->TabIndex = 1;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Main::Operators);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(269, 358);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 63);
			this->button15->TabIndex = 1;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Main::Operators);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(26, 290);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 63);
			this->button16->TabIndex = 1;
			this->button16->Text = L"Log";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Main::Logorith);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(107, 290);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 63);
			this->button17->TabIndex = 1;
			this->button17->Text = L"ln x";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Main::Lnx);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(188, 290);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 63);
			this->button18->TabIndex = 1;
			this->button18->Text = L"sqrt";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Main::sqrt);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(350, 290);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 63);
			this->button19->TabIndex = 1;
			this->button19->Text = L"/";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Main::Operators);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(269, 290);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 63);
			this->button20->TabIndex = 1;
			this->button20->Text = L"*";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Main::Operators);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(26, 359);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 63);
			this->button21->TabIndex = 1;
			this->button21->Text = L"x^2";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Main::x2);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(188, 359);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 63);
			this->button22->TabIndex = 1;
			this->button22->Text = L"x^y";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Main::xy);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(269, 427);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 63);
			this->button24->TabIndex = 1;
			this->button24->Text = L"!";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(350, 359);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 63);
			this->button25->TabIndex = 1;
			this->button25->Text = L"%";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(26, 428);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 63);
			this->button26->TabIndex = 1;
			this->button26->Text = L"sin";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Main::sin);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(107, 428);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 63);
			this->button27->TabIndex = 1;
			this->button27->Text = L"cos";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Main::cos);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(188, 428);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 63);
			this->button28->TabIndex = 1;
			this->button28->Text = L"tan";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->MouseCaptureChanged += gcnew System::EventHandler(this, &Main::tan);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(350, 221);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 63);
			this->button29->TabIndex = 1;
			this->button29->Text = L"+";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Main::Operators);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(350, 428);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 63);
			this->button30->TabIndex = 1;
			this->button30->Text = L"pie";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(26, 497);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 63);
			this->button31->TabIndex = 1;
			this->button31->Text = L"sin-1";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Main::SinusMinusOne);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(107, 497);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 63);
			this->button32->TabIndex = 1;
			this->button32->Text = L"cos-1";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Main::cosMinusOne);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(188, 497);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 63);
			this->button33->TabIndex = 1;
			this->button33->Text = L"tan-1";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Main::tanminusOne);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(269, 496);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 63);
			this->button34->TabIndex = 1;
			this->button34->Text = L"1/x";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Main::OneDivitedByX);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(350, 497);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 63);
			this->button35->TabIndex = 1;
			this->button35->Text = L"=";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// LBL
			// 
			this->LBL->AutoSize = true;
			this->LBL->Location = System::Drawing::Point(34, 24);
			this->LBL->Name = L"LBL";
			this->LBL->Size = System::Drawing::Size(0, 13);
			this->LBL->TabIndex = 2;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(107, 359);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 63);
			this->button23->TabIndex = 3;
			this->button23->Text = L"x^3";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Main::x3);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 575);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->LBL);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox);
			this->Name = L"Main";
			this->Text = L"Main";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		double FirstNum;
		double SecondNum;
		double Result;
		double a; 
		String^ Operator;

	private: System::Void Delete(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox->Text->Length > 0)
			textBox->Text = textBox->Text->Remove(textBox->Text->Length - 1, 1);
	}
	private: System::Void Clear(System::Object^ sender, System::EventArgs^ e) {textBox->Clear();}
    private: System::Void button_number_click(System::Object^ sender, System::EventArgs^ e)
	{
	
		Button^ Numbers = safe_cast<Button^>(sender);
		if (textBox->Text == "0")
			textBox->Text = Numbers->Text;

		else textBox->Text = textBox->Text+ Numbers->Text;

    }
     private: System::Void Decimal(System::Object^ sender, System::EventArgs^ e)
	 {
		 if (!textBox->Text->Contains("."))
			 textBox->Text = textBox->Text + ".";
	 }
	
    private: System::Void Equel(System::Object^ sender, System::EventArgs^ e)
	{
		LBL->Text = "";

		SecondNum = double::Parse(textBox->Text);

		if (Operator == "+")
		{
			Result = FirstNum + SecondNum;
			textBox->Text = System::Convert::ToString(Result);
		}

		else if (Operator == "-")
		{
			Result = FirstNum - SecondNum;
			textBox->Text = System::Convert::ToString(Result);
		}

		else if (Operator == "*")
		{
			Result = FirstNum * SecondNum;
			textBox->Text = System::Convert::ToString(Result);
		}

		else if (Operator == "/")
		{
			Result = FirstNum / SecondNum;
			textBox->Text = System::Convert::ToString(Result);
		}
	}

	private: System::Void Operators(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ operators = safe_cast<Button^>(sender);

		FirstNum = Double::Parse(textBox->Text);
		textBox->Text = "";
		Operator = operators->Text;
		LBL->Text = System::Convert::ToString(FirstNum) + " ";
	}

    private: System::Void Factorials(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("!" + "(" + (textBox->Text) + ")");
		for (int i = 1; a >= i; i++) 
		{
			a *= a;
		}
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void Logorith(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("log" + "(" + (textBox->Text) + ")");
		a = Math::Log(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void Lnx(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("ln x" + "(" + (textBox->Text) + ")");
		a = Math::Log10(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void sqrt(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("sqrt" + "(" + (textBox->Text) + ")");
		a = Math::Sqrt(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void x2(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text) * Double::Parse(textBox->Text);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void x3(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text) * Double::Parse(textBox->Text) * Double::Parse(textBox->Text);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void sin(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("sin" + "(" + (textBox->Text) + ")");
		a = Math::Sin(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void cos(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("cos" + "(" + (textBox->Text) + ")");
		a = Math::Cos(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void tan(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("tan" + "(" + (textBox->Text) + ")");
		a = Math::Tan(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void tanminusOne(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("tan-1" + "(" + (textBox->Text) + ")");
		a = Math::Atan(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void cosMinusOne(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("cos-1" + "(" + (textBox->Text) + ")");
		a = Math::Acos(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void SinusMinusOne(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("sin-1" + "(" + (textBox->Text) + ")");
		a = Math::Asin(a);
		textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void OneDivitedByX(System::Object^ sender, System::EventArgs^ e)
	{
		a = Double::Parse(textBox->Text);
		LBL->Text = System::Convert::ToString("1/x" + "(" + (textBox->Text) + ")");
		a = 1/a;
	    textBox->Text = System::Convert::ToString(a);
	}

	private: System::Void Pie(System::Object^ sender, System::EventArgs^ e)
	{
		textBox->Text = ("3.14159265358997632384626433832795");
	}

	private: System::Void xy(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void Precent (System::Object^ sender, System::EventArgs^ e)
	{
		a = Convert::ToDouble(textBox->Text) / Convert::ToDouble(100);
		textBox->Text = Convert::ToString(a);
	}
};
}
// do xy