/**
 * @file Vending_Machine.h
 * @author Sachin Kumar ()
 * @brief Dispense Required Item
 * @version 0.1
 * @date 2022-04-01
 *
 * @copyright Copyright (c) 2022
 *
 *
 */

 #ifndef __Vending_Machine.h__
 #define __Vending_Machine.h__

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void bill(int);
 void menu();
 void Chocolate();
 void Chips();
 void Staionary();
void main()


void menu()
{
    system("cls");

    printf("\n\n*****WELCOME TO VENDING MACHINE*****\n\n");
    printf(" [1] CHOCOLATES\n");
    printf(" [2] STATIONARY\n");
    printf(" [3] CHIPS\n");
    printf(" Please Enter Your Choice :-");
    char option;
    option = getche();
    switch(option)

    {
    case '1':
        Chocolate();
        break;
    case '2':
        Staionary();
        break;
    case '3':
        Chips();
        break;

    default:
        printf("\n\n\tNOT A VALID INPUT TRY AGAIN");
        menu();
    }
}

/**
* Displays the User Menu
* @param[in] Items
* @return Result of The User Screen
*/

void billing(int a)
{
    int amt;
    char ch;
        printf("\n\tPlease Enter The  Amount:-");
        scanf("%d",&amt);
        if(amt<a)
        {
            printf("\n\tInvalid Amount Please Try Again");
            menu();
        }
        else {

            printf("\n\tChange Available  : %d",amt-a);
            printf("\n\tPlease  Kindly Collect Your Change...");
        }
        printf("\nWanna Buy Anything Else? [y/n] :");
        ch = getche();
        if(ch == 'Y'||ch == 'y')
            menu();
        printf("\n\t****THANK YOU HAVE A NICE DAY****");
        exit(0);
        /**
* Displays the User Paying For The Item From User Menu
* @param[in] temp_state
* @return Result Item Despence Collect The Change
*/

#endif  /* #define __VENDING_MACHINE.H__*/

 
 
