/*
********************************************************************************
* Лабораторная работа № 7                                                      *
* Задача № 1                                                                   *
*                                                                              *
* Условие:                                                                     *
* Разработать приложение WinForms на C++, которое будет иметь стандартный      *
* интерфейс Windows, создавать графическое изображение созвездия (Вариант 11)  *
* с возможностью сохранить изображение в графический файл через стандартное    *
* диалоговое окно Сохранить.                                                   *
*                                                                              *
* Выполнила:                                                                   *
* Кызылова Полина Андреевна                                                    *
* Группа: ПКТб-20-1                                                            *
*                                                                              *
* Дата: 30.05.2021                                                             *
********************************************************************************
*/


#pragma once

#include "UnitAbout.h"
#include "UnitHelp.h"

namespace Lab7_Kyzylova_Task1_Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для UnitMain
	/// </summary>
	public ref class UnitMain : public System::Windows::Forms::Form
	{
	public:
		UnitMain(void)
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
		~UnitMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  помощьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  помощьВИспользованииToolStripMenuItem;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonLinesColor;


	private: System::Windows::Forms::Button^  buttonStarsColor;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  buttonAnimOff;

	private: System::Windows::Forms::Button^  buttonAnimOn;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog2;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;


	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UnitMain::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьВИспользованииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonLinesColor = (gcnew System::Windows::Forms::Button());
			this->buttonStarsColor = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->buttonAnimOff = (gcnew System::Windows::Forms::Button());
			this->buttonAnimOn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помощьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(939, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->помощьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->помощьВИспользованииToolStripMenuItem
			});
			this->помощьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->помощьToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::помощьToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::оПрограммеToolStripMenuItem_Click);
			// 
			// помощьВИспользованииToolStripMenuItem
			// 
			this->помощьВИспользованииToolStripMenuItem->Name = L"помощьВИспользованииToolStripMenuItem";
			this->помощьВИспользованииToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->помощьВИспользованииToolStripMenuItem->Text = L"Помощь в использовании";
			this->помощьВИспользованииToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::помощьВИспользованииToolStripMenuItem_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::Transparent;
			this->buttonSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSave->ForeColor = System::Drawing::Color::White;
			this->buttonSave->Location = System::Drawing::Point(741, 12);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(187, 30);
			this->buttonSave->TabIndex = 1;
			this->buttonSave->Text = L"Стандартный вид";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &UnitMain::buttonSave_Click);
			// 
			// buttonLinesColor
			// 
			this->buttonLinesColor->BackColor = System::Drawing::Color::Transparent;
			this->buttonLinesColor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLinesColor->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonLinesColor->ForeColor = System::Drawing::Color::White;
			this->buttonLinesColor->Location = System::Drawing::Point(741, 94);
			this->buttonLinesColor->Name = L"buttonLinesColor";
			this->buttonLinesColor->Size = System::Drawing::Size(187, 30);
			this->buttonLinesColor->TabIndex = 2;
			this->buttonLinesColor->Text = L"Цвет линий";
			this->buttonLinesColor->UseVisualStyleBackColor = false;
			this->buttonLinesColor->Click += gcnew System::EventHandler(this, &UnitMain::buttonLinesColor_Click);
			// 
			// buttonStarsColor
			// 
			this->buttonStarsColor->BackColor = System::Drawing::Color::Transparent;
			this->buttonStarsColor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStarsColor->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStarsColor->ForeColor = System::Drawing::Color::White;
			this->buttonStarsColor->Location = System::Drawing::Point(741, 53);
			this->buttonStarsColor->Name = L"buttonStarsColor";
			this->buttonStarsColor->Size = System::Drawing::Size(187, 30);
			this->buttonStarsColor->TabIndex = 3;
			this->buttonStarsColor->Text = L"Цвет звёзд";
			this->buttonStarsColor->UseVisualStyleBackColor = false;
			this->buttonStarsColor->Click += gcnew System::EventHandler(this, &UnitMain::buttonStarsColor_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(741, 193);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(187, 30);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Сохранить";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &UnitMain::button4_Click);
			// 
			// buttonAnimOff
			// 
			this->buttonAnimOff->BackColor = System::Drawing::Color::Transparent;
			this->buttonAnimOff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnimOff->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnimOff->ForeColor = System::Drawing::Color::White;
			this->buttonAnimOff->Location = System::Drawing::Point(836, 157);
			this->buttonAnimOff->Name = L"buttonAnimOff";
			this->buttonAnimOff->Size = System::Drawing::Size(92, 30);
			this->buttonAnimOff->TabIndex = 5;
			this->buttonAnimOff->Text = L"Выключить";
			this->buttonAnimOff->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAnimOff->UseVisualStyleBackColor = false;
			this->buttonAnimOff->Click += gcnew System::EventHandler(this, &UnitMain::buttonAnimOff_Click);
			// 
			// buttonAnimOn
			// 
			this->buttonAnimOn->BackColor = System::Drawing::Color::Transparent;
			this->buttonAnimOn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnimOn->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnimOn->ForeColor = System::Drawing::Color::White;
			this->buttonAnimOn->Location = System::Drawing::Point(741, 157);
			this->buttonAnimOn->Name = L"buttonAnimOn";
			this->buttonAnimOn->Size = System::Drawing::Size(92, 30);
			this->buttonAnimOn->TabIndex = 6;
			this->buttonAnimOn->Text = L"Включить";
			this->buttonAnimOn->UseVisualStyleBackColor = false;
			this->buttonAnimOn->Click += gcnew System::EventHandler(this, &UnitMain::buttonAnimOn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(798, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 15);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Анимация:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(653, 270);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(274, 198);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(650, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 15);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Информация:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Black;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Созвездие Лебедь", L"Денеб", L"Альбирео", L"Садр",
					L"Дженах", L"Дельта Лебедя", L"Йота Лебедя", L"Каппа Лебедя", L"Дзета Лебедя", L"Эта Лебедя", L"61 Лебедя", L"Тау Лебедя"
			});
			this->comboBox1->Location = System::Drawing::Point(741, 241);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(186, 23);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UnitMain::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(207, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Денеб";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(293, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Садр";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(381, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 15);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Эта Лебедя";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(168, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 15);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Дженах";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(540, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 15);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Каппа Лебедя";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(514, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 15);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Йота Лебедя";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(447, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 15);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Дельта Лебедя";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(505, 372);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 15);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Альбирео";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(23, 424);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 15);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Дзета Лебедя";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(58, 231);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 15);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Тау Лебедя";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(293, 94);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(71, 15);
			this->label13->TabIndex = 25;
			this->label13->Text = L"61 Лебедя";
			// 
			// colorDialog1
			// 
			this->colorDialog1->Color = System::Drawing::Color::White;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &UnitMain::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &UnitMain::timer2_Tick);
			// 
			// UnitMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(939, 482);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnimOn);
			this->Controls->Add(this->buttonAnimOff);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonStarsColor);
			this->Controls->Add(this->buttonLinesColor);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(955, 520);
			this->MinimumSize = System::Drawing::Size(955, 520);
			this->Name = L"UnitMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Созвездие Лебедь";
			this->MinimumSizeChanged += gcnew System::EventHandler(this, &UnitMain::UnitMain_MinimumSizeChanged);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UnitMain::UnitMain_FormClosing);
			this->Shown += gcnew System::EventHandler(this, &UnitMain::UnitMain_Shown);
			this->SizeChanged += gcnew System::EventHandler(this, &UnitMain::UnitMain_SizeChanged);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UnitMain::UnitMain_Paint);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			UnitAbout^ form2 = gcnew UnitAbout;
			form2->ShowDialog();
}

