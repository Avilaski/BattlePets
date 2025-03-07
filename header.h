#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

void printBorder();
void printTitle();
void menuSelect(int *menuChoicePtr);
void executeChoice(int menuChoice);