#include<vending_machine.h>

 void bill(int); void menu(); void Chocolate(); void Chips(); void Staionary(); void main()

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


      
