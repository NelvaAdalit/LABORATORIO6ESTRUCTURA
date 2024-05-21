#pragma once
using namespace ClasesMateriaProfe;
using namespace std;

namespace LABORATORIO6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de profe
	/// </summary>
	public ref class profe : public System::Windows::Forms::Form
	{
	public:
		Lista_Profesores^ lista;
		profe(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~profe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnguardar;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnguardar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btnguardar);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(11, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(934, 444);
			this->panel1->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(31, 387);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 27);
			this->button7->TabIndex = 33;
			this->button7->Text = L"Nuevo";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &profe::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(444, 387);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 27);
			this->button6->TabIndex = 32;
			this->button6->Text = L"Siguiente";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &profe::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(337, 387);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 27);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Anterior";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &profe::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(234, 387);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 27);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Ir al Ultimo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &profe::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(137, 387);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 27);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Ir al Primero";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &profe::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(561, 387);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 27);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &profe::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(764, 387);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 27);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &profe::button1_Click);
			// 
			// btnguardar
			// 
			this->btnguardar->Location = System::Drawing::Point(658, 387);
			this->btnguardar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnguardar->Name = L"btnguardar";
			this->btnguardar->Size = System::Drawing::Size(93, 27);
			this->btnguardar->TabIndex = 26;
			this->btnguardar->Text = L"Agregar";
			this->btnguardar->UseVisualStyleBackColor = true;
			this->btnguardar->Click += gcnew System::EventHandler(this, &profe::btnguardar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->dateTimePicker1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(14, 188);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(897, 182);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"DATOS LABORALES";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Base de datos", L"Fisica", L"Programacion Basica" });
			this->comboBox3->Location = System::Drawing::Point(230, 117);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(132, 21);
			this->comboBox3->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(227, 102);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(145, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Asignatoras que regenta";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ingeniero de sistemas", L"Ingeniero de telecomunicaciones" });
			this->comboBox2->Location = System::Drawing::Point(7, 117);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(165, 21);
			this->comboBox2->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 102);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Titulo Universitario";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(255, 53);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->MaxLength = 5;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 19);
			this->textBox4->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(285, 34);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Salario";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Contrato fijo", L"Contrato ocacional", L"Contrato provisional" });
			this->comboBox1->Location = System::Drawing::Point(17, 51);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(117, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 34);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Categoria";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(465, 70);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Fecha de Ingreso";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Checked = false;
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(468, 96);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(96, 19);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->Value = System::DateTime(2024, 4, 24, 13, 55, 28, 0);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(14, 2);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(895, 170);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"DATOS DEL PROFESOR";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(457, 65);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->MaxLength = 8;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(82, 19);
			this->textBox5->TabIndex = 26;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(406, 67);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Celular";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(482, 21);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 19);
			this->textBox3->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(406, 24);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Apellidos";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(255, 22);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 19);
			this->textBox2->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(187, 27);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Nombres";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 111);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Edad";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(79, 22);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->MaxLength = 6;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 19);
			this->textBox1->TabIndex = 2;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(17, 126);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 19);
			this->numericUpDown1->TabIndex = 19;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(189, 67);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(197, 43);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sexo";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 17);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(79, 17);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->Text = L"Femenino";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(112, 15);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(82, 17);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->Text = L"Masculino";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Location = System::Drawing::Point(246, 126);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(286, 19);
			this->textBox6->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(170, 132);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Direccion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 27);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Identificador";
			// 
			// profe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(956, 503);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"profe";
			this->Text = L"profe";
			this->Load += gcnew System::EventHandler(this, &profe::profe_Load);
			this->panel1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void profe_Load(System::Object^ sender, System::EventArgs^ e) {
		// Lista_Profesores^ lista;
		// sea crea la lista de Profesores
		lista = gcnew Lista_Profesores();
	}
	
