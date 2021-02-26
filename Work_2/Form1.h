#pragma once


namespace Work_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;





	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>




	private: System::Windows::Forms::Label^  label0;
	private: System::Windows::Forms::TextBox^  textBox0;
	private: System::Windows::Forms::Button^  button0;


	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button1save;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;







		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label0 = (gcnew System::Windows::Forms::Label());
			this->textBox0 = (gcnew System::Windows::Forms::TextBox());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button1save = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 348);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(686, 105);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(141, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 41);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Кодировать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(415, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 41);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Исправление";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(562, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 41);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Декодировать";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label0
			// 
			this->label0->AutoSize = true;
			this->label0->Location = System::Drawing::Point(15, 8);
			this->label0->Name = L"label0";
			this->label0->Size = System::Drawing::Size(34, 13);
			this->label0->TabIndex = 12;
			this->label0->Text = L"Путь:";
			// 
			// textBox0
			// 
			this->textBox0->Location = System::Drawing::Point(12, 100);
			this->textBox0->Multiline = true;
			this->textBox0->Name = L"textBox0";
			this->textBox0->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox0->Size = System::Drawing::Size(686, 105);
			this->textBox0->TabIndex = 11;
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::Window;
			this->button0->Location = System::Drawing::Point(12, 24);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(123, 41);
			this->button0->TabIndex = 13;
			this->button0->Text = L"Открыть файл";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 596);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(686, 105);
			this->textBox4->TabIndex = 14;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1save
			// 
			this->button1save->BackColor = System::Drawing::SystemColors::Window;
			this->button1save->Location = System::Drawing::Point(271, 24);
			this->button1save->Name = L"button1save";
			this->button1save->Size = System::Drawing::Size(138, 41);
			this->button1save->TabIndex = 17;
			this->button1save->Text = L"Сохранить изменения";
			this->button1save->UseVisualStyleBackColor = false;
			this->button1save->Click += gcnew System::EventHandler(this, &Form1::button1save_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 224);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox1->Size = System::Drawing::Size(686, 105);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox3->Location = System::Drawing::Point(12, 472);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox3->Size = System::Drawing::Size(686, 105);
			this->richTextBox3->TabIndex = 19;
			this->richTextBox3->Text = L"";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(15, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Исходное сообщение";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(15, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Кодирование";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(15, 332);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Наличие ошибок";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(15, 456);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Декодирование";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(15, 580);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Полученное сообщение";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(711, 710);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1save);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->label0);
			this->Controls->Add(this->textBox0);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Name = L"Form1";
			this->Text = L"Помехоустойчивое кодирование Хэмминга";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: unsigned int couWord, // кол-во слов = пакетов
							pW,		
							pR,		
							bytSize;

	private: unsigned char *byt,Sndr; // byt - массив для хранения пакетов
	private: System::String ^etcod; 
	private: System::String ^eterr;
    private: System::String ^ettxt;

	

	private: System::String ^EncodeHemming(System::String ^str);
	private: System::Void BitStringToArray(System::String ^str);
	private: System::Void CreateClearArray(int size);
	private: System::String ^WriteText(void);	
	private: System::Void Check(unsigned int couWord);
	private: System::Void CheckWord(unsigned char *pBlock);
	private: System::Void Analiz1(unsigned char mod);	
	private: System::Void Invertor(unsigned int pW,unsigned char pR);
	
			 

		
	private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) ;	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button1save_Click(System::Object^  sender, System::EventArgs^  e) ;

		 
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

