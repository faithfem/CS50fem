#include<cs50.h>
#include<stdio.h>

int main(void)
{
//int coins = 0;
//int change = 0;
float given_amount = 0;
int quarters_due = 0;
int dimes_due = 0;
int nickels_due = 0;
int cents_due = 0;
float change = 0;

do
    {
        printf("O hai! How much change is owed?:\n");
        change = get_float();
    }
    while (given_amount < 0);

   // CONVERT GIVEN AMOUNT TO CENTS
    cents_due = (int)(given_amount * 100);

    //QUARTERS
    quarters_due = (cents_due / 0.25);

    //DIMES
    dimes_due = (given_amount - quarters_due);

    //NICKELS
    nickels_due =(given_amount - quarters_due - dimes_due);

    //CENTS
    cents_due = (given_amount - quarters_due - dimes_due - nickels_due);

        printf("%f\n", change);

}