void Stars(){
			Graphics^ g = Graphics::FromHwnd(this->Handle);

			Pen^ whPen = gcnew Pen(Color::White);
			whPen->Width = 6;

			g->DrawEllipse(whPen, 178, 353, 6, 6);  // nedoleft 
			g->DrawEllipse(whPen, 448, 160, 6, 6);  // nedoright
			g->DrawEllipse(whPen, 500, 40, 6, 6);   // nedotop  
			g->DrawEllipse(whPen, 520, 30, 6, 6);   // top   
			g->DrawEllipse(whPen, 56, 408, 6, 6);   // down
			g->DrawEllipse(whPen, 346, 118, 6, 6);  // right 
			g->DrawEllipse(whPen, 154, 224, 6, 6);  // left
			g->DrawEllipse(whPen, 232, 165, 6, 6);  // head
			g->DrawEllipse(whPen, 296, 240, 6, 6);  // center
			g->DrawEllipse(whPen, 384, 304, 6, 6);  // hvost1
			g->DrawEllipse(whPen, 496, 392, 6, 6);  // hvost2
}

void Lines(){
			Graphics^ g = Graphics::FromHwnd(this->Handle);

			Pen^ whPen = gcnew Pen(Color::White);
			whPen->Width = 2;

			g->DrawLine(whPen, 237, 170, 301, 245);  // head to center
			g->DrawLine(whPen, 301, 245, 389, 309);  // center to hvost1
			g->DrawLine(whPen, 389, 309, 501, 397);  // hvost1 to hvost2
			g->DrawLine(whPen, 349, 121, 235, 168);  // head to right  
			g->DrawLine(whPen, 157, 227, 235, 168);  // head to left    
			g->DrawLine(whPen, 59, 411, 157, 227);   // left to down  
			g->DrawLine(whPen, 181, 356, 59, 411);   // nedoleft to down  
			g->DrawLine(whPen, 181, 356, 300, 243);  // nedoleft to center 
			g->DrawLine(whPen, 349, 121, 503, 43);   // right nedotop  
			g->DrawLine(whPen, 451, 163, 503, 43);   // nedoright to nedotop 
			g->DrawLine(whPen, 523, 33, 503, 43);    // top to nedotop   
			g->DrawLine(whPen, 451, 163, 300, 243);  // nedoright to center
}
private: System::Void UnitMain_Shown(System::Object^  sender, System::EventArgs^  e) {
			 Graphics^ g = Graphics::FromHwnd(this->Handle);
			 Pen^ nPen = gcnew Pen(Color::White);

			 nPen->Width = 2;

			 g->DrawLine(nPen, 237, 170, 301, 245);  // head to center
			 g->DrawLine(nPen, 301, 245, 389, 309);  // center to hvost1
			 g->DrawLine(nPen, 389, 309, 501, 397);  // hvost1 to hvost2
			 g->DrawLine(nPen, 349, 121, 235, 168);  // head to right  
			 g->DrawLine(nPen, 157, 227, 235, 168);  // head to left    
			 g->DrawLine(nPen, 59, 411, 157, 227);   // left to down  
			 g->DrawLine(nPen, 181, 356, 59, 411);   // nedoleft to down  
			 g->DrawLine(nPen, 181, 356, 300, 243);  // nedoleft to center 
			 g->DrawLine(nPen, 349, 121, 503, 43);   // right nedotop  
			 g->DrawLine(nPen, 451, 163, 503, 43);   // nedoright to nedotop 
			 g->DrawLine(nPen, 523, 33, 503, 43);    // top to nedotop   
			 g->DrawLine(nPen, 451, 163, 300, 243);  // nedoright to center

			 nPen->Width = 6;

			 g->DrawEllipse(nPen, 178, 353, 6, 6);  // nedoleft 
			 g->DrawEllipse(nPen, 448, 160, 6, 6);  // nedoright
			 g->DrawEllipse(nPen, 500, 40, 6, 6);   // nedotop  
			 g->DrawEllipse(nPen, 520, 30, 6, 6);   // top   
			 g->DrawEllipse(nPen, 56, 408, 6, 6);   // down
			 g->DrawEllipse(nPen, 346, 118, 6, 6);  // right 
			 g->DrawEllipse(nPen, 154, 224, 6, 6);  // left
			 g->DrawEllipse(nPen, 232, 165, 6, 6);  // head
			 g->DrawEllipse(nPen, 296, 240, 6, 6);  // center
			 g->DrawEllipse(nPen, 384, 304, 6, 6);  // hvost1
			 g->DrawEllipse(nPen, 496, 392, 6, 6);  // hvost2

			 colorDialog1->Color = Color::White;
			 colorDialog2->Color = Color::White;
}
private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		    Stars();
		    Lines();
}
private: System::Void помощьВИспользованииToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			UnitHelp^ form3 = gcnew UnitHelp;
			form3->ShowDialog();
}
private: System::Void buttonStarsColor_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 Graphics^ g = Graphics::FromHwnd(this->Handle);
				 Pen^ newPen = gcnew Pen(colorDialog1->Color);
				 newPen->Width = 6;

				 g->DrawEllipse(newPen, 178, 353, 6, 6);  // nedoleft 
				 g->DrawEllipse(newPen, 448, 160, 6, 6);  // nedoright
				 g->DrawEllipse(newPen, 500, 40, 6, 6);   // nedotop  
				 g->DrawEllipse(newPen, 520, 30, 6, 6);   // top   
				 g->DrawEllipse(newPen, 56, 408, 6, 6);   // down
				 g->DrawEllipse(newPen, 346, 118, 6, 6);  // right 
				 g->DrawEllipse(newPen, 154, 224, 6, 6);  // left
				 g->DrawEllipse(newPen, 232, 165, 6, 6);  // head
				 g->DrawEllipse(newPen, 296, 240, 6, 6);  // center
				 g->DrawEllipse(newPen, 384, 304, 6, 6);  // hvost1
				 g->DrawEllipse(newPen, 496, 392, 6, 6);  // hvost2

			 }
}
private: System::Void buttonLinesColor_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (colorDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 Graphics^ g = Graphics::FromHwnd(this->Handle);
				 Pen^ newPen = gcnew Pen(colorDialog2->Color);
				 newPen->Width = 2;

				 g->DrawLine(newPen, 237, 170, 301, 245);  // head to center
				 g->DrawLine(newPen, 301, 245, 389, 309);  // center to hvost1
				 g->DrawLine(newPen, 389, 309, 501, 397);  // hvost1 to hvost2
				 g->DrawLine(newPen, 349, 121, 235, 168);  // head to right  
				 g->DrawLine(newPen, 157, 227, 235, 168);  // head to left    
				 g->DrawLine(newPen, 59, 411, 157, 227);   // left to down  
				 g->DrawLine(newPen, 181, 356, 59, 411);   // nedoleft to down  
				 g->DrawLine(newPen, 181, 356, 300, 243);  // nedoleft to center 
				 g->DrawLine(newPen, 349, 121, 503, 43);   // right nedotop  
				 g->DrawLine(newPen, 451, 163, 503, 43);   // nedoright to nedotop 
				 g->DrawLine(newPen, 523, 33, 503, 43);    // top to nedotop   
				 g->DrawLine(newPen, 451, 163, 300, 243);  // nedoright to center

			 }

			 Graphics^ g = Graphics::FromHwnd(this->Handle);
			 Pen^ newPen = gcnew Pen(colorDialog1->Color);
			 newPen->Width = 6;

			 g->DrawEllipse(newPen, 178, 353, 6, 6);  // nedoleft 
			 g->DrawEllipse(newPen, 448, 160, 6, 6);  // nedoright
			 g->DrawEllipse(newPen, 500, 40, 6, 6);   // nedotop  
			 g->DrawEllipse(newPen, 520, 30, 6, 6);   // top   
			 g->DrawEllipse(newPen, 56, 408, 6, 6);   // down
			 g->DrawEllipse(newPen, 346, 118, 6, 6);  // right 
			 g->DrawEllipse(newPen, 154, 224, 6, 6);  // left
			 g->DrawEllipse(newPen, 232, 165, 6, 6);  // head
			 g->DrawEllipse(newPen, 296, 240, 6, 6);  // center
			 g->DrawEllipse(newPen, 384, 304, 6, 6);  // hvost1
			 g->DrawEllipse(newPen, 496, 392, 6, 6);  // hvost2

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 Bitmap^ bitmap = gcnew Bitmap(648, 520);

				 Graphics^ gr = Graphics::FromImage(bitmap);
				 gr->CopyFromScreen(this->Left + 10, this->Top + 48, 0, 0, System::Drawing::Size(650, 450));
				 bitmap->Save(saveFileDialog1->FileName);
			 }
}
private: System::Void UnitMain_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e){
			 
}
private: System::Void buttonAnimOn_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Enabled = true;
}
private: System::Void buttonAnimOff_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Enabled = false;
}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 Random^ rand = gcnew Random;
			 Graphics^ g = Graphics::FromHwnd(this->Handle);

			 Pen^ linesPen = gcnew Pen(Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255));
			 linesPen->Width = 2;

			 g->DrawLine(linesPen, 237, 170, 301, 245);  // head to center
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 301, 245, 389, 309);  // center to hvost1
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 389, 309, 501, 397);  // hvost1 to hvost2
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 349, 121, 235, 168);  // head to right  
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 157, 227, 235, 168);  // head to left
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 59, 411, 157, 227);   // left to down 
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 181, 356, 59, 411);   // nedoleft to down  
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 181, 356, 300, 243);  // nedoleft to center 
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 349, 121, 503, 43);   // right nedotop  
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 451, 163, 503, 43);   // nedoright to nedotop 
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 523, 33, 503, 43);    // top to nedotop   
			 linesPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawLine(linesPen, 451, 163, 300, 243);  // nedoright to center
 
			
			 Pen^ newPen = gcnew Pen(Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255));
			 newPen->Width = 6;

			 g->DrawEllipse(newPen, 178, 353, 6, 6);  // nedoleft 
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 448, 160, 6, 6);  // nedoright
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 500, 40, 6, 6);   // nedotop  
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 520, 30, 6, 6);   // top 
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 56, 408, 6, 6);   // down
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 346, 118, 6, 6);  // right 
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 154, 224, 6, 6);  // left
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 232, 165, 6, 6);  // head
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 296, 240, 6, 6);  // center
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 384, 304, 6, 6);  // hvost1
			 newPen->Color = Color::FromArgb(rand->Next() % 255, rand->Next() % 255, rand->Next() % 255);
			 g->DrawEllipse(newPen, 496, 392, 6, 6);  // hvost2

			 colorDialog1->Color = Color::White;
			 colorDialog2->Color = Color::White;
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 switch (comboBox1->SelectedIndex)
			 {
			 case 0:
				 richTextBox1->Text = System::IO::File::ReadAllText("Лебедь.txt", System::Text::Encoding::Default);
				 break;
			 case 1:
				 richTextBox1->Text = System::IO::File::ReadAllText("Денеб.txt", System::Text::Encoding::Default);
				 break;
			 case 2:
				 richTextBox1->Text = System::IO::File::ReadAllText("Альбирео.txt", System::Text::Encoding::Default);
				 break;
			 case 3:
				 richTextBox1->Text = System::IO::File::ReadAllText("Садр.txt", System::Text::Encoding::Default);
				 break;
			 case 4:
				 richTextBox1->Text = System::IO::File::ReadAllText("Дженах.txt", System::Text::Encoding::Default);
				 break;
			 case 5:
				 richTextBox1->Text = System::IO::File::ReadAllText("Дельта Лебедя.txt", System::Text::Encoding::Default);
				 break;
			 case 6:
				 richTextBox1->Text = System::IO::File::ReadAllText("Йота Лебедя.txt", System::Text::Encoding::Default);
				 break;
			 case 7:
				 richTextBox1->Text = System::IO::File::ReadAllText("Каппа Лебедя.txt", System::Text::Encoding::Default);
				 break;
			 case 8:
				 richTextBox1->Text = System::IO::File::ReadAllText("Дзета Лебедя.txt", System::Text::Encoding::Default);
				 break;
			 case 9:
				 richTextBox1->Text = System::IO::File::ReadAllText("Эта Лебедя.txt", System::Text::Encoding::Default);
				 break;
			 case 10:
				 richTextBox1->Text = System::IO::File::ReadAllText("61 Лебедя.txt", System::Text::Encoding::Default);
				 break;
			 case 11:
				 richTextBox1->Text = System::IO::File::ReadAllText("Тау Лебедя.txt", System::Text::Encoding::Default);
				 break;
			 default:
				 break;
			 }
}
private: System::Void помощьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void UnitMain_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 System::Windows::Forms::DialogResult result;

			 result = MessageBox::Show("Закрыть приложение?", "Сообщение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			 if (result == Windows::Forms::DialogResult::Yes)
			 {
				 return;
			 }
			 else
			 {
				 e->Cancel = true;
			 }
}
private: System::Void UnitMain_MinimumSizeChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void UnitMain_SizeChanged(System::Object^  sender, System::EventArgs^  e) {

			 Graphics^ g = Graphics::FromHwnd(this->Handle);
			 Pen^ nPen = gcnew Pen(colorDialog2->Color);

			 nPen->Width = 2;

			 g->DrawLine(nPen, 237, 170, 301, 245);  // head to center
			 g->DrawLine(nPen, 301, 245, 389, 309);  // center to hvost1
			 g->DrawLine(nPen, 389, 309, 501, 397);  // hvost1 to hvost2
			 g->DrawLine(nPen, 349, 121, 235, 168);  // head to right  
			 g->DrawLine(nPen, 157, 227, 235, 168);  // head to left    
			 g->DrawLine(nPen, 59, 411, 157, 227);   // left to down  
			 g->DrawLine(nPen, 181, 356, 59, 411);   // nedoleft to down  
			 g->DrawLine(nPen, 181, 356, 300, 243);  // nedoleft to center 
			 g->DrawLine(nPen, 349, 121, 503, 43);   // right nedotop  
			 g->DrawLine(nPen, 451, 163, 503, 43);   // nedoright to nedotop 
			 g->DrawLine(nPen, 523, 33, 503, 43);    // top to nedotop   
			 g->DrawLine(nPen, 451, 163, 300, 243);  // nedoright to center

			 Pen^ sPen = gcnew Pen(colorDialog1->Color);
			 sPen->Width = 6;

			 g->DrawEllipse(sPen, 178, 353, 6, 6);  // nedoleft 
			 g->DrawEllipse(sPen, 448, 160, 6, 6);  // nedoright
			 g->DrawEllipse(sPen, 500, 40, 6, 6);   // nedotop  
			 g->DrawEllipse(sPen, 520, 30, 6, 6);   // top   
			 g->DrawEllipse(sPen, 56, 408, 6, 6);   // down
			 g->DrawEllipse(sPen, 346, 118, 6, 6);  // right 
			 g->DrawEllipse(sPen, 154, 224, 6, 6);  // left
			 g->DrawEllipse(sPen, 232, 165, 6, 6);  // head
			 g->DrawEllipse(sPen, 296, 240, 6, 6);  // center
			 g->DrawEllipse(sPen, 384, 304, 6, 6);  // hvost1
			 g->DrawEllipse(sPen, 496, 392, 6, 6);  // hvost2
}
};
}
