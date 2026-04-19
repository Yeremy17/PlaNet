#pragma once
#include "Grafo.h"
#include "CargadorRutas.h"
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




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::GroupBox^ GrbNuevaRuta;
	private: System::Windows::Forms::Button^ BtnAñadir;
	private: System::Windows::Forms::Label^ LblOrigenN;
	private: System::Windows::Forms::Label^ LblDestinoN;
	private: System::Windows::Forms::ComboBox^ CmbDestinoN;
	private: System::Windows::Forms::ComboBox^ CmbOrigenN;
	private: System::Windows::Forms::TextBox^ TxtResultadoN;



		   Grafo* grafo;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GrbConsultas = (gcnew System::Windows::Forms::GroupBox());
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
			this->GrbConsultas->SuspendLayout();
			this->GrbNuevaRuta->SuspendLayout();
			this->SuspendLayout();
			// 
			// GrbConsultas
			// 
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
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1170, 706);
			this->Controls->Add(this->GrbNuevaRuta);
			this->Controls->Add(this->GrbConsultas);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->GrbConsultas->ResumeLayout(false);
			this->GrbConsultas->PerformLayout();
			this->GrbNuevaRuta->ResumeLayout(false);
			this->GrbNuevaRuta->PerformLayout();
			this->ResumeLayout(false);

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
		}
		else
		{
			TxtResultado->Text += "No existe vuelo con una escala.\r\n";
		
		}


		if (grafo->existeDosEscalas(origen, destino))
		{
			TxtResultado->Text += "Si existe vuelo con dos escalas.\r\n";
			TxtResultado->Text += msclr::interop::marshal_as<String^>(grafo->obtenerRutaDosEscalas(origen, destino));
		}
		else
		{
			TxtResultado->Text += "No existe vuelo con dos escalas.\r\n";
		
		}



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



		std::string origenN = msclr::interop::marshal_as<std::string>(CmbOrigenN->SelectedItem->ToString());
		std::string destinoN = msclr::interop::marshal_as<std::string>(CmbDestinoN->SelectedItem->ToString());


		grafo->agregarRuta(origenN, destinoN);

		
		TxtResultadoN->Text = "Ruta agregada con exito.";




	}
};
}