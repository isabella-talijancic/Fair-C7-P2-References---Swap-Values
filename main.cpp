// Demonstrates passing references to alter argument variables

#include <iostream>

using namespace std;

void badSwap(int player1Points, int player2Points);
void goodSwap(int& player1Points, int& player2Points);

int main()
{
    int player1Points = 2700;
    int player2Points = 1250;
    
    cout << "~ ~ Swap Values ~ ~\n\n";
    cout << "~ Original Point Totals ~\n";
    cout << "Player 1 Points: " << player1Points << "\n";
    cout << "Player 2 Points: " << player2Points << "\n\n";
 
    cout << "~ Perform a badSwap() ~\n\n";
    // add call to badSwap function
    badSwap(player1Points, player2Points);
    cout << "In function: player1Points = " << player2Points << "\n";
    cout << "In function: player2Points = " << player1Points << "\n";
    cout << "Player 1 Points: " << player1Points << "\n";
    cout << "Player 2 Points: " << player2Points << "\n\n";

    cout << "~ Calling goodSwap() ~\n\n";
    // add call to goodSwap function
    goodSwap(player1Points, player2Points);
    cout << "Player 1 Points: " << player1Points << "\n";
    cout << "Player 2 Points: " << player2Points << "\n\n";
   
   cout << "~ ~ End of Program ~ ~";
   return 0;
}

void badSwap(int player1Points, int player2Points)
{
    int temp = player1Points;
    player1Points = player2Points;
    player2Points = temp;
}

void goodSwap(int& player1Points, int& player2Points)
{
    int temp = player1Points;
    player1Points = player2Points;
    player2Points = temp;
}