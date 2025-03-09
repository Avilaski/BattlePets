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
 */
void printBorder()
{
    printf("\033[1;31m-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+-+H+\033[0m\n");
}

/* Prints the title of the program, and prompts the user to press ENTER to continue.
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
    printBorder();

    printf("Press ENTER to continue!\n");
    while (getchar() != '\n');

}

/* Shows the menu of the program, and prompts the user for the succeeding choices.
 * @param menuChoicePtr: Pointer to the variable that will store the user's menu choice.
 * @return menuChoicePtr: Returns the number option that the user chose.
 * @pre menuChoicePtr: Starting value of *menuChoicePtr must be 0 before the user enters the new value.
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


/* Executes the chosen option from menuSelect()
 * @param menuChoicePtr: Redirects user back to menu if the user chose the [0] option.
 * @param playerList: The players.txt file for the inner functions to use.
 * @pre menuChoicePtr: Correctly points to menuChoice.
 * @pre playerList: Correctly formatted for reading.
 */
void startGame (int* menuChoicePtr, FILE* playerList)
{
    int choice;
    int ctr = 0, temp = 0, playerCtr = 3;
    char buffer[50];

    printf("[0] Go back\n");                        // Displays players
    printf("[1] <New Player>\n");
    while(fgets(buffer, 50, playerList) != NULL)    // Reads every 5 lines in the players.txt to display it in the player list
    {
        ctr++;
        if (ctr == 1 || ctr == temp + 5)
        {
            temp = ctr;
            printf("[%d] %s", playerCtr, buffer);
            playerCtr++;
        }
    }

    getchar();
    scanf("%d", &choice);

    switch (choice)
    {
        case 0:
            *menuChoicePtr = 0;
            break;
        case 1:
        default:
            printf("Invalid input\n");
            break;
        
    }
}


