#include <iostream>
using namespace std;
main()
{
    string array[5]; // array to store elements
    int length[4];
    for (int idx = 0; idx < 4; idx++)
    {
        cin >> array[idx];
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << array[i] << endl;
    // }
    if ((array[0] == array[1]) && (array[1] == array[2]) && (array[2] == array[3]) && (array[3] == array[0]))
    {

        cout << " True . ";
    }
    else
    {
        cout << " False . ";
    }
}
