#pragma once

#include "DairyProductClass.h"
#include "cart.h"

namespace ayesha {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class dairyproductMenu : public System::Windows::Forms::Form
    {
    public:
        dairyproductMenu(void)
        {
            InitializeComponent();
            //LoadMeatProducts();
        }

    protected:
        ~dairyproductMenu()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ListView^ listView1;
    private: System::Windows::Forms::ColumnHeader^ Code;
    private: System::Windows::Forms::ColumnHeader^ Name;
    private: System::Windows::Forms::ColumnHeader^ Price;
    private: System::Windows::Forms::ColumnHeader^ Discount;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::PictureBox^ pictureBox1;


    private:

    private:










    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dairyproductMenu::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->listView1 = (gcnew System::Windows::Forms::ListView());
            this->Code = (gcnew System::Windows::Forms::ColumnHeader());
            this->Name = (gcnew System::Windows::Forms::ColumnHeader());
            this->Price = (gcnew System::Windows::Forms::ColumnHeader());
            this->Discount = (gcnew System::Windows::Forms::ColumnHeader());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Gold;
            this->label1->Location = System::Drawing::Point(414, 110);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(571, 79);
            this->label1->TabIndex = 0;
            this->label1->Text = L"DAIRY PRODUCTS";
            this->label1->Click += gcnew System::EventHandler(this, &dairyproductMenu::label1_Click);
            // 
            // listView1
            // 
            this->listView1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"listView1.BackgroundImage")));
            this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
                this->Code, this->Name,
                    this->Price, this->Discount
            });
            this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->listView1->ForeColor = System::Drawing::Color::White;
            this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
            this->listView1->HideSelection = false;
            this->listView1->Location = System::Drawing::Point(135, 255);
            this->listView1->Name = L"listView1";
            this->listView1->Scrollable = false;
            this->listView1->Size = System::Drawing::Size(838, 442);
            this->listView1->TabIndex = 1;
            this->listView1->UseCompatibleStateImageBehavior = false;
            this->listView1->View = System::Windows::Forms::View::Details;
            this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &dairyproductMenu::listView1_SelectedIndexChanged);
            // 
            // Code
            // 
            this->Code->Text = L"Code";
            this->Code->Width = 180;
            // 
            // Name
            // 
            this->Name->Text = L"Name";
            this->Name->Width = 180;
            // 
            // Price
            // 
            this->Price->Text = L"Price";
            this->Price->Width = 180;
            // 
            // Discount
            // 
            this->Discount->Text = L"Discount";
            this->Discount->Width = 180;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(337, 744);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(167, 32);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Enter Code";
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::NavajoWhite;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->textBox1->Location = System::Drawing::Point(657, 742);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(100, 34);
            this->textBox1->TabIndex = 3;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::NavajoWhite;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::Color::Black;
            this->textBox2->Location = System::Drawing::Point(657, 798);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(100, 34);
            this->textBox2->TabIndex = 5;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(337, 800);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(288, 32);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Enter Quantity In Kg";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Gold;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(369, 884);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(188, 51);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Add To Cart";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &dairyproductMenu::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Gold;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(585, 884);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(188, 51);
            this->button2->TabIndex = 7;
            this->button2->Text = L"Invoice";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &dairyproductMenu::button2_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(89, 54);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(143, 32);
            this->label4->TabIndex = 9;
            this->label4->Text = L"QuickMart";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox1->Location = System::Drawing::Point(35, 30);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(100, 74);
            this->pictureBox1->TabIndex = 8;
            this->pictureBox1->TabStop = false;
            // 
            // dairyproductMenu
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Black;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1656, 1048);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->listView1);
            this->Controls->Add(this->label1);
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &dairyproductMenu::customermenu_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void customermenu_Load(System::Object^ sender, System::EventArgs^ e) {
        LoadMeatProducts();

    }

    private:
        void LoadMeatProducts()
        {
            DairyProductClass^ dairyproductClass = gcnew DairyProductClass();
            dairyproductClass->displayMenu(this->listView1);
        }

    private: System::Void listViewMeatProducts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        int productCode;
        int quantity;

        try
        {
            productCode = Convert::ToInt32(textBox1->Text);
            quantity = Convert::ToInt32(textBox2->Text);
        }
        catch (FormatException^) {
            MessageBox::Show("Please enter valid numeric values for product code and quantity.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        // Create an instance of MeatClass and call the addToCart method
        DairyProductClass^ dairyproductProduct = gcnew DairyProductClass();
        System::String^ errorMessage;

        // Call the addToCart method once and store the result
        bool addedToCart = dairyproductProduct->addtocart(productCode, quantity, errorMessage);

        if (addedToCart)
        {
            MessageBox::Show("Product added to cart successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else
        {
            MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    
    }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    cart obj;
    this->Hide();
    obj.ShowDialog();

}
};
}
