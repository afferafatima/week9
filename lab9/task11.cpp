#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter word : ";
    getline(cin, word);
    char letter;

    int count = 0;
    while (word[count] != '\0')
    {
        count++;
    }
    cout << "Enter letter : ";
    cin >> letter;
    if (word[count - 1] == letter)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}