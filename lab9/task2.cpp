#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter Size of array : ";
    cin >> size;
    int arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Number : ";
        cin >> arr[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        cout << " Value " << idx + 1 << " is : " << arr[idx] << endl;
    }
}