#include <iostream>
using namespace std;
main()
{
    int size; // variable to g
    cout << "Enter Total Numbers you want to Enter : ";
    cin >> size;
    int arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Number " << idx + 1 << " : ";
        cin >> arr[idx];
    }
    int number;
    cout << "Enter a number you want scalar product with entered number: ";
    cin >> number;
    for (int idx = 0; idx < size; idx++)
    {
        cout << arr[idx] * number << endl;
    }
}