private: System::Void btnguardar_Click(System::Object^ sender, System::EventArgs^ e) {
	//se inserta el profesor 
	lista->insertar_profesor(textBox1->Text, textBox2->Text, textBox3->Text, Convert::ToInt32(numericUpDown1->Value), radioButton1->Checked ? "Masculino" : "Femenino", Convert::ToInt32(textBox5->Text), textBox6->Text, dateTimePicker1->Value.ToString(), comboBox1->Text, Convert::ToInt32(textBox4->Text), comboBox2->Text);
	MessageBox::Show("Profesor guardado con exito");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lista->actualizar_profesor(textBox1->Text, textBox2->Text, textBox3->Text, Convert::ToInt32(numericUpDown1->Value), radioButton1->Checked ? "Masculino" : "Femenino", Convert::ToInt32(textBox5->Text), textBox6->Text, dateTimePicker1->Value.ToString(), comboBox1->Text, Convert::ToInt32(textBox4->Text), comboBox2->Text))
		MessageBox::Show("Profesor actualizado con exito");
	else
		MessageBox::Show("Profesor no encontrado");
		
  }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = lista->Profesor_primer()->getidentificador();
	textBox2->Text = lista->Profesor_primer()->getnombre();
	textBox3->Text = lista->Profesor_primer()->getapellido();
	numericUpDown1->Value = lista->Profesor_primer()->getedad();
	if (lista->Profesor_primer()->getsexo() == "Masculino")
		radioButton1->Checked = true;
	else
		radioButton2->Checked = true;
	textBox5->Text = Convert::ToString(lista->Profesor_primer()->getcelular());
	textBox6->Text = lista->Profesor_primer()->getdireccion();
	dateTimePicker1->Value = Convert::ToDateTime(lista->Profesor_primer()->getfechaingreso());
	comboBox1->Text = lista->Profesor_primer()->getcategoria();
	textBox4->Text = Convert::ToString(lista->Profesor_primer()->getsalario());
	comboBox2->Text = lista->Profesor_primer()->gettitulo_universitario();


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = lista->Profesor_ultimo()->getidentificador();
	textBox2->Text = lista->Profesor_ultimo()->getnombre();
	textBox3->Text = lista->Profesor_ultimo()->getapellido();
	numericUpDown1->Value = lista->Profesor_ultimo()->getedad();
	if (lista->Profesor_ultimo()->getsexo() == "Masculino")
		radioButton1->Checked = true;
	else
		radioButton2->Checked = true;
	textBox5->Text = Convert::ToString(lista->Profesor_ultimo()->getcelular());
	textBox6->Text = lista->Profesor_ultimo()->getdireccion();
	dateTimePicker1->Value = Convert::ToDateTime(lista->Profesor_ultimo()->getfechaingreso());
	comboBox1->Text = lista->Profesor_ultimo()->getcategoria();
	textBox4->Text = Convert::ToString(lista->Profesor_ultimo()->getsalario());
	comboBox2->Text = lista->Profesor_ultimo()->gettitulo_universitario();	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	profesor^ a = gcnew profesor(textBox1->Text, textBox2->Text, textBox3->Text, Convert::ToInt32(numericUpDown1->Value), radioButton1->Checked ? "Masculino" : "Femenino", Convert::ToInt32(textBox5->Text), textBox6->Text, dateTimePicker1->Value.ToString(), comboBox1->Text, Convert::ToInt32(textBox4->Text), comboBox2->Text);

	profesor^ c;
	c = lista->Profesor_anterior(textBox1->Text);
	if (c != nullptr)
	{
		textBox1->Text = c->getidentificador();
		textBox2->Text = c->getnombre();
		textBox3->Text = c->getapellido();
		numericUpDown1->Value = c->getedad();
		if (c->getsexo() == "Masculino")
			radioButton1->Checked = true;
		else
			radioButton2->Checked = true;
		textBox5->Text = Convert::ToString(c->getcelular());
		textBox6->Text = c->getdireccion();
		dateTimePicker1->Value = Convert::ToDateTime(c->getfechaingreso());
		comboBox1->Text = c->getcategoria();
		textBox4->Text = Convert::ToString(c->getsalario());
		comboBox2->Text = c->gettitulo_universitario();
	}
	else
		MessageBox::Show("No tiene anterior");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	profesor^ a = gcnew profesor(textBox1->Text, textBox2->Text, textBox3->Text, Convert::ToInt32(numericUpDown1->Value), radioButton1->Checked ? "Masculino" : "Femenino", Convert::ToInt32(textBox5->Text), textBox6->Text, dateTimePicker1->Value.ToString(), comboBox1->Text, Convert::ToInt32(textBox4->Text), comboBox2->Text);

	profesor^ c;
	c = lista->Profesor_siguiente(textBox1->Text);
	if (c != nullptr)
	{
		textBox1->Text = c->getidentificador();
		textBox2->Text = c->getnombre();
		textBox3->Text = c->getapellido();
		numericUpDown1->Value = c->getedad();
		if (c->getsexo() == "Masculino")
			radioButton1->Checked = true;
		else
			radioButton2->Checked = true;
		textBox5->Text = Convert::ToString(c->getcelular());
		textBox6->Text = c->getdireccion();
		dateTimePicker1->Value = Convert::ToDateTime(c->getfechaingreso());
		comboBox1->Text = c->getcategoria();
		textBox4->Text = Convert::ToString(c->getsalario());
		comboBox2->Text = c->gettitulo_universitario();
	}
	else
		MessageBox::Show("No tiene siguiente");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lista->eliminar_profesor(textBox1->Text))
		MessageBox::Show("Profesor eliminado con exito");
	else
		MessageBox::Show("Profesor no encontrado");

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	numericUpDown1->Value = 20;
	radioButton1->Checked = true;
	textBox5->Text = "";
	textBox6->Text = "";
	dateTimePicker1->Value = System::DateTime::Now;
	comboBox1->Text = "";
	textBox4->Text = "";
	comboBox2->Text = "";

}
};
}


