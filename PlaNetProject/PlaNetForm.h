#pragma once

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
	private: System::Windows::Forms::Label^ lblPlaNet;
	protected:

	protected:

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
			this->lblPlaNet = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblPlaNet
			// 
			this->lblPlaNet->AutoSize = true;
			this->lblPlaNet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlaNet->Location = System::Drawing::Point(488, 291);
			this->lblPlaNet->Name = L"lblPlaNet";
			this->lblPlaNet->Size = System::Drawing::Size(332, 108);
			this->lblPlaNet->TabIndex = 0;
			this->lblPlaNet->Text = L"PlaNet";
			this->lblPlaNet->Click += gcnew System::EventHandler(this, &PlaNetForm::label1_Click);
			// 
			// PlaNetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1379, 685);
			this->Controls->Add(this->lblPlaNet);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PlaNetForm";
			this->Text = L"PlaNetForm";
			this->Load += gcnew System::EventHandler(this, &PlaNetForm::PlaNetForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PlaNetForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
