#include <iostream>
using namespace std;
main()
{
    string fruit[5];                  // array used to store variable
    float price[5];                   // array used to store price of fruits
    float bill;                       // variable used to store bill
    int quantity;                     // variable used to store quantity of fruit the customer wants
    for (int idx = 0; idx < 5; idx++) // loop to store fruits and their prices in variables
    {
        cout << " Enter Fruit : ";
        cin >> fruit[idx];
        cout << " Enter Price : ";
        cin >> price[idx];
    }
    string check; // variable used to get name of fruit customer wants
    cout << " Enter Fruit you want : ";
    cin >> check;
    cout << " Enter quantity : ";
    cin >> quantity;
    int idx = 0;
    while (check != fruit[idx])
    {
        idx++;
    }
    bill = quantity * price[idx];
    cout << "Your bill is : " << bill;
}