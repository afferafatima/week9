#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of 2nd array : ";
    cin >> size;
    int array1[2];//size was fixed
    int array2[size];
    for (int idx = 0; idx < 2; idx++)
    {
        cout << "Enter value " << idx + 1 << " in array 1 : ";
        cin >> array1[idx];
    }

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter value " << idx + 1 << " in array 2 : ";
        cin >> array2[idx];
    }
    int array3[size + 2];
    array3[0] = array1[0];
    array3[size + 1] = array1[1];//size+1 is the last index of array2
    for (int idx = 1; idx <= size; idx++)
    {
        array3[idx] = array2[idx - 1];
    }
    for (int idx = 0; idx < size + 2; idx++)
    {
        cout << array3[idx] << ",";
    }
}