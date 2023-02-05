#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter word : ";
    getline(cin, word);
    int count = 0;
    while (word[count] != '\0')
    {
        count = count + 1;
    }
    for (int idx = count - 1; idx >= 0; idx--)
    {
        cout << word[idx];
    }
}