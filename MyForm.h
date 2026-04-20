#pragma once
#include "admin.h";
namespace ayesha
{

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
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::CheckBox^ checkBox1;


    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Button^ button1;




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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label1->Location = System::Drawing::Point(626, 104);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(174, 62);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Sign In\r\n";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label2->Location = System::Drawing::Point(521, 192);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(105, 28);
            this->label2->TabIndex = 1;
            this->label2->Text = L"User Login";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::White;
            this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
            this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->textBox1->Location = System::Drawing::Point(526, 236);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(377, 38);
            this->textBox1->TabIndex = 2;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label3->Location = System::Drawing::Point(521, 300);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(93, 28);
            this->label3->TabIndex = 3;
            this->label3->Text = L"Password\r\n";
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::White;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(526, 344);
            this->textBox2->Name = L"textBox2";
            this->textBox2->PasswordChar = '*';
            this->textBox2->Size = System::Drawing::Size(377, 38);
            this->textBox2->TabIndex = 4;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->BackColor = System::Drawing::Color::Transparent;
            this->checkBox1->Checked = true;
            this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
            this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->checkBox1->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->checkBox1->Location = System::Drawing::Point(526, 417);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(153, 29);
            this->checkBox1->TabIndex = 5;
            this->checkBox1->Text = L"Agree to terms\r\n";
            this->checkBox1->UseVisualStyleBackColor = false;
            this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label5->Location = System::Drawing::Point(550, 571);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(324, 20);
            this->label5->TabIndex = 8;
            this->label5->Text = L"DebtCo Holding B.V. 2024 | All Rights Reserved.";
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label6->Location = System::Drawing::Point(598, 608);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(202, 20);
            this->label6->TabIndex = 9;
            this->label6->Text = L"Privacy Policy  |  Terms of Use\r\n";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::No;
            this->pictureBox1->Location = System::Drawing::Point(579, 102);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(41, 62);
            this->pictureBox1->TabIndex = 10;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Gold;
            this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(526, 477);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(377, 54);
            this->button1->TabIndex = 11;
            this->button1->Text = L"Log In";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1523, 753);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        if (checkBox1->Checked)
        {
            button1->Enabled = true;
        }
        else
        {
            button1->Enabled = false;

        }
    }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox1->Text == "ADMIN")
    {
        if (textBox2->Text=="pizza")
        {
            admin obj;
            this->Hide();
            obj.ShowDialog();

        }
        else
        {
            MessageBox::Show("Password is Incorrect","Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else
    {
        MessageBox::Show("User Login is Incorrect", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
        
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
