/* Program to demonstrate snake and ladders

***Group Members*** 

1) Abhishek Kumar
2) Ritik Gaur
3) Abhishek Kannaujia
4) Aryaman
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size1 2

int queue[size1];
int dice;
int checkposition();
int position, newposition;
int choice, count = 0;
int final;
char a[20];

int main()
{
    int f, z = 0;
    printf("\t\t*************************************************\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*        -----------------------------          *\n");
    printf("\t\t*         WELCOME TO SNAKE AND LADDER           *\n");
    printf("\t\t*        -----------------------------          *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*************************************************\n\n\n");
    printf("Enter number of players (Max Players 3) = ");
    scanf("%d", &f);
    while (z < f)
    {
        printf("                      \n\n\nHello , Thank you for coming.\n                      What would you like to do: \n                      1.read the rules\n                      2.play the game\n ");
        scanf("%d", &choice);
        {
            if (choice == 1)
            {
                printf("\n                      The rules are simple \n                      You can press enter to roll the dice");
                getch();
                printf("\n\n\n\n\n                      Enter your choice");
                continue;
            }
            if (choice == 2)
            {
                printf("                      Welcome To Snake And Ladder \n");
                printf(" |100  99  98  97  96  95  94  93  92  91|     1=start          4=ladder to 14\n ");
                printf("| 81  82  83  84  85  86  87  88  89  90|     9=ladder to 31   17=snake to  7\n ");
                printf("| 80  79  78  77  76  75  74  73  72  71|     21=ladder to 42  46=snake to  13\n ");
                printf("| 61  62  63  64  65  66  67  68  69  70|     28=ladder to 84  62=snake to  19\n ");
                printf("| 60  59  58  57  56  55  54  53  52  51|     37=ladder to 61  54=snake to  25\n ");
                printf("| 41  42  43  44  45  46  47  48  49  50|     51=ladder to 67  87=snake to  36\n ");
                printf("| 40  39  38  37  36  35  34  33  32  31|     72=ladder to 91  64=snake to  44\n ");
                printf("| 21  22  23  24  25  26  27  28  29  30|     78=ladder to 92  95=snake to  75\n ");
                printf("| 20  19  18  17  16  15  14  13  12  11|     80=ladder to 99     100=END\n");
                printf(" |  1   2   3   4   5   6   7   8   9  10|      \n");
                printf("\nWinner will be the one who gets to 100 first (i.e. minimum number of dice throws)");
                do
                {
                    printf("\nPress any key to roll the dice\n\n");
                    dice = dice-getche();
                    dice = ((rand() % 6) + 1);
                    printf("You rolled the dice and you got %d ", dice);
                    position += dice;
                    if (dice == 6)
                    {
                        printf("\n You got 6 on your dice ");
                        printf("\n as a result of which you get another throw\n");
                        printf(" ---------\n");
                        printf("|         |\n");
                        printf("|  O   O  |\n");
                        printf("|  O   O  |\n");
                        printf("|  O   O  |\n");
                        printf("|         |\n");
                        printf(" ---------\n");
                        continue;
                    }
                    printf("You landed on the poistion %d\n", position);
                    if (dice == 1)
                    {
                        printf(" ---------\n");
                        printf("|         |\n");
                        printf("|         |\n");
                        printf("|    O    |\n");
                        printf("|         |\n");
                        printf("|         |\n");
                        printf(" ---------\n");
                    }
                    else if (dice == 2)
                    {
                        printf(" ---------\n");
                        printf("|         |\n");
                        printf("|  O      |\n");
                        printf("|         |\n");
                        printf("|      O  |\n");
                        printf("|         |\n");
                        printf(" ---------\n");
                    }
                    else if (dice == 3)
                    {
                        printf(" ---------\n");
                        printf("|         |\n");
                        printf("|  O      |\n");
                        printf("|    O    |\n");
                        printf("|      O  |\n");
                        printf("|         |\n");
                        printf(" ---------\n");
                    }
                    else if (dice == 4)
                    {
                        printf(" ---------\n");
                        printf("|         |\n");
                        printf("|  O   O  |\n");
                        printf("|         |\n");
                        printf("|  O   O  |\n");
                        printf("|         |\n");
                        printf(" ---------\n");
                    }
                    else if (dice == 5)
                    {
                        printf(" ---------\n");
                        printf("|         |\n");
                        printf("|  O   O  |\n");
                        printf("|    O    |\n");
                        printf("|  O   O  |\n");
                        printf("|         |\n");
                        printf(" ---------\n");
                    }
                    count++;
                    checkposition();
                    position = newposition;
                } while (position < 100);
                printf("You took %d throws to get to 100th position\n\n\n ", count);
                getch();
                z++;
                position = 0;
                count = 0;
                if (f != 1 && z != f)
                {
                    printf("Next Player's Chance\n");
                }
            }
        }
        getch();
    }
    return 0;
}

int checkposition()
{
    switch (position)
    {
    case 4:
        newposition = 14;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;

    case 9:
        newposition = 31;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 17:
        newposition = 7;
        {
            printf("Sorry but you have landed on a snake and your new position is %d", newposition);
        }
        break;
    case 21:
        newposition = 42;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 28:
        newposition = 84;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 37:
        newposition = 61;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 51:
        newposition = 67;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 72:
        newposition = 91;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 78:
        newposition = 92;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 80:
        newposition = 99;
        {
            printf("\n Well done ,you have landed on a ladder,you are now on space %d.\n", newposition);
        }
        break;
    case 46:
        newposition = 13;
        {
            printf("Sorry but you have landed on a snake and your new position is %d", newposition);
        }
        break;
    case 62:
        newposition = 19;
        {
            printf("Sorry but you have landed on a snake and your new position is %d", newposition);
        }
        break;
    case 54:
        newposition = 25;
        {
            printf("Sorry but you have landed on a snake and your new position is %d", newposition);
        }
        break;
    case 87:
        newposition = 36;
        {
            printf("Sorry but you have landed on a snake and your new position is %d", newposition);
        }
        break;
    case 64:
        newposition = 44;
        {
            printf("Sorry but you have landed on a snake and your new position is %d", newposition);
        }
        break;
    case 95:
        newposition = 75;
        {
            printf("Sorry but you have landed on a snake and your new position is %d", newposition);
        }
        break;
    default:
        return newposition = position;
    }
}