#pragma once
double xn, xk, xh, x, y, a, ymax, ymin, yt;

int i, k, j;
int h;
int m;
#include <math.h>
#include "MyForm1.h"
namespace Project5 {

	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ цветФонаЯчеекToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ высотаСтрокаэToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ графикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ширинаСтолбцовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ параметрыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветШрифтаЗаголовкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветГрафикаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветФонаГрафикаToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаЯчеекToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->высотаСтрокаэToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ширинаСтолбцовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветШрифтаЗаголовкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->графикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветГрафикаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаГрафикаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(487, 513);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Прокофьев Никита  21-КФ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->видToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1347, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьToolStripMenuItem,
					this->выходToolStripMenuItem1
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem1
			// 
			this->выходToolStripMenuItem1->Name = L"выходToolStripMenuItem1";
			this->выходToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->выходToolStripMenuItem1->Text = L"Выход";
			this->выходToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem1_Click);
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->таблицаToolStripMenuItem,
					this->графикToolStripMenuItem
			});
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->видToolStripMenuItem->Text = L"Вид";
			// 
			// таблицаToolStripMenuItem
			// 
			this->таблицаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->colorToolStripMenuItem,
					this->цветФонаЯчеекToolStripMenuItem, this->высотаСтрокаэToolStripMenuItem, this->ширинаСтолбцовToolStripMenuItem, this->параметрыToolStripMenuItem,
					this->цветШрифтаЗаголовкаToolStripMenuItem
			});
			this->таблицаToolStripMenuItem->Name = L"таблицаToolStripMenuItem";
			this->таблицаToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->таблицаToolStripMenuItem->Text = L"Таблица";
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->colorToolStripMenuItem->Text = L"Цвет текста";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::colorToolStripMenuItem_Click);
			// 
			// цветФонаЯчеекToolStripMenuItem
			// 
			this->цветФонаЯчеекToolStripMenuItem->Name = L"цветФонаЯчеекToolStripMenuItem";
			this->цветФонаЯчеекToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->цветФонаЯчеекToolStripMenuItem->Text = L"Цвет фона ячеек";
			this->цветФонаЯчеекToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветФонаЯчеекToolStripMenuItem_Click);
			// 
			// высотаСтрокаэToolStripMenuItem
			// 
			this->высотаСтрокаэToolStripMenuItem->Name = L"высотаСтрокаэToolStripMenuItem";
			this->высотаСтрокаэToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->высотаСтрокаэToolStripMenuItem->Text = L"Высота строк";
			this->высотаСтрокаэToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::высотаСтрокаэToolStripMenuItem_Click);
			// 
			// ширинаСтолбцовToolStripMenuItem
			// 
			this->ширинаСтолбцовToolStripMenuItem->Name = L"ширинаСтолбцовToolStripMenuItem";
			this->ширинаСтолбцовToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->ширинаСтолбцовToolStripMenuItem->Text = L"Ширина столбцов";
			this->ширинаСтолбцовToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ширинаСтолбцовToolStripMenuItem_Click);
			// 
			// параметрыToolStripMenuItem
			// 
			this->параметрыToolStripMenuItem->Name = L"параметрыToolStripMenuItem";
			this->параметрыToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->параметрыToolStripMenuItem->Text = L"Параметры шрифта заголовка";
			this->параметрыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::параметрыToolStripMenuItem_Click);
			// 
			// цветШрифтаЗаголовкаToolStripMenuItem
			// 
			this->цветШрифтаЗаголовкаToolStripMenuItem->Name = L"цветШрифтаЗаголовкаToolStripMenuItem";
			this->цветШрифтаЗаголовкаToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->цветШрифтаЗаголовкаToolStripMenuItem->Text = L"Цвет шрифта заголовка";
			this->цветШрифтаЗаголовкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветШрифтаЗаголовкаToolStripMenuItem_Click);
			// 
			// графикToolStripMenuItem
			// 
			this->графикToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветГрафикаToolStripMenuItem,
					this->цветФонаГрафикаToolStripMenuItem
			});
			this->графикToolStripMenuItem->Name = L"графикToolStripMenuItem";
			this->графикToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->графикToolStripMenuItem->Text = L"График";
			// 
			// цветГрафикаToolStripMenuItem
			// 
			this->цветГрафикаToolStripMenuItem->Name = L"цветГрафикаToolStripMenuItem";
			this->цветГрафикаToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->цветГрафикаToolStripMenuItem->Text = L"Цвет графика";
			this->цветГрафикаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветГрафикаToolStripMenuItem_Click);
			// 
			// цветФонаГрафикаToolStripMenuItem
			// 
			this->цветФонаГрафикаToolStripMenuItem->Name = L"цветФонаГрафикаToolStripMenuItem";
			this->цветФонаГрафикаToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->цветФонаГрафикаToolStripMenuItem->Text = L"Цвет фона графика";
			this->цветФонаГрафикаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветФонаГрафикаToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Algerian", 18));
			this->button1->Location = System::Drawing::Point(1200, 503);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(22, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1294, 450);
			this->tabControl1->TabIndex = 3;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1286, 421);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ввод данных";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->textBox4->Location = System::Drawing::Point(453, 281);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(299, 34);
			this->textBox4->TabIndex = 8;
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->textBox3->Location = System::Drawing::Point(453, 216);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(299, 34);
			this->textBox3->TabIndex = 7;
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->textBox2->Location = System::Drawing::Point(453, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(299, 34);
			this->textBox2->TabIndex = 6;
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->textBox1->Location = System::Drawing::Point(453, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(299, 34);
			this->textBox1->TabIndex = 5;
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->label6->Location = System::Drawing::Point(95, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(307, 22);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Введите положительное значения А=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->label5->Location = System::Drawing::Point(95, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 22);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Введите шаг ХН=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->label4->Location = System::Drawing::Point(95, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(267, 22);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Введите конечное значения ХК=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Algerian", 12));
			this->label3->Location = System::Drawing::Point(95, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(280, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Введите начальное значения ХN=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 18));
			this->label2->Location = System::Drawing::Point(461, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 34);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ввод данных промежутка";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Black;
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1286, 421);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Таблица данных промежутка";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(878, 295);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(205, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(878, 139);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(205, 22);
			this->textBox5->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Algerian", 10));
			this->label9->Location = System::Drawing::Point(879, 234);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(204, 19);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Минимальное значение функции";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Algerian", 10));
			this->label8->Location = System::Drawing::Point(874, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(209, 19);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Максимальное значение функции";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 76);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(652, 321);
			this->dataGridView1->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Algerian", 18));
			this->label7->Location = System::Drawing::Point(16, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(658, 34);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Таблица значений функиции на промежутке[xn;xk]";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Black;
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1286, 421);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"График функции на промежутке ";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1290, 425);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1347, 566);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Lime;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Время узнать, глубока ли кроличья нора.";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void высотаСтрокаэToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f = gcnew MyForm1();
		this->Hide(); f -> ShowDialog(); this -> Show();
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			DataGridViewRow^ row = dataGridView1->Rows[i];
			row->Height = h;
		}
	}

