#include <iostream>
using namespace std;
main()
{
    int total;
    cout << "Enter total resistors : ";
    cin >> total;
    float Resistor[total];
    float t_resistance = 0;
    for (int idx = 0; idx < total; idx++)
    {
        cout << "Enter resistance of resistor " << idx + 1 << " in ohms : ";
        cin >> Resistor[idx];
        t_resistance = t_resistance + Resistor[idx];
    }
    cout<<"Total resistace is : "<<t_resistance<<" ohms. ";
}