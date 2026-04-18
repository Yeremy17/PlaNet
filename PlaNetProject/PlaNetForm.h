#pragma once
#include "MenuPrincipal.h"
namespace PlaNetProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlaNetForm
	/// </summary>
	public ref class PlaNetForm : public System::Windows::Forms::Form
	{
	public:
		PlaNetForm(void)
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
		~PlaNetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LblPla;
	protected:
	private: System::Windows::Forms::Label^ LblNet;
	private: System::Windows::Forms::Label^ LblSub;
	private: System::Windows::Forms::Button^ BtnEntrar;
	private: System::Windows::Forms::Button^ BtnSalir;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlaNetForm::typeid));
			this->LblPla = (gcnew System::Windows::Forms::Label());
			this->LblNet = (gcnew System::Windows::Forms::Label());
			this->LblSub = (gcnew System::Windows::Forms::Label());
			this->BtnEntrar = (gcnew System::Windows::Forms::Button());
			this->BtnSalir = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// LblPla
			// 
			this->LblPla->AutoSize = true;
			this->LblPla->BackColor = System::Drawing::SystemColors::Control;
			this->LblPla->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblPla->ForeColor = System::Drawing::Color::Green;
			this->LblPla->Location = System::Drawing::Point(285, 59);
			this->LblPla->Name = L"LblPla";
			this->LblPla->Size = System::Drawing::Size(115, 60);
			this->LblPla->TabIndex = 0;
			this->LblPla->Text = L"Pla";
			// 
			// LblNet
			// 
			this->LblNet->AutoSize = true;
			this->LblNet->BackColor = System::Drawing::SystemColors::Control;
			this->LblNet->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblNet->Location = System::Drawing::Point(385, 59);
			this->LblNet->Name = L"LblNet";
			this->LblNet->Size = System::Drawing::Size(115, 60);
			this->LblNet->TabIndex = 1;
			this->LblNet->Text = L"Net";
			// 
			// LblSub
			// 
			this->LblSub->AutoSize = true;
			this->LblSub->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblSub->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LblSub->Location = System::Drawing::Point(241, 134);
			this->LblSub->Name = L"LblSub";
			this->LblSub->Size = System::Drawing::Size(368, 23);
			this->LblSub->TabIndex = 2;
			this->LblSub->Text = L"Sistema de analisis de rutas aereas";
			// 
			// BtnEntrar
			// 
			this->BtnEntrar->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEntrar->ForeColor = System::Drawing::Color::Black;
			this->BtnEntrar->Location = System::Drawing::Point(342, 239);
			this->BtnEntrar->Name = L"BtnEntrar";
			this->BtnEntrar->Size = System::Drawing::Size(148, 50);
			this->BtnEntrar->TabIndex = 3;
			this->BtnEntrar->Text = L"Iniciar Busqueda";
			this->BtnEntrar->UseVisualStyleBackColor = true;
			this->BtnEntrar->Click += gcnew System::EventHandler(this, &PlaNetForm::BtnEntrar_Click);
			// 
			// BtnSalir
			// 
			this->BtnSalir->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnSalir->ForeColor = System::Drawing::Color::Black;
			this->BtnSalir->Location = System::Drawing::Point(342, 311);
			this->BtnSalir->Name = L"BtnSalir";
			this->BtnSalir->Size = System::Drawing::Size(148, 50);
			this->BtnSalir->TabIndex = 4;
			this->BtnSalir->Text = L"Salir";
			this->BtnSalir->UseVisualStyleBackColor = true;
			this->BtnSalir->Click += gcnew System::EventHandler(this, &PlaNetForm::BtnSalir_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(490, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(86, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// PlaNetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 499);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->BtnSalir);
			this->Controls->Add(this->BtnEntrar);
			this->Controls->Add(this->LblSub);
			this->Controls->Add(this->LblNet);
			this->Controls->Add(this->LblPla);
			this->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PlaNetForm";
			this->Text = L"PlaNetForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void BtnEntrar_Click(System::Object^ sender, System::EventArgs^ e) {


		MenuPrincipal^ menu = gcnew MenuPrincipal();
		menu->Show();
		this->Hide();

	}
	private: System::Void BtnSalir_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();


	}
	};
}