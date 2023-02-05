#include <iostream>
using namespace std;
main()
{
    int size;//variable to g
    cout << "Enter Total Numbers you want to Enter : ";
    cin >> size;
    int arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Number " << idx + 1 << " : ";
        cin >> arr[idx];
    }
    for (int idx = size - 1; idx >= 0; idx--)
    {
        cout << " Value " << idx + 1 << " is : " << arr[idx] << endl;
    }
}