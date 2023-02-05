#include <iostream>
using namespace std;
main()
{
    string word = "Something";
    string line;
    cout << " Enter line " << endl;
    getline(cin, line);
    cout << word << " " << line << endl;
}