private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void выходToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	double xn, xk, xh, x, y, a, ymax, ymin, yt;
	int n, i;
	Series^ plot1 = chart1->Series[0];
	plot1->Points->Clear();
	if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3 -> Text != "") && (textBox4->Text != "")) {
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		a = Convert::ToDouble(textBox4->Text);

		if ((xn >= xk) || (xh > (xk - xn))) {
			MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных", MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		}
		else
		{
			x = xn;
			dataGridView1->Columns->Clear();
			//Заполнение DGView столбцами 
			dataGridView1->ColumnCount = 2;

//Заполнение DGView строками 
dataGridView1->Rows->Add(ceil((xk-xn) / xh) + 1); 
dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(" x");
dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y");
	i = 1; x = xn; ymax = -1.8e307; ymin = 1.8e307; 
	while(x <= xk)
{
	if (x <= 0) { y = 2 * sqrt(x*x*x) * sin(x*x*x); }
	else
		if (x <= a) { y = (x+1)*(x+1)*cos(x*x*x); }
		else
			if (x > a) { y = sqrt(x*x*x*x+2)+sin(x*x); }
	plot1->Points->AddXY(x, y);
	dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
	//переменной yt присваивает округленное до двух знаков после запятой значение у
	yt = ceil(y * 100) / 100;
	//Вывод во втором столбце таблицы значение функции
	dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
	//находит максимальное и минимальное значение и округляет до двух знаков после запятой 
	if (y > ymax) ymax = ceil(y * 100) / 100;
	if (y < ymin) ymin = ceil(y * 100) / 100;
	x = x + xh;
	i++;
}
		}
		//выводит в компоненты textbox максимальное и минимальное значение функции
		textBox5->Text = Convert::ToString(ymax);
		textBox6->Text = Convert::ToString(ymin);
	}
	else
	{
		MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",MessageBoxButtons::OK,MessageBoxIcon::Exclamation );}
}
private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle->ForeColor = colorDialog1 -> Color;
	}
}
private: System::Void цветФонаЯчеекToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle -> BackColor = colorDialog1->Color;
	}
}
private: System::Void ширинаСтолбцовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f = gcnew MyForm1();
	this->Hide(); f -> ShowDialog(); this -> Show();
	for (int i = 0; i < dataGridView1->ColumnCount; i++)
	{
		DataGridViewColumn^ column = dataGridView1->Columns[i];
		column->Width = m;
	}
}
private: System::Void параметрыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fontDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		label6->Font = fontDialog1->Font;
	}
}
private: System::Void цветШрифтаЗаголовкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		label6->ForeColor = colorDialog1->Color;
	}
}
private: System::Void цветГрафикаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		plot1->Color = colorDialog1->Color;
}
private: System::Void цветФонаГрафикаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		chart1 -> BackColor = colorDialog1->Color;
	}
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text Files|*.txt";
	saveFileDialog1->FilterIndex = 2; saveFileDialog1 -> RestoreDirectory = true; 
	if (saveFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK)
	{
		StreamWriter^ pwriter = gcnew StreamWriter(saveFileDialog1 -> FileName);
		for (int i = 0; i < dataGridView1->RowCount; i++) pwriter -> WriteLine(dataGridView1->Rows[i]->Cells[0]->Value->ToString() + "|"+dataGridView1->Rows[i]->Cells[1]->Value->ToString());
			pwriter->Close();
	}
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем 
	t = 0;
	//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-') t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox2->Text;
	l = str->Length;
	//индекс символа, с которым работаем 
	t = 0;
	//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-') t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox2->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox3->Text;
	l = str->Length;
	//индекс символа, с которым работаем 
	t = 0;
	//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-') t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox3->Focus();
	}
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox4->Text;
	l = str->Length;
	//индекс символа, с которым работаем 
	t = 0;
	//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-') t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox4->Focus();
	}
}
};
}
