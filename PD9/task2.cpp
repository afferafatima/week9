#include <iostream>
using namespace std;
main()
{
    // array used to store movies that displays in cinema
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string movie; // variable used to get movie users wants to watch
    int price;    // variable used to calculate price after discunt
    cout << " Enter movie you want to watch : ";
    cin >> movie;
    int idx = 0;
    while (movie != movies[idx]) // loop to get index
    {
        idx++;
    }
    // if-else statements for condition and price calculation
    if (idx % 2 == 0)
    {
        price = (500 - (500 * 0.05));
    }
    else
    {
        price = 500 - (500 * 0.1);
    }
    cout << " Ticket Price is 500 rupees." << endl;
    cout << " Ticket price after discount is : " << price << " Rupees. " << endl;
}