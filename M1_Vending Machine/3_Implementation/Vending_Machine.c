#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

 void bill(int);
 void menu();
 void Chocolate();
 void Chips();
 void Staionary();
void main()

{
    menu();
}

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

void Chocolate()

{
    system("cls");
    printf("\n\n*****Chocolates*****\n\n");
    printf("  [1] Silk\n");
    printf("  [2] Cadbory\n");
    printf("  [3] Snikers\n");
    printf("  [4] Galaxy\n");
    printf(" Kindly Enter Your Choice :-");
    char options;
    options = getche();
    int a,amt;
    char ch;
    switch(options)
    {
    case '1':
        printf("\n\tThe Price of Silk  :-- RS 15");
        printf("\n\tNet Quantity : 50gm");
        silk:
        printf("\n\tEnter No. Of  Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto silk;
        a=a*15;
        printf("\n\tPlease Pay RS %d",a);
        billing(a);

        break;
    case '2':
        printf("\n\tThe Price of Cadbory  :- RS 20");
        printf("\n\tNet Quantity : 25gm");
        Cadbory:
        printf("\n\tPlease Enter  The Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto Cadbory;
        a=a*20;
        printf("\n\tPlease  Pay RS %d",a);
       billing(a);
        break;
    case '3':
        printf("\n\t The Price of Snikers  :- RS 25");
        printf("\n\tNet  Quantity : 50gm");
        Snikers:
        printf("\n\tPlease Enter The  Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto Snikers;
                a=a*25;
        printf("\n\tPlease Pay RS %d",a);
        billing(a);
        break;
    case '4':
        printf("\n\t The Price of Galaxy is :- RS 50");
        printf("\n\tNet Quantity : 100gm");
        Galaxy:
        printf("\n\tPlease Enter  The Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto Galaxy;
        a=a*50;
        printf("\n\tPlease Pay RS %d",a);
        billing(a);
        break;
    default:
        printf("\n\n\tNOT A VALID INPUT TRY AGAIN");

        menu();
    }
}
void Staionary()
{
    system("cls");
    printf("\n\n*****Stationary*****\n\n");
    printf("  [1] PEN\n");
    printf("   [2] PENCIL\n");
    printf("   [3] NOTEBOOK\n");
    printf("Enter Your Choice :-");
    char option;
    option = getche();
    int a,amt;
    char ch;
    switch(option)

    {
    case '1':
        printf("\n\tThe Price of PEN is :- RS 10");
        printf("\n\tColor : Blue");
        pen:
        printf("\n\tPlease Enter The Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto pen;
        a=a*10;
        printf("\n\tPlease Pay RS %d",a);
       billing(a);
        break;
    case '2':
        printf("\n\tThe Price of Pencil is :- RS 5");
        printf("\n\tSize : Normal");
        pencil:
        printf("\n\tPlease Enter  The Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto pencil;
        a=a*5;
        printf("\n\tPlease  Pay RS %d",a);
       billing(a);
        break;
    case '3':
        printf("\n\tThe Price of NOTEBOOK is :- RS 100");
        printf("Size : LARGE");
        notebook:
        printf("\n\tPlease Enter The Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto notebook;
        a=a*100;
        printf("\n\tPlease Pay RS %d",a);
       billing(a);
        break;
    default:
        printf("\n\n\tNOT A VALID INPUT PLEASE TRY AGAIN");
        menu();
    }
}
void Chips()
{
    system("cls");
    printf("\n\n*****CHIPS*****\n\n");
    printf("    [1] lAYS\n");
    printf("    [2] BINGO\n");
    printf("    [3] DORITOS\n");
    printf("Enter Your Choice :-");
    char option;
    option = getche();
    int a,amt;
    char ch;
    switch(option)
    {
    case '1':
        printf("\n\tThe Price of Lays is :- RS 20");
        printf("\n\tNet Quantity : 60gm");
        lays:
        printf("\n\tPlease Enter  The Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto lays;
        a=a*20;
        printf("\n\tPlease Pay RS %d",a);
        billing(a);
        break;
    case '2':
        printf("\n\tThe Price of BINGO is :- RS 50");
        printf("\n\t NetQuantity : 60gm");
        bingo:
        printf("\n\tPlease Enter  The Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto bingo;
        a=a*50;
        printf("\n\tPlease Pay RS %d",a);
        billing(a);
        break;
    case '3':
        printf("\n\tThe Price of DORITOS is :- RS 60");
        printf("\n\tNet Quantity : 60gm");
        doritos:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&a);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto doritos;
        a=a*60;
        printf("\n\Please  Pay RS %d",a);
        billing(a);
        break;
    default:
        printf("\n\n\tNOT A VALID INPUT PLEASE TRY AGAIN");
        menu();

    }
}
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
}

