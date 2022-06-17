/*****************************************************************************
 *AUTHOR  	 : Patrick Wilson
 *PROJECT #	 : Rock Paper Scissors
 *DATE		 : 11/21/18
******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

/*****************************************************************************
 * Project : The Game of Rock Paper Scissors
 *----------------------------------------------------------------------------
 * This program obtains a number 1 to 3 as input from a user, then converts each
 * 		number into a single play of Rock, Paper, or Scissors.
 *
 * The program should generate a random number 1-3, convert, and output a move of rock,
 *      paper, or scissors. The game repeats until the user selects "N" when asked if
 *      they want to continue playing.
 *****************************************************************************/

int main()
{
    const char PROGRAMMER[] = "Patrick Wilson";
	const int  LAB_NUM      = 3;
	const char LAB_NAME[]   = "Rock Paper Scissors";

    char ch;
    // set up my variables for the scores
    int win = 0;
    int tie = 0;
    int lose = 0;

    // start of game loop, the loop will run until ch == n
    do{
    int choice;
   // output heading
    cout << left;
    cout << "**************************************************\n";
    cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
    cout << "*  PROJECT #" << setw(5)  << LAB_NUM    << ": " << LAB_NAME << endl;
    cout << setw(17) << "*  DATE"  << ": " << "11/21/18" << endl;
    cout << "**************************************************\n\n";
    cout << right;
    // output game menu  
    cout << "**************************************" << endl;
    cout << "** Lets play Rock, Paper, Scissors! **" << endl;
    cout << "**************************************" << endl;
    // Ask the player to choose Rock, Paper, Scissors
    cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
    cin >> choice;
    // gets a random number between 1 and 3 and tell the player what was chosen
    int ai = rand() % 3 + 1;
    cout <<  "The computer chose: " << ai << endl;
    // starts possible outcome sequence in rock paper scissors there are 9 possible out comes 3 wins 3 ties and 3 losses.
    if(choice == 1 && ai == 1){
         cout << "Rock meets Rock its a tie!" << endl;
         tie++;
         }
    else if(choice ==1 && ai== 2){
         cout << "Rock is covered by Paper the computer wins!." << endl;
         lose++;
         }
    else if(choice == 1 && ai == 3){
         cout << "Rock crushes Scissors you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Paper covers Rock you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 2){
         cout << "Paper meets Paper its a tie!" << endl;
         tie++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Paper is cut by Scissors the computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 1){
         cout << "Scissors are crushed by Rock computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 2){
         cout << "Scissors cuts Paper you win!" << endl;
         win++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Scissors meet Scissors its a tie!" << endl;
         tie++;
         }
         // this is what happens if the player doesn't hit 1 2 or 3
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
         // displays your score so far and asks if you want to play again then clears screen
         cout << "Wins: " << win << endl;
         cout << "Ties:" << tie << endl;
         cout << "Losses:" << lose << endl;
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;
         system("CLS");
         }while(ch == 'Y' || ch == 'y');
    //system("pause"); took this out so that the loop ends it with out you needing to hit another button
    return 0;
    //Bug list:
    // Hitting any alphabet character when it asks for 1 2 or 3  will instantly close the program
    // Same bug happens when you enter any alphabet character except y when it asks you if you would like to play again
    // putting a number then y when asked for 1 2 or 3 will run the game then restart
    // putting y then a number when the game ask you if you want to play again will do so and chose the number automaticly

}