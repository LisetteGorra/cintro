#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Score1 = get_int("Score 1: ");
    int Score2 = get_int("Score 2: ");
    int Score3 = get_int("Score 3: ");

    printf("Score1");
    for (int i = 0; i < Score1; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("Score2");
    for (int i = 0; i < Score2; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("Score3");
    for (int i = 0; i < Score3; i++)
    {
        printf("#");
    }
    printf("\n");
}