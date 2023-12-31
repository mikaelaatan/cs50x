#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get row number using
    int ending_row = get_int("Height: ");
    while (ending_row < 1 || ending_row > 8)
    {
        ending_row = get_int("Height: ");
    }

    for(int row = 0; row < ending_row; row++)
    {
        // Print spaces -> spaces = row-1
        for(int column = ending_row-1; column > row; column--)
        {
            printf(" ");
        }

        // Print left star -> left star = row
        for(int column_star = 0; column_star <= row; column_star++)
        {
            printf("#");
        }
        printf("  ");

        // Print right star -> right star = row
        for(int column_star = 0; column_star <= row; column_star++)
        {
            printf("#");
        }

        printf("\n");
    }
}
