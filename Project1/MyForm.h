#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите вес";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(464, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(12, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 170);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(407, 57);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(261, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Выберите рост";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(255, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(407, 104);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(182, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Расчёт индекса массы тела";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(61, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Данные не введены";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 223);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Расчёт ИМТ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Заполняем комбо-боксы
	for (int i = 40; i < 151; i++) {
		comboBox1->Items->Add(i);
	}
	for (int i = 80; i < 210; i++) {
		comboBox2->Items->Add(i);
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Проверяем на пустоту
	if(comboBox1->Text->Length == 0 || comboBox2->Text->Length == 0) 
		MessageBox::Show("После веса или роста пустое", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

	int weight = System::Convert::ToInt32(comboBox1->Text),//Вес
		height = System::Convert::ToInt32(comboBox2->Text);//Рост
	double result;

	result = weight/(height*height/10000);
	pictureBox1->BackgroundImage = nullptr;// чистим задний фон

	if (result < 16) {
		label5->Text = System::Convert::ToString("Выраженный дефицит массы тела");
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("C:\\project\\Project1\\Project1\\img\\Выраженный дефицит массы тела.jpg");
	}else if(result >= 16 && result < 18){
		label5->Text = System::Convert::ToString("Недостаточная (дефицит) масса тела");
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("C:\\project\\Project1\\Project1\\img\\Недостаточная (дефицит) масса тела.jpg");
	}else if (result >= 18 && result < 25) {
		label5->Text = System::Convert::ToString("Норма");
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("C:\\project\\Project1\\Project1\\img\\Норма.jpg");
	}else if (result >= 25 && result < 30) {
		label5->Text = System::Convert::ToString("Избыточная масса тела");
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("C:\\project\\Project1\\Project1\\img\\Избыточная масса тела.png");
	}else if (result >= 30 && result < 35) {
		label5->Text = System::Convert::ToString("Ожирение первой степени");
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("C:\\project\\Project1\\Project1\\img\\Ожирение первой степени.png");
	}else if (result >= 35 && result < 40) {
		label5->Text = System::Convert::ToString("Ожирение второй степени");
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("C:\\project\\Project1\\Project1\\img\\Ожирение второй степени.jpg");
	}else if (result >= 40) {
		label5->Text = System::Convert::ToString("Ожирение третьей степени");
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("C:\\project\\Project1\\Project1\\img\\Ожирение третьей степени.jpg");
	}
}
};
}
