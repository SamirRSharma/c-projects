#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
// gets height
    }
    while (height < 1 || height > 8);

    for (int rows = 0 ; rows < height; rows++)
    {
        for (int spaces = 0; spaces < height - rows - 1; spaces++)
        {
            printf(" ");
        }
        // prints spaces
        for (int blocks = 0; blocks <= rows; blocks++)
        {
            printf("#");
        }
        //prints blocks
        printf("\n");
        // goes to the next row
    }
}