#pragma once

#define IServiceProvider IWindowsServiceProvider 
#include <windows.h> 
#undef IServiceProvider


#include "Grafo.h"
#include "CargadorRutas.h"
#include "Circulo.h"
#include "Red.h"
#include <msclr/marshal_cppstd.h>
namespace PlaNetProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			grafo = new Grafo(59);
			CargadorRutas::cargarTodo(grafo);
			red = gcnew Red();
			string origenN;
			string destinoN;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GrbConsultas;
	protected:
	private: System::Windows::Forms::Label^ LblDestino;
	private: System::Windows::Forms::Label^ LblOrigen;
	private: System::Windows::Forms::ComboBox^ CmbOrigen;

	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::ComboBox^ CmbDestino;
	private: System::Windows::Forms::TextBox^ TxtResultado;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::GroupBox^ GrbNuevaRuta;
	private: System::Windows::Forms::Button^ BtnAñadir;
	private: System::Windows::Forms::Label^ LblOrigenN;
	private: System::Windows::Forms::Label^ LblDestinoN;
	private: System::Windows::Forms::ComboBox^ CmbDestinoN;
	private: System::Windows::Forms::ComboBox^ CmbOrigenN;
	private: System::Windows::Forms::TextBox^ TxtResultadoN;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;

		   int count1 = 0, count2 = 0;

		   Grafo* grafo;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnDirecto;
	private: System::Windows::Forms::Button^ Btn2Escalas;

	private: System::Windows::Forms::Button^ Btn1Escala;

		   Red^ red;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->GrbConsultas = (gcnew System::Windows::Forms::GroupBox());
			this->Btn2Escalas = (gcnew System::Windows::Forms::Button());
			this->Btn1Escala = (gcnew System::Windows::Forms::Button());
			this->btnDirecto = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxtResultado = (gcnew System::Windows::Forms::TextBox());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->CmbDestino = (gcnew System::Windows::Forms::ComboBox());
			this->CmbOrigen = (gcnew System::Windows::Forms::ComboBox());
			this->LblDestino = (gcnew System::Windows::Forms::Label());
			this->LblOrigen = (gcnew System::Windows::Forms::Label());
			this->GrbNuevaRuta = (gcnew System::Windows::Forms::GroupBox());
			this->TxtResultadoN = (gcnew System::Windows::Forms::TextBox());
			this->BtnAñadir = (gcnew System::Windows::Forms::Button());
			this->LblOrigenN = (gcnew System::Windows::Forms::Label());
			this->LblDestinoN = (gcnew System::Windows::Forms::Label());
			this->CmbDestinoN = (gcnew System::Windows::Forms::ComboBox());
			this->CmbOrigenN = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->GrbConsultas->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->GrbNuevaRuta->SuspendLayout();
			this->SuspendLayout();
			// 
			// GrbConsultas
			// 
			this->GrbConsultas->Controls->Add(this->Btn2Escalas);
			this->GrbConsultas->Controls->Add(this->Btn1Escala);
			this->GrbConsultas->Controls->Add(this->btnDirecto);
			this->GrbConsultas->Controls->Add(this->groupBox1);
			this->GrbConsultas->Controls->Add(this->TxtResultado);
			this->GrbConsultas->Controls->Add(this->BtnBuscar);
			this->GrbConsultas->Controls->Add(this->CmbDestino);
			this->GrbConsultas->Controls->Add(this->CmbOrigen);
			this->GrbConsultas->Controls->Add(this->LblDestino);
			this->GrbConsultas->Controls->Add(this->LblOrigen);
			this->GrbConsultas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GrbConsultas->Location = System::Drawing::Point(25, 28);
			this->GrbConsultas->Name = L"GrbConsultas";
			this->GrbConsultas->Size = System::Drawing::Size(502, 371);
			this->GrbConsultas->TabIndex = 0;
			this->GrbConsultas->TabStop = false;
			this->GrbConsultas->Text = L"Consulta de rutas";
			// 
			// Btn2Escalas
			// 
			this->Btn2Escalas->Location = System::Drawing::Point(366, 300);
			this->Btn2Escalas->Name = L"Btn2Escalas";
			this->Btn2Escalas->Size = System::Drawing::Size(75, 23);
			this->Btn2Escalas->TabIndex = 12;
			this->Btn2Escalas->Text = L"2 Escalas";
			this->Btn2Escalas->UseVisualStyleBackColor = true;
			this->Btn2Escalas->Click += gcnew System::EventHandler(this, &MenuPrincipal::Btn2Escalas_Click);
			// 
			// Btn1Escala
			// 
			this->Btn1Escala->Location = System::Drawing::Point(206, 301);
			this->Btn1Escala->Name = L"Btn1Escala";
			this->Btn1Escala->Size = System::Drawing::Size(75, 23);
			this->Btn1Escala->TabIndex = 11;
			this->Btn1Escala->Text = L"1 Escala";
			this->Btn1Escala->UseVisualStyleBackColor = true;
			this->Btn1Escala->Click += gcnew System::EventHandler(this, &MenuPrincipal::Btn1Escala_Click);
			// 
			// btnDirecto
			// 
			this->btnDirecto->Location = System::Drawing::Point(48, 301);
			this->btnDirecto->Name = L"btnDirecto";
			this->btnDirecto->Size = System::Drawing::Size(75, 23);
			this->btnDirecto->TabIndex = 10;
			this->btnDirecto->Text = L"Directo";
			this->btnDirecto->UseVisualStyleBackColor = true;
			this->btnDirecto->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnDirecto_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(556, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(320, 311);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Consulta de rutas";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(34, 179);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(451, 163);
			this->textBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(143, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar rutas";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
				L"Arequipa", L"Armenia", L"Barcelona", L"Barrancabermeja",
					L"Barranquilla", L"Belice", L"Bogota", L"Bucaramanga", L"Cali", L"Cancun", L"Caracas", L"Cartagena", L"Chiclayo", L"Ciudad de Guatemala",
					L"Ciudad de Mexico", L"Ciudad de Panama", L"Cucuta", L"Cusco", L"Flores", L"Florencia", L"Guayaquil", L"Ibague", L"Iquitos",
					L"Juliaca", L"La Ceiba", L"La Habana", L"Leticia", L"Liberia", L"Lima", L"Londres", L"Madrid", L"Managua", L"Manizales", L"Medellin",
					L"Monteria", L"Neiva", L"Pasto", L"Pereira", L"Piura", L"Popayan", L"Puerto Maldonado", L"Punta Cana", L"Quito", L"Riohacha",
					L"Roatan", L"San Andres", L"San Jose de Costa Rica", L"San Juan", L"San Pedro de Sula", L"San Salvador", L"Santa Marta", L"Santo Domingo",
					L"Tegucigalpa", L"Trujillo", L"Tumaco", L"Valledupar", L"Villavicencio", L"Yopal"
			});
			this->comboBox1->Location = System::Drawing::Point(275, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(144, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->IntegralHeight = false;
			this->comboBox2->ItemHeight = 13;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
				L"Arequipa", L"Armenia", L"Barcelona", L"Barrancabermeja",
					L"Barranquilla", L"Belice", L"Bogota", L"Bucaramanga", L"Cali", L"Cancun", L"Caracas", L"Cartagena", L"Chiclayo", L"Ciudad de Guatemala",
					L"Ciudad de Mexico", L"Ciudad de Panama", L"Cucuta", L"Cusco", L"Flores", L"Florencia", L"Guayaquil", L"Ibague", L"Iquitos",
					L"Juliaca", L"La Ceiba", L"La Habana", L"Leticia", L"Liberia", L"Lima", L"Londres", L"Madrid", L"Managua", L"Manizales", L"Medellin",
					L"Monteria", L"Neiva", L"Pasto", L"Pereira", L"Piura", L"Popayan", L"Puerto Maldonado", L"Punta Cana", L"Quito", L"Riohacha",
					L"Roatan", L"San Andres", L"San Jose de Costa Rica", L"San Juan", L"San Pedro de Sula", L"San Salvador", L"Santa Marta", L"Santo Domingo",
					L"Tegucigalpa", L"Trujillo", L"Tumaco", L"Valledupar", L"Villavicencio", L"Yopal"
			});
			this->comboBox2->Location = System::Drawing::Point(65, 74);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(137, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(272, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ciudad de destino";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ciudad de origen";
			// 
			// TxtResultado
			// 
			this->TxtResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtResultado->Location = System::Drawing::Point(34, 179);
			this->TxtResultado->Multiline = true;
			this->TxtResultado->Name = L"TxtResultado";
			this->TxtResultado->ReadOnly = true;
			this->TxtResultado->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TxtResultado->Size = System::Drawing::Size(451, 163);
			this->TxtResultado->TabIndex = 5;
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Location = System::Drawing::Point(143, 120);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(226, 31);
			this->BtnBuscar->TabIndex = 4;
			this->BtnBuscar->Text = L"Buscar rutas";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &MenuPrincipal::BtnBuscar_Click);
			// 
			// CmbDestino
			// 
			this->CmbDestino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CmbDestino->FormattingEnabled = true;
			this->CmbDestino->IntegralHeight = false;
			this->CmbDestino->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
				L"Arequipa", L"Armenia", L"Barcelona", L"Barrancabermeja",
					L"Barranquilla", L"Belice", L"Bogota", L"Bucaramanga", L"Cali", L"Cancun", L"Caracas", L"Cartagena", L"Chiclayo", L"Ciudad de Guatemala",
					L"Ciudad de Mexico", L"Ciudad de Panama", L"Cucuta", L"Cusco", L"Flores", L"Florencia", L"Guayaquil", L"Ibague", L"Iquitos",
					L"Juliaca", L"La Ceiba", L"La Habana", L"Leticia", L"Liberia", L"Lima", L"Londres", L"Madrid", L"Managua", L"Manizales", L"Medellin",
					L"Monteria", L"Neiva", L"Pasto", L"Pereira", L"Piura", L"Popayan", L"Puerto Maldonado", L"Punta Cana", L"Quito", L"Riohacha",
					L"Roatan", L"San Andres", L"San Jose de Costa Rica", L"San Juan", L"San Pedro de Sula", L"San Salvador", L"Santa Marta", L"Santo Domingo",
					L"Tegucigalpa", L"Trujillo", L"Tumaco", L"Valledupar", L"Villavicencio", L"Yopal"
			});
			this->CmbDestino->Location = System::Drawing::Point(275, 74);
			this->CmbDestino->Name = L"CmbDestino";
			this->CmbDestino->Size = System::Drawing::Size(144, 21);
			this->CmbDestino->TabIndex = 3;
			// 
			// CmbOrigen
			// 
			this->CmbOrigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CmbOrigen->FormattingEnabled = true;
			this->CmbOrigen->IntegralHeight = false;
			this->CmbOrigen->ItemHeight = 13;
			this->CmbOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
				L"Arequipa", L"Armenia", L"Barcelona", L"Barrancabermeja",
					L"Barranquilla", L"Belice", L"Bogota", L"Bucaramanga", L"Cali", L"Cancun", L"Caracas", L"Cartagena", L"Chiclayo", L"Ciudad de Guatemala",
					L"Ciudad de Mexico", L"Ciudad de Panama", L"Cucuta", L"Cusco", L"Flores", L"Florencia", L"Guayaquil", L"Ibague", L"Iquitos",
					L"Juliaca", L"La Ceiba", L"La Habana", L"Leticia", L"Liberia", L"Lima", L"Londres", L"Madrid", L"Managua", L"Manizales", L"Medellin",
					L"Monteria", L"Neiva", L"Pasto", L"Pereira", L"Piura", L"Popayan", L"Puerto Maldonado", L"Punta Cana", L"Quito", L"Riohacha",
					L"Roatan", L"San Andres", L"San Jose de Costa Rica", L"San Juan", L"San Pedro de Sula", L"San Salvador", L"Santa Marta", L"Santo Domingo",
					L"Tegucigalpa", L"Trujillo", L"Tumaco", L"Valledupar", L"Villavicencio", L"Yopal"
			});
			this->CmbOrigen->Location = System::Drawing::Point(65, 74);
			this->CmbOrigen->Name = L"CmbOrigen";
			this->CmbOrigen->Size = System::Drawing::Size(137, 21);
			this->CmbOrigen->TabIndex = 2;
			// 
			// LblDestino
			// 
			this->LblDestino->AutoSize = true;
			this->LblDestino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblDestino->Location = System::Drawing::Point(272, 49);
			this->LblDestino->Name = L"LblDestino";
			this->LblDestino->Size = System::Drawing::Size(133, 16);
			this->LblDestino->TabIndex = 1;
			this->LblDestino->Text = L"Ciudad de destino";
			// 
			// LblOrigen
			// 
			this->LblOrigen->AutoSize = true;
			this->LblOrigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblOrigen->Location = System::Drawing::Point(62, 49);
			this->LblOrigen->Name = L"LblOrigen";
			this->LblOrigen->Size = System::Drawing::Size(126, 16);
			this->LblOrigen->TabIndex = 0;
			this->LblOrigen->Text = L"Ciudad de origen";
			// 
			// GrbNuevaRuta
			// 
			this->GrbNuevaRuta->Controls->Add(this->TxtResultadoN);
			this->GrbNuevaRuta->Controls->Add(this->BtnAñadir);
			this->GrbNuevaRuta->Controls->Add(this->LblOrigenN);
			this->GrbNuevaRuta->Controls->Add(this->LblDestinoN);
			this->GrbNuevaRuta->Controls->Add(this->CmbDestinoN);
			this->GrbNuevaRuta->Controls->Add(this->CmbOrigenN);
			this->GrbNuevaRuta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GrbNuevaRuta->Location = System::Drawing::Point(25, 415);
			this->GrbNuevaRuta->Name = L"GrbNuevaRuta";
			this->GrbNuevaRuta->Size = System::Drawing::Size(502, 279);
			this->GrbNuevaRuta->TabIndex = 6;
			this->GrbNuevaRuta->TabStop = false;
			this->GrbNuevaRuta->Text = L"Agregar nueva ruta";
			// 
			// TxtResultadoN
			// 
			this->TxtResultadoN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtResultadoN->Location = System::Drawing::Point(20, 185);
			this->TxtResultadoN->Multiline = true;
			this->TxtResultadoN->Name = L"TxtResultadoN";
			this->TxtResultadoN->ReadOnly = true;
			this->TxtResultadoN->Size = System::Drawing::Size(465, 58);
			this->TxtResultadoN->TabIndex = 6;
			// 
			// BtnAñadir
			// 
			this->BtnAñadir->Location = System::Drawing::Point(143, 120);
			this->BtnAñadir->Name = L"BtnAñadir";
			this->BtnAñadir->Size = System::Drawing::Size(226, 31);
			this->BtnAñadir->TabIndex = 6;
			this->BtnAñadir->Text = L"Agregar ruta";
			this->BtnAñadir->UseVisualStyleBackColor = true;
			this->BtnAñadir->Click += gcnew System::EventHandler(this, &MenuPrincipal::BtnAñadir_Click);
			// 
			// LblOrigenN
			// 
			this->LblOrigenN->AutoSize = true;
			this->LblOrigenN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblOrigenN->Location = System::Drawing::Point(62, 37);
			this->LblOrigenN->Name = L"LblOrigenN";
			this->LblOrigenN->Size = System::Drawing::Size(126, 16);
			this->LblOrigenN->TabIndex = 6;
			this->LblOrigenN->Text = L"Ciudad de origen";
			// 
			// LblDestinoN
			// 
			this->LblDestinoN->AutoSize = true;
			this->LblDestinoN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblDestinoN->Location = System::Drawing::Point(272, 37);
			this->LblDestinoN->Name = L"LblDestinoN";
			this->LblDestinoN->Size = System::Drawing::Size(133, 16);
			this->LblDestinoN->TabIndex = 7;
			this->LblDestinoN->Text = L"Ciudad de destino";
			// 
			// CmbDestinoN
			// 
			this->CmbDestinoN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CmbDestinoN->FormattingEnabled = true;
			this->CmbDestinoN->IntegralHeight = false;
			this->CmbDestinoN->ItemHeight = 13;
			this->CmbDestinoN->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
				L"Arequipa", L"Armenia", L"Barcelona", L"Barrancabermeja",
					L"Barranquilla", L"Belice", L"Bogota", L"Bucaramanga", L"Cali", L"Cancun", L"Caracas", L"Cartagena", L"Chiclayo", L"Ciudad de Guatemala",
					L"Ciudad de Mexico", L"Ciudad de Panama", L"Cucuta", L"Cusco", L"Flores", L"Florencia", L"Guayaquil", L"Ibague", L"Iquitos",
					L"Juliaca", L"La Ceiba", L"La Habana", L"Leticia", L"Liberia", L"Lima", L"Londres", L"Madrid", L"Managua", L"Manizales", L"Medellin",
					L"Monteria", L"Neiva", L"Pasto", L"Pereira", L"Piura", L"Popayan", L"Puerto Maldonado", L"Punta Cana", L"Quito", L"Riohacha",
					L"Roatan", L"San Andres", L"San Jose de Costa Rica", L"San Juan", L"San Pedro de Sula", L"San Salvador", L"Santa Marta", L"Santo Domingo",
					L"Tegucigalpa", L"Trujillo", L"Tumaco", L"Valledupar", L"Villavicencio", L"Yopal"
			});
			this->CmbDestinoN->Location = System::Drawing::Point(275, 66);
			this->CmbDestinoN->Name = L"CmbDestinoN";
			this->CmbDestinoN->Size = System::Drawing::Size(137, 21);
			this->CmbDestinoN->TabIndex = 6;
			// 
			// CmbOrigenN
			// 
			this->CmbOrigenN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CmbOrigenN->FormattingEnabled = true;
			this->CmbOrigenN->IntegralHeight = false;
			this->CmbOrigenN->ItemHeight = 13;
			this->CmbOrigenN->Items->AddRange(gcnew cli::array< System::Object^  >(58) {
				L"Arequipa", L"Armenia", L"Barcelona", L"Barrancabermeja",
					L"Barranquilla", L"Belice", L"Bogota", L"Bucaramanga", L"Cali", L"Cancun", L"Caracas", L"Cartagena", L"Chiclayo", L"Ciudad de Guatemala",
					L"Ciudad de Mexico", L"Ciudad de Panama", L"Cucuta", L"Cusco", L"Flores", L"Florencia", L"Guayaquil", L"Ibague", L"Iquitos",
					L"Juliaca", L"La Ceiba", L"La Habana", L"Leticia", L"Liberia", L"Lima", L"Londres", L"Madrid", L"Managua", L"Manizales", L"Medellin",
					L"Monteria", L"Neiva", L"Pasto", L"Pereira", L"Piura", L"Popayan", L"Puerto Maldonado", L"Punta Cana", L"Quito", L"Riohacha",
					L"Roatan", L"San Andres", L"San Jose de Costa Rica", L"San Juan", L"San Pedro de Sula", L"San Salvador", L"Santa Marta", L"Santo Domingo",
					L"Tegucigalpa", L"Trujillo", L"Tumaco", L"Valledupar", L"Villavicencio", L"Yopal"
			});
			this->CmbOrigenN->Location = System::Drawing::Point(65, 66);
			this->CmbOrigenN->Name = L"CmbOrigenN";
			this->CmbOrigenN->Size = System::Drawing::Size(137, 21);
			this->CmbOrigenN->TabIndex = 7;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(550, 28);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(570, 650);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Digrafo";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MenuPrincipal::groupBox2_Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1126, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 637);
			this->label3->TabIndex = 8;
			this->label3->Text = resources->GetString(L"label3.Text");
			this->label3->Click += gcnew System::EventHandler(this, &MenuPrincipal::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1278, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 130);
			this->label4->TabIndex = 9;
			this->label4->Text = L"[49] San Pedro de Sula \r\n[50] San Salvador \r\n[51] Santa Marta \r\n[52] Santo Doming"
				L"o \r\n[53] Tegucigalpa \r\n[54] Trujillo \r\n[55] Tumaco \r\n[56] Valledupar \r\n[57] Vill"
				L"avicencio \r\n[58] Yopal\r\n";
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1436, 706);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->GrbNuevaRuta);
			this->Controls->Add(this->GrbConsultas);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->GrbConsultas->ResumeLayout(false);
			this->GrbConsultas->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->GrbNuevaRuta->ResumeLayout(false);
			this->GrbNuevaRuta->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (CmbOrigen->SelectedItem == nullptr || CmbDestino->SelectedItem == nullptr)
		{
			TxtResultado->Text = "Seleccione ciudad de origen y destino.";
			return;
		}

		if (CmbOrigen->SelectedItem == CmbDestino->SelectedItem)
		{
			TxtResultado->Text = "Seleccione ciudades diferentes.";
			return;
		}


		std::string origen = msclr::interop::marshal_as<std::string>(CmbOrigen->SelectedItem->ToString());
		std::string destino = msclr::interop::marshal_as<std::string>(CmbDestino->SelectedItem->ToString());

		if (grafo->existeVueloDirecto(origen, destino))
		{
			TxtResultado->Text = "Si existe vuelo directo.\r\n";
		}
		else
		{
			TxtResultado->Text = "No existe vuelo directo.\r\n";
		}


		if (grafo->existeUnaEscala(origen, destino))
		{
			TxtResultado->Text += "Si existe vuelo con una escala.\r\n";
			TxtResultado->Text += msclr::interop::marshal_as<String^>(grafo->obtenerRutaUnaEscala(origen, destino));
				"\r\n";
		}
		else
		{
			TxtResultado->Text += "No existe vuelo con una escala.\r\n";


		}


		if (grafo->existeDosEscalas(origen, destino))
		{
			TxtResultado->Text += "Si existe vuelo con dos escalas.\r\n";
			TxtResultado->Text += msclr::interop::marshal_as<String^>(grafo->obtenerRutaDosEscalas(origen, destino));
			"\r\n";
		}
		else
		{
			TxtResultado->Text += "No existe vuelo con dos escalas.\r\n";
		}


		if (CmbOrigen->SelectedItem != nullptr && CmbDestino->SelectedItem != nullptr) {
			Graphics^ g = this->groupBox2->CreateGraphics();

		
			red->Conexiones(g);
			red->Generacion(g, this->Font);
		}

		count1 = 0;
		count2 = 0;

	}

	private: System::Void BtnAñadir_Click(System::Object^ sender, System::EventArgs^ e) {


		if (CmbOrigenN->SelectedItem == nullptr || CmbDestinoN->SelectedItem == nullptr)
		{
			TxtResultadoN->Text = "Seleccione ciudad de origen y destino.";
			return;
		}

		if (CmbOrigenN->SelectedItem == CmbDestinoN->SelectedItem)
		{
			TxtResultadoN->Text = "Seleccione ciudades diferentes.";
			return;
		}



		string origenN = msclr::interop::marshal_as<std::string>(CmbOrigenN->SelectedItem->ToString());
		string destinoN = msclr::interop::marshal_as<std::string>(CmbDestinoN->SelectedItem->ToString());


		grafo->agregarRuta(origenN, destinoN);

		
		TxtResultadoN->Text = "Ruta agregada con exito.";

		/*
		Color cLinea = Color::Silver;
		int grosor = 2;
		red->dibujarConexion(g, Arequipa, Lima, cLinea, grosor);
		*/

	}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDirecto_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CmbOrigen->SelectedItem == nullptr || CmbDestino->SelectedItem == nullptr)
	{
		return;
	}

	if (CmbOrigen->SelectedItem == CmbDestino->SelectedItem)
	{
		return;
	}


	string origen = msclr::interop::marshal_as<std::string>(CmbOrigen->SelectedItem->ToString());
	string destino = msclr::interop::marshal_as<std::string>(CmbDestino->SelectedItem->ToString());

	if (grafo->existeVueloDirecto(origen, destino))
	{
		Graphics^ g = this->groupBox2->CreateGraphics();


		red->Conexiones(g);
		red->dibujarConexionita(g, origen, destino, Color::Green, 2);
		red->Generacion(g, this->Font);
	}
	else
	{
		return;
	}


}
private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = this->groupBox2->CreateGraphics();


	red->Conexiones(g);
	red->Generacion(g, this->Font);
}
private: System::Void Btn1Escala_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CmbOrigen->SelectedItem == nullptr || CmbDestino->SelectedItem == nullptr)
	{
		return;
	}

	if (CmbOrigen->SelectedItem == CmbDestino->SelectedItem)
	{
		return;
	}


	string origen = msclr::interop::marshal_as<std::string>(CmbOrigen->SelectedItem->ToString());
	string destino = msclr::interop::marshal_as<std::string>(CmbDestino->SelectedItem->ToString());

	if (grafo->existeUnaEscala(origen, destino))
	{

		Graphics^ g = this->groupBox2->CreateGraphics();
		
		grafo->obtener1Escala(origen,destino);
		
		string escala = grafo->getEscala(count1);

		if (escala == "") {
			count1 = 0;
			escala = grafo->getEscala(count1);
		}
		red->Conexiones(g);
		red->dibujarConexionita(g, origen, escala, Color::Green, 2);
		red->dibujarConexionita(g, escala, destino, Color::Green, 2);
		red->Generacion(g, this->Font);
		count1++;
		if (count1 > 5) {
			count1 = 0;
		}
	}
	else
	{
		return;
	}
}
private: System::Void Btn2Escalas_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CmbOrigen->SelectedItem == nullptr || CmbDestino->SelectedItem == nullptr)
	{
		return;
	}

	if (CmbOrigen->SelectedItem == CmbDestino->SelectedItem)
	{
		return;
	}


	string origen = msclr::interop::marshal_as<std::string>(CmbOrigen->SelectedItem->ToString());
	string destino = msclr::interop::marshal_as<std::string>(CmbDestino->SelectedItem->ToString());

	if (grafo->existeDosEscalas(origen, destino))
	{

		Graphics^ g = this->groupBox2->CreateGraphics();

		grafo->obtener2Escala(origen, destino);

		string escala1 = grafo->getEscalas(0,count2);
		string escala2 = grafo->getEscalas(1,count2);

		if (escala1 == "") {
			count2 = 0;
			escala1 = grafo->getEscalas(0, count2);
			escala2 = grafo->getEscalas(1, count2);
		}
		red->Conexiones(g);
		red->dibujarConexionita(g, origen, escala1, Color::Green, 2);
		red->dibujarConexionita(g, escala1, escala2, Color::Green, 2);
		red->dibujarConexionita(g, escala2, destino, Color::Green, 2);
		red->Generacion(g, this->Font);
		count2++;
		if (count2 > 5) {
			count2 = 0;
		}
	}
	else
	{
		return;
	}
}
};
}