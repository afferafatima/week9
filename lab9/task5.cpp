#include <iostream>
using namespace std;
main()
{
    int size;          // variable to give size of array
    bool flag = false; // variable to check number
    int number;        // number to check in array
    cout << " Enter Total Numbers you want to Enter : ";
    cin >> size;
    int arr[size]; // array
    for (int idx = 0; idx < size; idx++)
    {
        cout << " Enter Number " << idx + 1 << " : ";
        cin >> arr[idx];
    }
    cout << " Enter Number you want to search in array : ";
    cin >> number;

    for (int idx = 0; idx < size; idx++)
    {
        if (arr[idx] = number)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << " Found the number " << endl;
    }
    else
    {
        cout << " Could not found the number. ";
    }
}