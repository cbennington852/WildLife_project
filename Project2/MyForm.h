#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;















	private: System::Windows::Forms::OpenFileDialog^ ofd;
	public: System::Windows::Forms::TabControl^ SearchTab;
	private:
	private: System::Windows::Forms::TabPage^ tabPage1;
	public:
	private: System::Windows::Forms::TabPage^ HikesTab;













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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SearchTab = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->HikesTab = (gcnew System::Windows::Forms::TabPage());
			this->SearchTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|ALL Files|*.*\"";
			// 
			// SearchTab
			// 
			this->SearchTab->Controls->Add(this->tabPage1);
			this->SearchTab->Controls->Add(this->HikesTab);
			this->SearchTab->Location = System::Drawing::Point(3, 12);
			this->SearchTab->Name = L"SearchTab";
			this->SearchTab->SelectedIndex = 0;
			this->SearchTab->Size = System::Drawing::Size(975, 579);
			this->SearchTab->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(967, 550);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Animal Search";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// HikesTab
			// 
			this->HikesTab->Location = System::Drawing::Point(4, 25);
			this->HikesTab->Name = L"HikesTab";
			this->HikesTab->Padding = System::Windows::Forms::Padding(3);
			this->HikesTab->Size = System::Drawing::Size(967, 550);
			this->HikesTab->TabIndex = 1;
			this->HikesTab->Text = L"Hikes";
			this->HikesTab->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(977, 592);
			this->Controls->Add(this->SearchTab);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SearchTab->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
};
}
