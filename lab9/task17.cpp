#include <iostream>
using namespace std;
main()
{
    float due;//variable to store due amount entered by user 
    cout << "Total Due : ";
    cin >> due;
    float change[4];
    //loop to get store change
    for (int idx = 0; idx < 4; idx++)
    {
        cin >> change[idx];
    }
    // float sum = 0.25 * change[0] + 0.10 * change[1] + 0.05 * change[2] + 0.01 * change[3];
    float quarters = 0.25 * change[0];
    float dimes = 0.10 * change[1];
    float nickels = 0.05 * change[2];
    float pennies = 0.01 * change[3];
    float total = quarters + dimes + nickels + pennies;
    // cout<<total<<endl;
    if (total >= due)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}