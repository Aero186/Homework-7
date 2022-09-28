/******************************************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
             This game is unfinished. Follow along with CSCI130_RockPaperScissors2.pdf
             to complete the game.
Last Modified by: Dr. M
Last Modified on: 9/2020
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//////////////////// Prototype Functions /////////////////////////////////////
void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();

//////////////////// MAIN ////////////////////////////////////////////////////
int main()
{
    // declare vars
    char userPick;                  // user's selection for game
    bool valid_pick = false;        // flag controlled while loop for obtaining user input
    char computerPick;              // randomly selected computer selection for game
    
    
    // Display rules of the game.
    cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
    cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
    cout << "L (for Lizard), and K (for Spock)." << endl;
    
    // Obtain userPick. Prompt until a valid selection is made.
    while (valid_pick == false)
    {
        cout << "You pick: ";
        cin >> userPick;
        
        if ( (userPick == 'R') || (userPick == 'P') || (userPick == 'S' ) ||
            (userPick == 'L') || (userPick == 'K') )
        {
            valid_pick = true;
        }
        else
            cout << "Invalid Selection. Try again. " << endl;
    }
    
    // Repeat selection back to user.
    TranslatePick(0, userPick);
    
    // Obtain computer selection.
    computerPick = ComputerSelectRPSLK();
    TranslatePick(1, computerPick); // Inform user of computer selection
    
    // HANDOUT (PART A): Determine the winner of the game.
    bool win = false;
    
  if ((userPick == 'R') && (computerPick == 'R'))
    cout << "It is a tie." << endl;
  else if ((userPick == 'P') && (computerPick == 'P'))
    cout << "It is a tie." << endl;
  else if ((userPick == 'S') && (computerPick == 'S'))
    cout << "It is a tie." << endl;
  else if ((userPick == 'L') && (computerPick == 'L'))
    cout << "It is a tie." << endl;
  else if ((userPick == 'K') && (computerPick == 'K'))
    cout << "It is a tie." << endl;
  else if ((userPick == 'R') && (computerPick == 'P'))
    cout << "Paper covers Rock. \nYou loose." << endl;
else if ((userPick == 'R') && (computerPick == 'K'))
  cout << "Spock vaporizes Rock. \nYou loose." << endl;
else if ((userPick == 'R') && (computerPick == 'S'))
{
  cout << "Rock crushes Scissors. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'R') && (computerPick == 'L'))
{
  cout << "Rock crushes Lizard. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'L') && (computerPick == 'P'))
{
  cout << "Lizard eats Paper. \nYou win!" << endl;
  win = true;
}  
else if ((userPick == 'L') && (computerPick == 'K'))
{
  cout << "Lizard poisons Spock. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'L') && (computerPick == 'S'))
  cout << "Scissors decapitates Lizard. \nYou Loose." << endl;
else if ((userPick == 'L') && (computerPick == 'R'))
  cout << "Rock crushes Lizard. \nYou Loose." << endl;
else if ((userPick == 'K') && (computerPick == 'S'))
{
  cout << "Spock smashes Scissors. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'K') && (computerPick == 'R'))
{
  cout << "Spcok vaporizes Rock. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'K') && (computerPick == 'P'))
  cout << "Paper disproves Spock. \nYou Loose" << endl;
else if ((userPick == 'K') && (computerPick == 'L'))
  cout << "Lizard poisons Spock. \nYou Loose." << endl;
else if ((userPick == 'S') && (computerPick == 'P'))
{
  cout << "Scissors cuts Paper. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'S') && (computerPick == 'L'))
{
  cout << "Scissors decapitates Lizard. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'S') && (computerPick == 'R'))
  cout << "Rock crushes Scissors. \nYou Loose." << endl;
else if ((userPick == 'S') && (computerPick == 'K'))
  cout << "Spock smashes Scissors. \nYou Loose." << endl;
else if ((userPick == 'P') && (computerPick == 'K'))
{
  cout << "Paper disproves Spock. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'P') && (computerPick == 'R'))
{
  cout << "Paper covers Rock. \nYou Win!" << endl;
  win = true;
}  
else if ((userPick == 'P') && (computerPick == 'L'))
  cout << "Lizard eats Paper. \nYou Loose." << endl;
else if ((userPick == 'P') && (computerPick == 'S'))
  cout << "Scissors cuts Paper. \nYou Lose." << endl;
else 
  cout << "Not accounted for" << endl;
    
    
    // HANDOUT (PART B): Inform the user who won.
    
    // It's incorperated into part A
    
    // HANDOUT (PART C): Randomly display celebratory messages if user won.
  
int random;
   
  srand (time(NULL)); // initialize random seed.
    random = rand() % 5;
  
 if (win > 0)
   
   switch (random)
    {
        case 0: 
            cout << "**** Congratulations, wanna go again? ****";
            break;
        case 1: 
            cout << "**** Well done! It seems lady luck is on your side. ****";
            break;
        case 2: 
            cout << "**** You've beat us this time, but how long until your luck turns? ****";
            break;
        case 3: 
            cout << "**** Great job! You've earned yourself a treat! ****";
            break;
        case 4: 
            cout << "**** Good game. I'll get you next time! ****";
            break;
        default:
            cout << "Error in the function ComputerSelectRPSLK. " << endl;
    }




    return 0;
}

/////////////// User-Created Functions ////////////////////////////////////////

/* Descprition: This function is used to translate the character selection to a 
        statement which is displayed to the user.
   Parameters:  flag_who is an integer which is used to indicate if the computer
                         or the user made the choice.
                selection is one of the 5 valid character selections  */
void TranslatePick(int flag_who, char selection)
{
    // declare local function variables
    string who_text;
    
    // identify which statements to insert into the output below
    if (flag_who == 0)
        who_text = "You";
    else
        who_text = "The Computer";
    
    // display output where the char selection is translated into words
    if (selection == 'R')
        cout << who_text <<" selected Rock." << endl;
    else if (selection == 'P')
        cout << who_text <<" selected Paper." << endl;
    else if (selection == 'S')
        cout << who_text <<" selected Scissors." << endl;
    else if (selection == 'L')
        cout << who_text <<" selected Lizard." << endl;
    else if (selection == 'K')
        cout << who_text <<" selected Spock." << endl;
    else // something is wrong
        cout << "Check code for errors. Message from TranslatePick fcn." << endl;
        
    return;
        
}

/* Descprition: This function is used to make a random character selection in the 
        game Rock, Paper, Scissors, Lizard, Spock
   Parameters:  there are no inputs */
char ComputerSelectRPSLK()
{
    // declare local function variables
    char randPickChar;
    int randPick;
    
    // pick a random number from 0 to 4
    srand (time(NULL)); // initialize random seed.
    randPick = rand() % 5; // gives us 0 to 4
    //cout << randPick; // uncomment to debug
    
    // assign random number to letter
    switch (randPick)
    {
        case 0: 
            randPickChar = 'R';
            break;
        case 1: 
            randPickChar = 'P';
            break;
        case 2: 
            randPickChar = 'S';
            break;
        case 3: 
            randPickChar = 'L';
            break;
        case 4: 
            randPickChar = 'K';
            break;
        default:
            cout << "Error in the function ComputerSelectRPSLK. " << endl;
    }
    
    return randPickChar;

  }








