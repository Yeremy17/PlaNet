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
			this->SuspendLayout();
			// 
			// PlaNetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 302);
			this->Name = L"PlaNetForm";
			this->Text = L"PlaNetForm";
			this->Load += gcnew System::EventHandler(this, &PlaNetForm::PlaNetForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PlaNetForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}