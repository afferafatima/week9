#include <iostream>
using namespace std;
main()
{
    string line;//variablr to get line from user
    cout << "Enter a string : ";
    getline(cin, line);
    //loop that returns line without vowels
    for (int idx = 0; line[idx] != '\0'; idx++)
    {
        if (line[idx] == 'a' || line[idx] == 'e' || line[idx] == 'i' || line[idx] == 'o' || line[idx] == 'u')
        {
            continue;
        }
        cout << line[idx];
    }
}