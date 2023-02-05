#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter word : ";
    getline(cin, word);
    int count = 0;
    //loop to calculate total vowels in line
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        if (word[idx] == 'a' || word[idx] == 'e' || word[idx] == 'i' || word[idx] == 'o' || word[idx] == 'u')
        {
            count++;
            //cout << count << endl;
        }
    }
    cout << "Number of vowels : " << count;
}