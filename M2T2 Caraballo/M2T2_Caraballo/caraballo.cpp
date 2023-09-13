#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC 134
M2T2 - Receipt Calculator V2
Caraballo
9/11/23
This program should take the price of a meal, which is user entered.

The user should enter:
- The name of the food item
- Its price
- How many they want

The program will then print out a simple text receipt.
It should include:
 - The price before tax
 - The amount of tax owed (8%)
 - The total including tax
 */

int main()
{
    // set up variables
    double menu_price = 0;
    double tax_percent = 0.07; // for Cumberland county
    double item_price;
    int num_items;
    string item_name;

    // 1 - Greet the user
    cout << "Welcome to Mcblicks." << endl;

    // 2 - Ask the user for the price
    cout << "Place your order blood" << endl;
    cin >> item_name;

    cout << "How much that ish cost" << endl;
    cin >> item_price;

    cout << "How many" << item_name  << " (s) you want? " << endl;
    cin >> num_items;

    // 3 - Calculate the menu price
    menu_price = num_items * item_price;

    // 4 - Print the receipt
    // tax in $ is meal price times tax pct
    // then add the tax in $ to get the total $
    double tax_dollars = menu_price * tax_percent; // in dollars
    double total_price = tax_dollars + menu_price; // price including tax

    // we #include <iomanip> at the top and use this magic below
    // to use 2 decimal places
    cout << fixed << setprecision (2);
     // print the receipt
     cout << "Menu price: $" << menu_price << endl;
     cout << "Tax is:     $" << tax_dollars <<endl;
     cout << "________________________" << endl;
     cout << "Your Total: $" << total_price << endl;
     cout << "Thank you for dining with us!" << endl;



     return 0;
}
