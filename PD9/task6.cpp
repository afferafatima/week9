#include <iostream>
using namespace std;
main()
{
    int numbers[3];                   // array to store numbers
    int transformation;               // variable to get number of even-odd transformations
    for (int idx = 0; idx < 3; idx++) // loop to get numbers
    {
        cout << "Enter number " << idx + 1 << " : ";
        cin >> numbers[idx];
    }
    cout << " Enter number of times even-odd transformation  need to be done : ";
    cin >> transformation;
    for (int idx = 0; idx < 3; idx++) // loop to check condition and  give output
    {
        if (numbers[idx] % 2 != 0)
        {
            cout << numbers[idx] + transformation * (2) << " ";
        }
        else
        {
            cout << numbers[idx] - transformation * (2) << " ";
        }
    }
}