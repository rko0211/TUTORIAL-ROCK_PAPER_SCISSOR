#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakepaperscissor(char com, char you)
{
    // 1 for you win, -1 for you loss, 0 for game draw
    if (com == 'r' && you == 'r')
    {
        return 0;
    }
    else if (com == 'r' && you == 's') //
    {
        return -1;
    }
    else if (com == 'r' && you == 'p')
    {
        return 1;
    }
    else if (com == 'p' && you == 'p')
    {
        return 0;
    }
    else if (com == 'p' && you == 'r')
    {
        return -1;
    }
    else if (com == 'p' && you == 's')
    {
        return 1;
    }
    else if (com == 's' && you == 's')
    {
        return 0;
    }
    else if (com == 's' && you == 'p')
    {
        return -1;
    }
    else if (com == 's' && you == 'r')
    {
        return 1;
    }
}
int main()
{
    printf("r for rock, p for paper, s for scissor\n ");
    char you, com;

    srand(time(0));

    int number = rand() % 100 + 1;

    if (number < 33)
    {
        com = 'r';
    }
    else if (number > 33 && number < 66)
    {
        com = 'p';
    }
    else
    {
        com = 's';
    }
    printf("Enter your choice: ");

    scanf("%c", &you);

    int result = snakepaperscissor(com, you);

    printf("Result is %d\n", result);

    if (result == 1)

    {
        printf(" YOU WIN THE GAME\n");
    }
    else if (result == 0)

    {
        printf("GAME IS IS DRAW\n");
    }
    else

    {
        printf("YOU LOSS THE GAME\n");
    }
    printf("You choose %c and computer choose %c ", you, com);

    return 0;
}