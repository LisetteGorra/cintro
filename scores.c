#include <cs50.h>
#include <stdio.h>

void chart(int score);

int main(void)
{
    int Score1 = get_int("Score 1: ");
    int Score2 = get_int("Score 2: ");
    int Score3 = get_int("Score 3: ");

    printf("Score1");
    chart(Score1);

    printf("Score2");
    chart(Score2);

    printf("Score3");
    chart(Score3);


    for (int i = 0; i < Score1; i++)
    {
        printf("#");
    }
    printf("\n");
}

void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");

}



























    // printf("Score2");
    // for (int i = 0; i < Score2; i++)
    // {
    //     printf("#");
    // }
    // printf("\n");

    // printf("Score3");
    // for (int i = 0; i < Score3; i++)
    // {
    //     printf("#");
    // }
    // printf("\n");
// }