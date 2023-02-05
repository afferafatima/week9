#include <iostream>
using namespace std;
main()
{
    int size;          // variable to give size of array
    bool flag = false; // variable to check number
    int number;        // number to check in array
    cout << " Enter Total Numbers you want to Enter : ";
    cin >> size;
    int arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << " Enter Number " << idx + 1 << " : ";
        cin >> arr[idx];
    }
    int smallest = 10000000;
    for (int idx = 0; idx < size; idx++)
    {
        if (number < smallest)
        {

            smallest = number;
        }
    }
    cout << " Smallest number is : " << smallest;
}