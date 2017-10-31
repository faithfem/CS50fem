#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; do
    //prompt the user
    {
        printf("Height:\n");
        height = get_int();
    }
    while (height < 0 || height > 23);
    //build the pyramid
    //first build levels

    //NEXT IS THE LEFT SIDE OF THE PYRAMID
//printf("  \t");
    for (int height_counter = 0; height_counter < height; height_counter++)
        {
        //to build the lines
        int spaces = height - height_counter-1; //CHANGED HEIGHT CUONTER TO +0 INSTEAD OF +1
            for (int spaces_counter = 0; spaces_counter < spaces; spaces_counter++) //THIS LOOP'S JOB IS TO BUILD SPACES ONLY
            {
                printf(" "); //PERCENT S MEANS WE WILL TAKE THE VARIABLE BTW THE NEXT "" SIGNS AND INPUT WHERE PCT S IS
                //printf(" ");

            }

        for (int blocks_counter =0; blocks_counter < height_counter+2; blocks_counter++) // THIS LOOP CREATES THE # BLOCKS
            {
            printf("%s", "#");
            }
        //start a new line
            printf("\n");

        }


//NEXT IS THE RIGHT SIDE OF THE PYRAMID

// for (int height_counter = 0; height_counter < height; height_counter++)
//         {
//         //to build the lines
//         int spaces = height - height_counter+0; //CHANGED HEIGHT CUONTER TO +0 INSTEAD OF +1
//             for (int spaces_counter = 0; spaces_counter > spaces; spaces_counter++)
//             {
//                 printf("%s", " ");
//                 //printf(" ");

//             }

//         for (int blocks_counter = 0; blocks_counter < height_counter; blocks_counter++)
//             {
//             printf("%s", "#");
//             }
//         //start a new line
//             printf("\n");

//         }



}


