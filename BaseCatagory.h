#pragma once
#include <string>
#include <fstream>

public ref class BaseCatagory abstract
{
protected:
    int pcode;
    float price;
    float disc;
    System::String^ pname;
    System::String^ category;
public:
    virtual void addd(System::String^% errorMessage) = 0;
    virtual void deleteproduct() = 0;
    virtual bool addtocart(int productCode, int quantity, System::String^% errorMessage) = 0;
    virtual void displayMenu(System::Windows::Forms::ListView^ listView) = 0;

    void setProductCode(int pc) 
    {
        pcode = pc;
    }

    void setProductName(System::String^ pn) 
    {
        pname = pn;
    }

    void setProductPrice(float pp) 
    {
        price = pp;
    }

    void setProductDiscount(float d) 
    {
        disc = d;
    }
};
