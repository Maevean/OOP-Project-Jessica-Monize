// OOP Project Jessica Monize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Birds.h"
#include "GreenCheekConure.h"
#include "SunConure.h"
#include "GameStructure.h"
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using::endl;
using std::string;

int main()
{
    //loop back to label to start again.
    label:
        //Bird Names
    Birds c("Floofers");
    GreenCheekConure gcc("Apple");
    SunConure sc("Comet");
    int gccPoints = 0;
    int scPoints = 0;
    //GreenCheekConure gccAngry;
    //gccAngry.gccAngrySpeech();

    string player;
    string help;
    string startGame;
    string greenCC;
    string sunC;

    //random dice roller
 //   srand(static_cast<unsigned int>(time(0)));
    srand(time(NULL));
    int randomNumber = rand();
    int randomNumber2 = rand();
    int dice;
    int dice2;


    

    cout << "Welcome Bird Watcher!\n Please type in your name.\n";
    cin >> player;
        //TODO: Invalid entry option?

        //Welcome Screen, Help, Start and name choice
    cout << "Welcome " << player << "!" << endl;
    cout << "Please type 'help' for to see our two birds. \n";
    cout << "" << endl;
    cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
    string h;
    cin >> h;
    if (h == "help")
    {
        cout << "The Green Cheek Conure, small, cute, and green but don't let that cuteness" 
                "deter you, this cute little bird is full of attitude and his beak is extremely sharp" << endl;
        cout << "Your points are currently = " << gccPoints << endl;


        cout << "" << endl;
        cout << "" << endl;
        cout << "The Sun Conure only a little bit bigger than the Green Cheek Conure and just as cute, this fluffy boy"
                " is orange and has a beak that chomps down hard and a yell that does not stop!" << endl;
        cout << "Health = " << scPoints << endl;

        cout << "" << endl;
        cout << "" << endl;
        cout << "These birds are racing to gather the most food before the other, who will win?\n";
        cout << "Type '1' for Green Cheek Conure of '2' for Sun Conure" << endl;
        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
    }
    //Choosing Green Cheek conure     
        int chooseGCC = 1;
        cin >> chooseGCC;
        if (chooseGCC == 1)
        {
            cout << "You Chose the Green Cheek Conure!" << endl;
            cout << "Please give the bird a name." <<endl;
            cin >> greenCC;
            cout << greenCC << " Chirps and does a flip,may The Best Bird Win!" << endl;
            //roll a number between 1-100
           int dice = (randomNumber % 101) - 1;
            cout << "You rolled a " << dice << "!" << endl;
            cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
        //roll #1, 50 and over
            if (dice >= 50)
            {
             cout << "Good job you earned 2 seeds, while the Sun Conure earned 1!" << endl;
                    gccPoints += 2;
                    scPoints += 1;
                    cout << "Your total seeds are " << gccPoints << endl;
                    cout << "While the Sunconure's seeds are " << scPoints << endl;
                    cout << "You rolled a " << dice << "!" << endl;
                    cout << "Rolling again!" << endl;
                    int dice2 = (randomNumber2 % 101) - 1;
                    cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
            //roll #2, 50 and over
                    if (dice2 >= 50)
                    {
                        cout << "Good job you earned 2 seeds, while the Sun Conure earned 1!" << endl;
                        gccPoints += 2;
                        scPoints += 1;
                        cout << "Your total seeds are " << gccPoints << endl;
                        cout << "While the Sunconure's seeds are " << scPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
            //roll #2, lower than 50
                    else
                    {
                        cout << "You have earned 1 seed, and the Sun Conure earned 2 seeds!" << endl;
                        gccPoints += 1;
                        scPoints += 2;
                        cout << "Your total seeds are " << gccPoints << endl;
                        cout << "While the Sunconure's seeds are " << scPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
            }
         //roll #1, lower than 50        
                else {
                    cout << "You have earned 1 seed, and the Sun Conure earned 2 seeds!" << endl;
                    gccPoints += 1;
                    scPoints += 2;
                    cout << "Your total seeds are " << gccPoints << endl;
                    cout << "While the Sunconure's seeds are " << scPoints << endl;
                    cout << "You rolled a " << dice << "!" << endl;
                    cout << "Rolling again!" << endl;
                    int dice2 = (randomNumber2 % 101) - 1;
                    cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                //roll #2 for GCC, 50 and over
                    if (dice2 >= 50)
                    {
                        cout << "Good job you earned 2 seeds, while the Sun Conure earned 1!" << endl;
                        gccPoints += 2;
                        scPoints += 1;
                        cout << "Your total seeds are " << gccPoints << endl;
                        cout << "While the Sunconure's seeds are " << scPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
                //roll #2 for less than first roll GCC, lower than 50
                    else
                    {
                        cout << "You have earned 1 seed, and the Sun Conure earned 2 seeds!" << endl;
                        gccPoints += 1;
                        scPoints += 2;
                        cout << "Your total seeds are " << gccPoints << endl;
                        cout << "While the Sunconure's seeds are " << scPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
                }  
            cout << endl;
            cout << "Total Seeds Gathered" <<greenCC <<" " << gccPoints << "and Sun Conure at " << scPoints << endl;
            if (gccPoints > scPoints)
            {
                cout << "Congratulations, " << greenCC << " won!" << endl;
            }
            else if (gccPoints < scPoints)
            {
                cout << "Sorry, " << greenCC << " lost." << endl;
            }
            else
            {
                cout << "Both " << greenCC << " and the Sun Conure got the same amount of seeds." << endl;
            }
            cout << endl;
        }
        //Choosing Sun Conure
        else
        {
            cout << "Please give the bird a name." << endl;
            cin >> sunC;
            cout << sunC << " Chirps and twirls, may The Best Bird Win!" << endl;
            //roll a number between 1-100
            int dice = (randomNumber % 101) - 1;
            cout << "You rolled a " << dice << endl;
            cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
           //SC roll #1 50 and above
            if (dice >= 50)
            {
                    scPoints += 2;
                    gccPoints += 1;
                    cout << "Your total seeds are " << scPoints << endl;
                    cout << "While the Sunconure's seeds are " << gccPoints << endl;
                    cout << "Rolling again!" << endl;
                    int dice2 = (randomNumber2 % 101) - 1;
                    cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    //roll #2, 50 and over
                    if (dice2 >= 50)
                    {
                        cout << "Good job you earned 2 seeds, while the Green Cheek Conure earned 1!" << endl;
                        gccPoints += 2;
                        scPoints += 1;
                        cout << "Your total seeds are " << scPoints << endl;
                        cout << "While the Green Cheek's seeds are " << gccPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
                    //roll #2, lower than 50
                    else
                    {
                        cout << "You have earned 1 seed, and the Sun Conure earned 2 seeds!" << endl;
                        gccPoints += 1;
                        scPoints += 2;
                        cout << "Your total seeds are " << scPoints << endl;
                        cout << "While the Green Cheek Conure's seeds are " << gccPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
            }
           //SC roll #1 Below 50
            else 
            {
                    scPoints += 1;
                    gccPoints += 2;
                    cout << "You earned 1 point, while the Green Cheek Conure Earned 2" << endl;
                    cout << "Your total seeds are " << scPoints << endl;
                    cout << "While the Green Cheek's seeds are " << gccPoints << endl;
                    cout << "Rolling again!" << endl;
                    int dice2 = (randomNumber2 % 101) - 1;
                    cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    //roll #2, 50 and over
                    if (dice2 >= 50)
                    {
                        cout << "Good job you earned 2 seeds, while the Green Cheek Conure earned 1!" << endl;
                        gccPoints += 2;
                        scPoints += 1;
                        cout << "Your total seeds are " << scPoints << endl;
                        cout << "While the Green Cheek's seeds are " << gccPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
                    //roll #2, lower than 50
                    else
                    {
                        cout << "You have earned 1 seed, and the Green Cheek Conure earned 2 seeds!" << endl;
                        gccPoints += 1;
                        scPoints += 2;
                        cout << "Your total seeds are " << scPoints << endl;
                        cout << "While the Sunconure's seeds are " << gccPoints << endl;
                        cout << "You rolled a " << dice2 << "!" << endl;
                        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
                    }
            }
            cout << endl;
            cout << "Total Seeds Gathered " << sunC << " " << scPoints << " and Green Cheek Conure at " << gccPoints << endl;
            if (scPoints > gccPoints)
            {
                cout << "Congratulations, " << sunC << " won!" << endl;
            }
            else if (scPoints < gccPoints)
            {
                cout << "Sorry, " << sunC << " lost." << endl;
            }
            else
            {
                cout << "Both " << sunC << " and the Green Cheek Conure got the same amount of seeds." << endl;
            }
            cout << endl;
        }


    //replay!
        cout << "\t~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~\n";
        char z;
        cout << " Play Again? (y/n)";
        cin >> z;
        if (z == 'y' || z == 'Y')
            goto label; //end of replay loop

    cout << "The End!" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
