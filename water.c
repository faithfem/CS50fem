#include <cs50.h>
#include <stdio.h>

int main(void) //int is to initialize. Main means this is the main function to be run. Void means there is no input to the function
{
    int minutes;

    do{
    printf("Minutes:");
    minutes = get_int();
}
    while (minutes<0);
    int bottles = minutes*12;
    printf("Bottles:%i\n", bottles);

    }