#include <iostream>
using namespace std;
main()
{
    // string array storing dance moves
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin; // variable to store pin of user
    cout << "Enter pin : ";
    cin >> pin;
    int digits[4];           // Int array to store digits
    int length = pin.size(); // string length(to check the total digits)
    bool flag = true;
    while (true)
    {
        if (length != 4) // condition to ensure pin is 4 digit
        {
            cout << "Invalid Input";
            break;
        }
        for (int idx = 0; idx < 4; idx++) // convert char to int
        {
            if (pin[idx] == '0')
            {
                digits[idx] = 0;
            }
            else if (pin[idx] == '1')
            {
                digits[idx] = 1;
            }
            else if (pin[idx] == '2')
            {
                digits[idx] = 2;
            }
            else if (pin[idx] == '3')
            {
                digits[idx] = 3;
            }
            else if (pin[idx] == '4')
            {
                digits[idx] = 4;
            }
            else if (pin[idx] == '5')
            {
                digits[idx] = 5;
            }
            else if (pin[idx] == '6')
            {
                digits[idx] = 6;
            }
            else if (pin[idx] == '7')
            {
                digits[idx] = 7;
            }
            else if (pin[idx] == '8')
            {
                digits[idx] = 8;
            }
            else if (pin[idx] == '9')
            {
                digits[idx] = 9;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag == false) // Condition if char is not int type
        {
            cout << " Invalid Input ";
            break;
        }
        int x = 0;
        for (int idx = 0; idx < 4; idx++)
        {
            int x = idx + digits[idx];
            if (x > 9)
            {
                x = x - 10;
            }
            cout << moves[x] << " ";
        }
        break;
    }
}