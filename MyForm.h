#pragma once

namespace CLR {

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

	protected:

	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button0;

	private: System::Windows::Forms::Button^  buttonCE;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonSubtract;
	private: System::Windows::Forms::Button^  buttonMultiply;
	private: System::Windows::Forms::Button^  buttonDivide;
	private: System::Windows::Forms::Button^  buttonResult;
	private: System::Windows::Forms::Button^  buttonDecimal;
	private: System::Windows::Forms::Button^  buttonC;
	private: System::Windows::Forms::Button^  buttonNegative;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button10;


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
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonSubtract = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->buttonDecimal = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonNegative = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(67, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(128, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 48);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 162);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 48);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(67, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 48);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(128, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 48);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(6, 216);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 48);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(67, 216);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 48);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(128, 216);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 48);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(6, 270);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(55, 48);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// buttonCE
			// 
			this->buttonCE->Location = System::Drawing::Point(128, 54);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(55, 48);
			this->buttonCE->TabIndex = 12;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &MyForm::buttonCE_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(222, 29);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(189, 108);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(55, 48);
			this->buttonAdd->TabIndex = 14;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// buttonSubtract
			// 
			this->buttonSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSubtract->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonSubtract->Location = System::Drawing::Point(189, 162);
			this->buttonSubtract->Name = L"buttonSubtract";
			this->buttonSubtract->Size = System::Drawing::Size(55, 48);
			this->buttonSubtract->TabIndex = 15;
			this->buttonSubtract->Text = L"-";
			this->buttonSubtract->UseVisualStyleBackColor = true;
			this->buttonSubtract->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMultiply->Location = System::Drawing::Point(189, 216);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(55, 48);
			this->buttonMultiply->TabIndex = 16;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// buttonDivide
			// 
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivide->Location = System::Drawing::Point(189, 270);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(55, 48);
			this->buttonDivide->TabIndex = 17;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// buttonResult
			// 
			this->buttonResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonResult->Location = System::Drawing::Point(128, 270);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(55, 49);
			this->buttonResult->TabIndex = 18;
			this->buttonResult->Text = L"=";
			this->buttonResult->UseVisualStyleBackColor = true;
			this->buttonResult->Click += gcnew System::EventHandler(this, &MyForm::buttonResult_Click);
			// 
			// buttonDecimal
			// 
			this->buttonDecimal->Location = System::Drawing::Point(67, 270);
			this->buttonDecimal->Name = L"buttonDecimal";
			this->buttonDecimal->Size = System::Drawing::Size(55, 48);
			this->buttonDecimal->TabIndex = 19;
			this->buttonDecimal->Text = L".";
			this->buttonDecimal->UseVisualStyleBackColor = true;
			this->buttonDecimal->Click += gcnew System::EventHandler(this, &MyForm::buttonDecimal_Click);
			// 
			// buttonC
			// 
			this->buttonC->Location = System::Drawing::Point(67, 54);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(55, 48);
			this->buttonC->TabIndex = 20;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonNegative
			// 
			this->buttonNegative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNegative->Location = System::Drawing::Point(189, 54);
			this->buttonNegative->Name = L"buttonNegative";
			this->buttonNegative->Size = System::Drawing::Size(55, 48);
			this->buttonNegative->TabIndex = 21;
			this->buttonNegative->Text = L"+/-";
			this->buttonNegative->UseVisualStyleBackColor = true;
			this->buttonNegative->Click += gcnew System::EventHandler(this, &MyForm::buttonNegative_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(20, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(33, 13);
			this->textBox2->TabIndex = 22;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(6, 54);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 48);
			this->button10->TabIndex = 23;
			this->button10->Text = L"←";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(252, 323);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->buttonNegative);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonDecimal);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonSubtract);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double iFirstnum;
		double iSecondnum;
		double iResult;
		String^ iOperator;
#pragma endregion
		

	private: System::Void buttonC_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBox1->Text = "0";
		textBox2->Text = "";
	}

	private: System::Void buttonCE_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		textBox1->Text = "0";
	}

	private: System::Void buttonClick(System::Object^  sender, System::EventArgs^  e)
	{
		Button ^ Numbers = safe_cast<Button^>(sender);

		if (textBox1->Text == "0")
		{
			textBox1->Text = Numbers->Text;
		}
		else
		{
			textBox1->Text += Numbers->Text;
		}
	}
	private: System::Void Arithmetic(System::Object^  sender, System::EventArgs^  e) 
	{
		Button ^ op = safe_cast<Button^>(sender);
		iFirstnum = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		iOperator = op->Text;
		textBox2->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
		
	}
	private: System::Void buttonResult_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBox2->Text = "";
		iSecondnum = Double::Parse(textBox1->Text);
		if (iOperator == "+")
		{
			iResult = iFirstnum + iSecondnum;
			textBox1->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "-")
		{
			iResult = iFirstnum - iSecondnum;
			textBox1->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "*")
		{
			iResult = iFirstnum * iSecondnum;
			textBox1->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "/")
		{
			iResult = iFirstnum / iSecondnum;
			textBox1->Text = System::Convert::ToString(iResult);
		}
	}

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox1->Text == "")
		{
			textBox1->Text = "0";
		}
	}
	private: System::Void buttonDecimal_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!textBox1->Text->Contains("."))
		{
			textBox1->Text += ".";
		}
	}
	private: System::Void buttonNegative_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (textBox1->Text->Contains("-"))
		{
			textBox1->Text = textBox1->Text->Remove(0, 1);
		}
		else
		{
			textBox1->Text = "-" + textBox1->Text;
		}
	}

};
}
