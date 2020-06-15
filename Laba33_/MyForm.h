#pragma once

namespace Laba33 {

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
			listBox1->SelectedIndex = 0;
			listBox2->SelectedIndex = 1;
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(-3, 22);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(266, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::texBox1_KeyChar);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-4, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Операнд 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(-3, 52);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Операнд 2:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(-1, 74);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(266, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::texBox2_KeyChar);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(-3, 104);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ответ:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(-3, 121);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(265, 26);
			this->textBox3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(-3, 151);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Текущее действие:\r\n";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Сложение ", L"Вычитание", L"Умножение ", L"Деление" });
			this->comboBox1->Location = System::Drawing::Point(146, 148);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(116, 26);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"(не выбрано)";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(653, 22);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(223, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"1";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::texBox4_KeyChar);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(652, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(224, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Введите количество валюты:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Window;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(653, 47);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Из:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Window;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(854, 47);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 18);
			this->label7->TabIndex = 11;
			this->label7->Text = L"В:";
			// 
			// listBox1
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"RUB", L"USD", L"EUR", L"GBR", L"CHF" });
			this->listBox1->Location = System::Drawing::Point(653, 68);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(35, 92);
			this->listBox1->TabIndex = 12;
			// 
			// listBox2
			// 
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"RUB", L"USD", L"EUR", L"GBR", L"CHF" });
			this->listBox2->Location = System::Drawing::Point(841, 68);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(35, 92);
			this->listBox2->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(694, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 94);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Перевести";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(0, 180);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScrollBarsEnabled = false;
			this->webBrowser1->Size = System::Drawing::Size(876, 487);
			this->webBrowser1->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(876, 667);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор и Конвертер валют онлайн";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text != "" && textBox2->Text != "")
		switch (comboBox1->SelectedIndex)
		{
		case 0: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) + Convert::ToDouble(textBox2->Text)); break;
		case 1: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) - Convert::ToDouble(textBox2->Text)); break;
		case 2: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox2->Text)); break;
		case 3: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) / Convert::ToDouble(textBox2->Text)); break;
		}
	else
		textBox3->Text = "Ожидание...";
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text != "" && textBox2->Text != "")
		switch (comboBox1->SelectedIndex)
		{
		case 0: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) + Convert::ToDouble(textBox2->Text)); break;
		case 1: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) - Convert::ToDouble(textBox2->Text)); break;
		case 2: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox2->Text)); break;
		case 3: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) / Convert::ToDouble(textBox2->Text)); break;
		}
	
	else
		textBox3->Text = "Ожидание...";
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text != "" && textBox2->Text != "")
		switch (comboBox1->SelectedIndex)
		{
		case 0: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) + Convert::ToDouble(textBox2->Text)); break;
		case 1: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) - Convert::ToDouble(textBox2->Text)); break;
		case 2: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox2->Text)); break;
		case 3: textBox3->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) / Convert::ToDouble(textBox2->Text)); break;
		}
	else
		textBox3->Text = "Ожидание...";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ from; String^ to;

	from = listBox1->SelectedItem->ToString(); // выбранная валюта в 1 списке
	to = listBox2->SelectedItem->ToString(); // выбранная валюта во 2 списке

	if (from == to)
	{
		MessageBox::Show("Это одна и та же валюта!", "Внимание!");
	}
	else if (textBox4->Text == "")
	{
		MessageBox::Show("Введите количество валюты!", "Внимание!");
	}
	else
	{
		webBrowser1->Navigate("https://www.google.ru/search?q=" + textBox4->Text + " " + from + " %D0%B2 " + to);
	}
}



private: System::Void texBox1_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44)
	{
		e->Handled = true;
	}
}

private: System::Void texBox2_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	char number = e->KeyChar;
	
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44)
	{
		e->Handled = true;
	}
}

private: System::Void texBox4_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44)
	{
		e->Handled = true;
	}
}

};
}
