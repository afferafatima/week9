#include <iostream>
using namespace std;
main()
{
    int total; // variable to get count of numbers user wants to enter
    cout << " Enter total digits you want to Enter : ";
    cin >> total;
    int numbers[total];                   // array that stores all the numbers
    int count = 0;                        // variable to store number of counts
    for (int idx = 0; idx < total; idx++) // loop that receives numbers from user
    {
        cin >> numbers[idx];
    }
    for (int idx = 0; idx < total; idx++) // loop to check digit 7 in the array
    {
        while (numbers[idx] % 10 != 0)
        {
            if (numbers[idx] % 10 == 7)
            {
                count++;
            }
            numbers[idx] = numbers[idx] / 10;
        }
    }
    // output
    if (count > 0)
    {
        cout << " Boom! ";
    }
    if (count == 0)
    {
        cout << "there is no 7 in the array.";
    }
}