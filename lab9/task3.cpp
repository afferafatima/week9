#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter total numbers you want to sum : ";
    cin >> size;
    int number[size];
    int sum = 0;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Number : ";
        cin >> number[idx];
        sum = sum + number[idx];
    }
    cout << "Sum is : " << sum << endl;
    cout << "Average is : " << sum / size << endl;
}