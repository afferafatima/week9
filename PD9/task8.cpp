#include <iostream>
using namespace std;
main()
{
    int t_boxes; // variable to store total boxes user want to color
    cout << " Enter total boxes you want to color : ";
    cin >> t_boxes;
    string color[t_boxes]; // loop to store color for each box
    for (int idx = 0; idx < t_boxes; idx++)
    {
        cout << " Enter color of box " << idx + 1 << " : ";
        cin >> color[idx];
    }
    int seconds = 0;
    // loop to calculate total time user took for coloring
    for (int idx = 0; idx < t_boxes; idx = idx + 1)
    {
        if (color[idx] == color[idx + 1])
        {
            seconds = seconds + 2;
        }
        else
        {
            seconds = seconds + 3;
        }
    }
    seconds = seconds - 1;
    cout << " It takes " << seconds << " seconds for user to color " << t_boxes << " boxess.";
}