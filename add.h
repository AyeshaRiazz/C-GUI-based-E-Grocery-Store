#pragma once
#include "BaseCatagory.h";
#include "MeatClass.h";
#include "FruitClass.h";
#include "VegetableClass.h";
#include "DairyProductClass.h";


namespace ayesha 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add
	/// </summary>
	public ref class add : public System::Windows::Forms::Form
	{
	public:
		add(void)
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
		~add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(add::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(610, 299);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 96);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Catagory Name\r\n\r\n\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &add::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(975, 399);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(296, 30);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(610, 399);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Product Code\r\n";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(975, 512);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(296, 30);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(619, 614);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter Product Price\r\n";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(975, 614);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(296, 30);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(619, 507);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(269, 32);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Enter Product Name";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(975, 728);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(296, 30);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(619, 728);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(305, 32);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Enter Product Discount";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(872, 826);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 49);
			this->button1->TabIndex = 10;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &add::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gold;
			this->label6->Location = System::Drawing::Point(749, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(434, 46);
			this->label6->TabIndex = 11;
			this->label6->Text = L"ADD NEW PRODUCT";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Meat", L"Fruit", L"Vegetable", L"Dairy Product" });
			this->comboBox1->Location = System::Drawing::Point(975, 309);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(296, 33);
			this->comboBox1->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(82, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 32);
			this->label7->TabIndex = 14;
			this->label7->Text = L"QuickMart";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(28, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 74);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"add";
			this->Text = L"add";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Get the category name entered by the user
		String^ categoryName = comboBox1->Text;
		System::String^ errorMessage;

		// Check the category name and save the product information to the corresponding file
		if (categoryName == "Meat")
		{
			// Create an instance of the MeatClass
			MeatClass^ meatProduct = gcnew MeatClass();
			// Set product properties
			meatProduct->setProductCode(Convert::ToInt32(textBox2->Text));
			meatProduct->setProductName(textBox3->Text);
			meatProduct->setProductPrice(Convert::ToSingle(textBox4->Text));
			meatProduct->setProductDiscount(Convert::ToSingle(textBox5->Text));
			// Save product information to file
			meatProduct->addd(errorMessage);
			// After adding the product to the file
			MessageBox::Show("Product added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();

		}
		else if (categoryName == "Fruit")
		{
			// Create an instance of the MeatClass
			FruitClass^ fruitProduct = gcnew FruitClass();
			// Set product properties
			fruitProduct->setProductCode(Convert::ToInt32(textBox2->Text));
			fruitProduct->setProductName(textBox3->Text);
			fruitProduct->setProductPrice(Convert::ToSingle(textBox4->Text));
			fruitProduct->setProductDiscount(Convert::ToSingle(textBox5->Text));
			// Save product information to file
			fruitProduct->addd(errorMessage);
			// After adding the product to the file
			MessageBox::Show("Product added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();


		}
		else if (categoryName == "Vegetable")
		{
			// Create an instance of the MeatClass
			VegetableClass^ vegetableProduct = gcnew VegetableClass();
			// Set product properties
			vegetableProduct->setProductCode(Convert::ToInt32(textBox2->Text));
			vegetableProduct->setProductName(textBox3->Text);
			vegetableProduct->setProductPrice(Convert::ToSingle(textBox4->Text));
			vegetableProduct->setProductDiscount(Convert::ToSingle(textBox5->Text));
			// Save product information to file
			vegetableProduct->addd(errorMessage);
			// After adding the product to the file
			MessageBox::Show("Product added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();


		}
		else if (categoryName == "Dairy Product")
		{
			// Create an instance of the MeatClass
			DairyProductClass^ dairyProduct = gcnew DairyProductClass();
			// Set product properties
			dairyProduct->setProductCode(Convert::ToInt32(textBox2->Text));
			dairyProduct->setProductName(textBox3->Text);
			dairyProduct->setProductPrice(Convert::ToSingle(textBox4->Text));
			dairyProduct->setProductDiscount(Convert::ToSingle(textBox5->Text));
			// Save product information to file
			dairyProduct->addd(errorMessage);
			// After adding the product to the file
			MessageBox::Show("Product added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();


		}
		else 
		{
			MessageBox::Show("Invalid Catagory ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}




private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
	}



