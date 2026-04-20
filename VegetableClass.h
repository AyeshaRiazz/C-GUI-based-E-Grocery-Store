#pragma once
#include "BaseCatagory.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>

public ref class VegetableClass : public BaseCatagory
{
public:
    // Constructor, destructor, and other member functions declarations

    // Override functions from the base class
    virtual void addd(System::String^% errorMessage) override
    {
        // Use marshal_context to convert System::String^ to std::string
        msclr::interop::marshal_context context;
        std::string fileName = "vegetable.txt";
        std::string filePath = fileName; // fileName is already a std::string

        // Open the file in input mode to check existing product codes
        std::ifstream inputFile(filePath);
        if (!inputFile)
        {
            // Failed to open the file, handle the error
            std::cerr << "Error: Unable to open file " << filePath << " for reading." << std::endl;
            return;
        }

        // Check if the entered product code already exists
        bool codeExists = false;
        int code;
        while (inputFile >> code)
        {
            // Compare the entered product code with existing codes
            if (code == pcode)
            {
                codeExists = true;
                break;
            }


        }

        // Close the input file
        inputFile.close();

        if (codeExists)
        {
            // Product code already exists, display an error message
            errorMessage = "Product code already exists!";
            return;
        }

        // Open the file in append mode
        std::ofstream outputFile(filePath, std::ios_base::app);
        if (!outputFile)
        {
            // Failed to open the file, handle the error
            std::cerr << "Error: Unable to open file " << filePath << " for writing." << std::endl;
            return;
        }

        // Write the product details to the file
        outputFile << pcode << " ";
        outputFile << context.marshal_as<std::string>(pname) << " ";
        outputFile << price << " ";
        outputFile << disc << std::endl;

        // Close the file
        outputFile.close();
    }
    
    virtual void deleteproduct() override
    {
        // Use marshal_context to convert System::String^ to std::string
        msclr::interop::marshal_context context;
        std::string fileName = "vegetable.txt";
        std::string filePath = fileName; // fileName is already a std::string
        std::string tempFilePath = "temp.txt"; // Temporary file path

        // Open the file in input mode to read existing product codes and details
        std::ifstream inputFile(filePath);
        if (!inputFile)
        {
            // Failed to open the file, handle the error
            std::cerr << "Error: Unable to open file " << filePath << " for reading." << std::endl;
            return;
        }

        // Open a temporary file in output mode to write all except the deleted product
        std::ofstream tempFile(tempFilePath);
        if (!tempFile)
        {
            // Failed to open the temporary file, handle the error
            std::cerr << "Error: Unable to open file " << tempFilePath << " for writing." << std::endl;
            inputFile.close();
            return;
        }

        // Variables to hold product details
        int code;
        std::string n;
        double p;
        double d;
        bool found = false;

        // Read each line and copy it to the temporary file except the line to delete
        while (inputFile >> code >> n >> p >> d)
        {
            if (code == pcode)
            {
                // Found the product to delete
                found = true;
                continue; // Skip this line
            }
            // Write the product details to the temporary file
            tempFile << code << " " << n << " " << p << " " << d << std::endl;
        }

        // Close both files
        inputFile.close();
        tempFile.close();

        if (found)
        {
            // Replace the original file with the temporary file
            if (remove(filePath.c_str()) != 0)
            {
                // Failed to remove the original file, handle the error
                std::cerr << "Error: Unable to remove the original file " << filePath << "." << std::endl;
                return;
            }
            if (rename(tempFilePath.c_str(), filePath.c_str()) != 0)
            {
                // Failed to rename the temporary file, handle the error
                std::cerr << "Error: Unable to rename the temporary file to " << filePath << "." << std::endl;
                return;
            }
            std::cout << "Product with code " << pcode << " successfully deleted." << std::endl;
        }
        else
        {
            // The product code to delete was not found
            std::cerr << "Error: Product with code " << pcode << " not found." << std::endl;
            // Clean up the temporary file
            remove(tempFilePath.c_str());
        }
    }
    virtual void displayMenu(System::Windows::Forms::ListView^ listView) override
    {
        msclr::interop::marshal_context context;
        std::string fileName = "vegetable.txt";
        std::string filePath = fileName;

        std::ifstream inputFile(filePath);
        if (!inputFile)
        {
            std::cerr << "Error: Unable to open file " << filePath << " for reading." << std::endl;
            return;
        }

        // Clear any existing items
        listView->Items->Clear();

        // Variables to hold product details
        int code;
        std::string name;
        float price;
        float discount;

        // Read each line and add it to the ListView
        while (inputFile >> code >> name >> price >> discount)
        {
            System::Windows::Forms::ListViewItem^ item = gcnew System::Windows::Forms::ListViewItem(gcnew System::String(code.ToString()));
            item->SubItems->Add(gcnew System::String(name.c_str()));
            item->SubItems->Add(price.ToString("F2"));
            item->SubItems->Add(discount.ToString("F2"));
            listView->Items->Add(item);
        }

        inputFile.close();

    }
    virtual bool addtocart(int productCode, int quantity, System::String^% errorMessage) override
    {
        std::string fileName = "vegetable.txt";
        std::ifstream inputFile(fileName);
        std::string cartFileName = "cart.txt";

        if (!inputFile)
        {
            errorMessage = "Error: Unable to open file " + gcnew System::String(fileName.c_str()) + " for reading.";
            return false;
        }

        std::string line;
        bool productFound = false;

        while (std::getline(inputFile, line))
        {
            std::istringstream iss(line);
            int code;
            std::string name;
            float price, discount;

            if (!(iss >> code >> name >> price >> discount))
            {
                continue;
            }

            if (code == productCode)
            {
                productFound = true;
                std::ofstream cartFile(cartFileName, std::ios_base::app);
                if (!cartFile)
                {
                    errorMessage = "Error: Unable to open file " + gcnew System::String(cartFileName.c_str()) + " for writing.";
                    return false;
                }

                cartFile << code << " " << name << " " << price << " " << discount << " " << quantity << std::endl;
                cartFile.close();
                return true;
            }
        }

        errorMessage = "Product code not found!";
        return false;

    }



};
