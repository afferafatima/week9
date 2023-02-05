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
    if (count % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "False";
    }
}
