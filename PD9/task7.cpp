#include <iostream>
using namespace std;
main()
{
    string word_1; // variable to get 1st word
    string word_2; // variable to get 2nd word
    cout << "Enter 1st string : ";
    cin >> word_1;
    cout << "Enter 2nd string : ";
    cin >> word_2;
    /* int length1 = word_1.length();
     int length2 = word_2.length();*/
    int count = 0;
    // loop that checks the characters
    for (int a = 0; word_1[a] != '\0'; a++)
    {
        for (int b = 0; word_2[b] != '\0'; b++)
        {
            if (word_1[a] == word_2[b])
            {
                word_2[b] = '*';
                count++;
                break;
            }
        }
    }
    cout << "Strings have " << count << " common characters.";
}