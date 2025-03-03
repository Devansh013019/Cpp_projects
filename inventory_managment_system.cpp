/* Inventory Management System
• Objective : Track products in a store with price and quantity management.
• Concepts : Class, objects, constructor, functions.
• Tasks : o Define a class Product with attributes : productID, name, price, quantity.o Implement methods : addStock(), sellProduct(), displayInfo().o Update stock after each sale.*/

#include <iostream>
#include <string>
using namespace std;
class inventory
{
    string product_name[100], product_id[100];
    float price[100];
    int quantity[100], count = 0;

    public:
    void choice()
    {
    cout << "                                       " << endl;
    cout << "This is  Managment pannel" << endl;
    cout << "=============================================" << endl;
    cout << "PRESS" << endl;
    cout << "1. To add stock in your Inventory   " << endl;
    cout << "2. To sell stock from your Inventory   " << endl;
    cout << "3. To display stocks in your Inventory   " << endl;
    cout << "=============================================" << endl;
    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        addstock();
        break;
    case 2:sellstock();
    break;
    case 3:
        displaystock();
        break;
    }
}
    void addstock()
    {
        cout << "=============================================" << endl;
        cout<< "Enter Product Name" << endl;
        cin >> product_name[count];
        transform(product_name[count].begin(), product_name[count].end(), product_name[count].begin(),
                  ::toupper);
        cout<< "Enter Product Id (Must Be Unique)" << endl;
        cin >> product_id[count];
        transform(product_id[count].begin(), product_id[count].end(), product_id[count].begin(),
                  ::toupper);
        cout<< "Enter Product Price" << endl;
        cin >> price[count];
        cout<< "Enter Product Quantity" << endl;
        cin >> quantity[count];
        cout << "=============================================" << endl;
        count++;
        choice();
    }
    void sellstock()
    {
        string temp;
        int s_no = -1;
        cout << "........................................." << endl;
        cout << "Enter the product id to sell product  " << endl;
        cout << "........................................." << endl;
        cin >> temp;
        transform(temp.begin(), temp.end(), temp.begin(),
                  ::toupper);
        for (int i = 0; i < 100; i++)
        {
            if (temp == product_id[i])
            {
                s_no = i;
                break;
            }
        }
        if(s_no !=-1)
        {
            cout << "........................................." << endl;
            cout<<"Name Of Selling Product : "<<product_name[s_no]<<endl;
            cout<<"ID Of Selling Product : "<<product_id[s_no]<<endl;
            cout<<"Price Of Selling Product : "<<price[s_no]<<endl;
            cout<<"Avalable Quantity Of Selling Product : "<<quantity[s_no]<<endl;
            cout << "........................................." << endl;
            bill(s_no);
        }
        else
        {
            cout << "Product Id is unknown "<<endl;
            cout << "........................................." << endl;
        }
        choice();
    }
    void bill(int s_no)
    {
        int sell_quantity;
        cout << "Enter quantity to sell :";
        cin >> sell_quantity;
        cout << "=============================================" << endl;
        cout << "               BILL             "<<endl;
        cout << "||   Item     :   " << product_name[s_no]<<" ||"<<endl;
        cout << "||   ID       :   " << product_id[s_no]<<" ||"<<endl;
        cout << "||   Price    :   " << price[s_no]<<" ||"<<endl;
        cout << "||   Quantity :   " << sell_quantity<<" ||"<<endl;
        cout << "||   Total    :   " << sell_quantity*price[s_no]<<" ||"<<endl;
        quantity[s_no]=quantity[s_no]-sell_quantity;
        cout << "=============================================" << endl;
    }
    void displaystock()
    {
        string temp;
        int s_no=-1;
        cout << "........................................." << endl;
        cout<<"Enter the product id to get details of product stock "<<endl;
        cout << "........................................." << endl;
        cin>>temp;
        transform(temp.begin(), temp.end(), temp.begin(),
                  ::toupper);
        for(int i=0;i<100;i++)
        {
            if(temp==product_id[i])
            {
                s_no = i;
                break;
            }
        }
        if(s_no != -1)
        {
            cout << "=============================================" << endl;
            cout << "Name of product is : " << product_name[s_no] << endl;
            cout << "Id of product is : " << product_id[s_no] << endl;
            cout << "Price of product is : " << price[s_no] << endl;
            cout << "Quantity of product is : " << quantity[s_no] << endl;
            cout << "=============================================" << endl;
        }
        else 
        cout<<"Product Id is unknown "<<endl;
        choice();
    }
};
int main()
{
    inventory products;
    products.choice();
    
}