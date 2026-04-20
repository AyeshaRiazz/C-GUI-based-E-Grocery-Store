#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include "thankyou.h"
#include "iomanip"
namespace ayesha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cart
	/// </summary>
	public ref class cart : public System::Windows::Forms::Form
	{
	public:
		cart(void)
		{
			InitializeComponent();
			DisplayBill();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;

	private:

	private: System::Windows::Forms::ColumnHeader^ Name;
	private: System::Windows::Forms::ColumnHeader^ Price_Per_Unit;
	private: System::Windows::Forms::ColumnHeader^ Discount;
	private: System::Windows::Forms::ColumnHeader^ Quantity;
	private: System::Windows::Forms::ColumnHeader^ discounted_price;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cart::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price_Per_Unit = (gcnew System::Windows::Forms::ColumnHeader());
			this->Discount = (gcnew System::Windows::Forms::ColumnHeader());
			this->Quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->discounted_price = (gcnew System::Windows::Forms::ColumnHeader());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(691, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Invoice";
			this->label1->Click += gcnew System::EventHandler(this, &cart::label1_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::Black;
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Name, this->Price_Per_Unit,
					this->Discount, this->Quantity, this->discounted_price
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->ForeColor = System::Drawing::Color::White;
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(232, 308);
			this->listView1->Name = L"listView1";
			this->listView1->Scrollable = false;
			this->listView1->Size = System::Drawing::Size(1442, 524);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &cart::listView1_SelectedIndexChanged);
			// 
			// Name
			// 
			this->Name->Text = L"Name";
			this->Name->Width = 220;
			// 
			// Price_Per_Unit
			// 
			this->Price_Per_Unit->Text = L"Price Per Unit";
			this->Price_Per_Unit->Width = 220;
			// 
			// Discount
			// 
			this->Discount->Text = L"Discount";
			this->Discount->Width = 220;
			// 
			// Quantity
			// 
			this->Quantity->Text = L"Quantity";
			this->Quantity->Width = 220;
			// 
			// discounted_price
			// 
			this->discounted_price->Text = L"Price After Discount";
			this->discounted_price->Width = 250;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(36, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 82);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(102, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 36);
			this->label2->TabIndex = 3;
			this->label2->Text = L"QuickMart";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Location = System::Drawing::Point(998, 42);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(255, 217);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(839, 777);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 42);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Total Bill";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1089, 774);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 45);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &cart::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(1015, 777);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 38);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Rs.";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(926, 862);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 49);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cart::button1_Click);
			// 
			// cart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1686, 978);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listView1);
		
			this->Text = L"cart";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &cart::cart_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	float total = 0;
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   void DisplayBill()
		   {
			   // Clear existing items from the ListView
			   listView1->Items->Clear();

			   // Open the cart file for reading
			   std::ifstream cartFile("cart.txt");
			  
			   // Variables to store data read from the cart file
			   int code;
			   std::string name;
			   float price;
			   float discount;
			   float quantity;
			   

			   // Read data from the cart file and populate the ListView
			   while (cartFile >> code >> name >> price >> discount >> quantity)
			   {
				   // Calculate the price after discount
				   float discountFraction = discount / 100.0; // Convert percentage to fraction
				   float discountedPrice = price * (1 - discountFraction);

				   // Calculate the subtotal for the item
				   float subtotal = discountedPrice * quantity; // Assuming quantity is known or obtained elsewhere

				   // Create a ListViewItem and add it to the ListView
				   ListViewItem^ item = gcnew ListViewItem(gcnew System::String(name.c_str()));
				   item->SubItems->Add(gcnew System::String(price.ToString("0.00")));
				   item->SubItems->Add(gcnew System::String(discount.ToString("0.00")));
				   item->SubItems->Add(gcnew System::String(quantity.ToString("0.00")));
				   item->SubItems->Add(gcnew System::String(subtotal.ToString("0.00")));

				   listView1->Items->Add(item);

				   // Update the total
				   total += subtotal;
			   }


			   // Close the cart file
			   cartFile.close();
		   }

private: System::Void cart_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = total.ToString();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	thankyou obj;
	this->Hide();
	obj.ShowDialog();
}
};
}
