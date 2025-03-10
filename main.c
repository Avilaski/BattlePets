/**
* Description : <short description of the project>
* Author/s : <Avila, Greg>
* Section : <S19-B>
* Last Modified : <date when last revision was made>
* Acknowledgments : https://www.asciiart.eu/ascii-draw-studio/app (very useful for creating ASCII art)
*                   https://stackoverflow.com/questions/40554617/while-getchar-n (helped alot when troubleshooting invalid inputs)
                    https://aruneworld.com/programming-language/c/c-library/c-library-windows-h/ (for windows and Sleep() function)
*/


/* preprocessor directives> */
#include <stdio.h>
#include "header.h"

/* definitions (i.e., constants, typedefs, structs) */
typedef int bool;
#define true 1
#define false 0

/* function implementations */


int main ()
{
    bool gameFlag = true;

    FILE *playerList;
    playerList = fopen("players.txt", "r");

    int menuChoice = 0;
    int *menuChoicePtr = &menuChoice;

    printTitle();
    while(gameFlag)
    {
        while (menuChoice == 0)
        {
            menuSelect(menuChoicePtr);
            switch (menuChoice)
            {
                case 0:
                    menuChoice = -1;                                    // Exits inner & outer loops, ending the game.
                    gameFlag = false;
                    break;
                case 1:
                    startGame(menuChoicePtr, playerList);               // Starts the game.
                    printf("%d\n", menuChoice);
                    break;
                case 2:
                case 3:
                default:
                    break;
            }
        }
    } 


    return 0;
}

/**
* This is to certify that this project is my/our own work, based on my/our personal
* efforts in studying and applying the concepts learned. I/We have constructed the
* functions and their respective algorithms and corresponding code by myself/ourselves.
* The program was run, tested, and debugged by my/our own efforts. I/We further certify
* that I/we have not copied in part or whole or otherwise plagiarized the work of
* other students and/or persons.
*
* <Avila, Greg> (DLSU ID# <12410071>)
* 
*/