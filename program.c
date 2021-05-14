#include <stdio.h>
#include <conio.h>
#include <process.h>

int main()
{
    int ans, code, mon, dat;
    int res;
    printf("Hey dude! Do you have a minute ? I have a magic trick to show you.\n");
    printf("A simple mathematical trick that will amaze you.\n");
    printf("would you like to join  0---(FOR NO)/1----(FOR YES) \n");
    scanf("%d", &res);

    switch (res)
    {xx:
    case 1:
        printf(".............welcome dude!...................\n");
        printf("\tjan-01\n\t\tfeb-02\n\t\t\tmar-03\n\t\t\t\tapr-04\n\t\t\t\t\tmay-05\n\t\t\t\t\t\tjune-06\n\t\t\t\t\tjuly-07\n\t\t\t\taug-08\n \t\t\tsep-09\n\t\toct-10\n\tnov-11 \n dec-12\n");
        printf("\n\nGet the birth month number in your head and press ANY key to continue ");
        getch();
        printf("\n\nNOW MULTIPLY BY 5 AND PRESS ANY KEY FOR NEXT STEP ");
        getch();
        printf("\n\nADD 6 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\n\nMULTIPLY BY 4 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\n\nADD 9 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\n\nMULTIPLY BY 5 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\n\nADD BIRTHDATE TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\n\nEnter the final result you got : ");
        scanf("%d", &ans);
        code = ans - 165;
        mon = code / 100;
        dat = code % 100;
        printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
        printf("Brithdate You thought of (date-month): %d-%d  \n", dat, mon);
        printf("iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii\n");
        printf("\n\nDid you want to try this trick again 0---(FOR NO)/1----(FOR YES) : \n");
        scanf("%d", &res);
        if (res == 1)
            goto xx;
        else
            break;
        
    default:
        printf("Get lost and play with kitchen set \n");
        break;
    }
 printf("Thank you ! \n");
    return 0;
}
