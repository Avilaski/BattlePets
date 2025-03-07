#include "header.h"

/*
    ANSI Format: 
    \033[<style>;<text color>;<background color>m <text> \033[0m

    TEXT
    Color	Code
    Black	30
    Red	    31
    Green	32
    Yellow	33
    Blue	34
    Magenta	35
    Cyan	36
    White	37

    BACKGROUND
    Color	Code
    Black	40
    Red	    41 
    Green	42
    Yellow	43
    Blue	44
    Magenta	45
    Cyan	46
    White	47
*/

/* Prints a border for UI purposes.
 *
 *
 *
 */
void printBorder()
{
    printf("\033[1;31;m-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+\033[0m\n");
}

/* Prints the title of the program.
 * 
 *
 *
 *
 *
*/
void printTitle()
{
    printBorder();
    printf("\n");
    printf("\n");
    printf("\033[1;32m                  ____    _  _____ _____ _     _____                            \033[0m\n");
    printf("\033[1;32m                 | __ )  / \\|_   _|_   _| |   | ____|                           \033[0m\n");
    printf("\033[1;32m                 |  _ \\ / _ \\ | |   | | | |   |  _|                             \033[0m\n");
    printf("\033[1;32m                 | |_) / ___ \\| |   | | | |___| |___                            \033[0m\n");
    printf("\033[1;32m                 |____/_/   \\_\\_|   |_|_|_____|_____|_ ____                     \033[0m\n");
    printf("\033[1;32m                                    |  _ \\| ____|_   _/ ___|                    \033[0m\n");
    printf("\033[1;32m                                    | |_) |  _|   | | \\___ \\                    \033[0m\n");
    printf("\033[1;32m                                    |  __/| |___  | |  ___) |                   \033[0m\n");
    printf("\033[1;32m                                    |_|   |_____| |_| |____/                    \033[0m\n");
    printf("\n");
    printf("\n");

}

/* Shows the menu of the program, and prompts the user for succeeding choices
 * @param menuChoicePtr: Pointer to the variable that will store the user's menu choice
 * 
 *
 *
 *
*/

void menuSelect(int *menuChoicePtr)
{
    int flag = 0;
    
    printBorder();
    printf("\n%45s", "MAIN  MENU");
    printf("\n%50s", "--------------------");
    printf("\n%50s", "| [1] START        |");
    printf("\n%50s", "| [2] ComPetDium   |");
    printf("\n%50s", "| [3] Statistics   |");
    printf("\n%50s", "| [0] Exit         |");
    printf("\n%50s", "--------------------");
    printf("\n>>");

    while (flag == 0) 
    {
        if(scanf("%d", menuChoicePtr) == 1 && *menuChoicePtr >= 0 && *menuChoicePtr <= 3)   // Checks if the input is an integer and within the range of the menu
        {
            flag = 1;
        }
        else
        {
            while (getchar() != '\n');                                                      // Just to clear the input buffer 
            printf("Invalid input. Please try again.\n");
            printf(">>");
        }
    }
}


/* 
 *
 *
 * 
 * 
 * 
 * 
 */
void executeChoice(int menuChoice)
{
    if (menuChoice == 1)
    {
        printf("You chose 1\n");
    }
    else if (menuChoice == 2)
    {
        printf("You chose 2\n");
    }
    else if (menuChoice == 3)
    {
        printf("You chose 3\n");
    }
}

