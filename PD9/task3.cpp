#include <iostream>
using namespace std;
main()
{
    string input;
    cout << " Enter string : ";
    cin >> input;
    int length = input.length();
    if (length % 2 == 0)
    {
        cout << " True ";
    }
    else
    {
        cout << " False ";
    }
}