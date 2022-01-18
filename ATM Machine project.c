#include<stdio.h>
unsigned long balance=10000,deposit,withdraw;
int choice,k,pin,count=0;;
char transaction='y';

int main()
{
    while(pin!=12345)
    {
        printf("ENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d",&pin);
        if(pin==12345)
        {
            count=0;
        }

        else
        {
            printf("WRONG PASSWORD\n");
            printf("ENTER A VALID PASSWORD\n");
        }
    }
    if(count==0)
    {
        do
        {
            printf("\n$$$$$$$$$$$$$*-WELCOME TO ATM SERVICE-*$$$$$$$$$$$$$$\n\n");
            printf("\t\t1. Check Balance\n");
            printf("\t\t2. Withdraw\n");
            printf("\t\t3. Cash Deposit\n");
            printf( "\t\t4. No Transactions\n");
            printf("\n$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n\n");
            printf("Enter your choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
                printf("\n YOUR BALANCE IN BDT: %lu ",balance);
                break;

            case 2:
                printf("\n ENTER THE AMOUNT TO WITHDRAW:  ");
                scanf("%d",&withdraw);
                if(withdraw%100 != 0)
                {
                    printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

                }
                else if(withdraw>(balance-500))
                {
                    printf("\n INSUFFICIENT BALANCE");
                }
                else
                {
                    balance -= withdraw;
                    printf("\n\nPLEASE COLLECT YOUR CASH");
                    printf("\n YOUR CURRENT BALANCE IS %lu",balance);
                }
                break;

            case 3:
                printf("\n ENTER THE AMOUNT TO DEPOSIT");
                scanf("%lu",&deposit);
                balance+=deposit;
                printf("YOUR BALANCE IS %lu",balance);
                break;
            case 4:
                printf("\n THANK YOU FOR USING THE ATM SERVICE");
                break;
            default:
                printf("\n INVALID CHOICE");
            }
            printf("\n\n DO YOU WANT TO DO ANOTHER TRANSACTION?(Y/N): \n");
            fflush(stdin);
            scanf("%c",&transaction);
            if(transaction=='n'|| transaction=='N')
                k=1;
        }
        while(!k);
        printf("\n\n THANKS FOR USING MY ATM SERVICE\n");
        printf("\tHAVE A NICE DAY\n");

    }

}
