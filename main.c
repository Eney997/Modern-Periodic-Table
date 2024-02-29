#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to Modern Periodic Table\n\n");

    printf("> Enter 1 to know about an element\n\n");
    printf("> Enter 2 to close the periodic table\n\n");

    printf("Enter\n");
    scanf("%d", &n);

    if(n==1){
        printf("> Press 3 to search the element by automatic number\n\n");
        printf("Enter\n");
        scanf("%d", &m);

        if(m==3){
            printf("Enter the atomic number of the element to be searched: ");
            scanf("%d", &a);

            if(a==1){
                printf("Name : Hydrogen\n");
                printf("Symbol : H\n");
                printf("Automic Number : 1\n");
            }else if(a==2){
                printf("Name : hellum\n");
                printf("Symbol : He\n");
                printf("Automic Number : 2\n");
            }else if(a==3){
                printf("Name : Lithium\n");
                printf("Symbol : Li\n");
                printf("Automic Number : 3\n");
            }else if(a==4){
                printf("Name : Berylium\n");
                printf("Symbol : Be\n");
                printf("Automic Number : 4\n");
            }else if(a==5){
                printf("Name : Boron\n");
                printf("Symbol : B\n");
                printf("Automic Number : 5\n");
            }else if(a==6){
                printf("Name : Carbon\n");
                printf("Symbol : C\n");
                printf("Automic Number : 6\n");
            }
        }
    }else if(n==2){
       printf("Do you want to exit? (Yes/No)\n");
       printf("> Press 6 for yes\n");
       printf("> Press 7 for No\n");

       printf("Enter\n");
       scanf("%d", &Exit);

       if(Exit==6){
        printf("Are you sure you want to close the periodic table?(Yes/No)\n");
        printf("> Press 4 for yes\n");
        printf("> Press 5 for No\n");

        printf("Enter\n");
        scanf("%d", &Exit);

        if(Exi==4){
            printf("The periodic table has closed");
        }
        else if(Exi == 5){
            printf("Periodic table has not closed and you can continue to learn more about the elements\n\n");

            printf("Enter the atomic number of the element to be search : \n\n");
            scanf("%d", &a);

            if(a==1){
                 printf("Name : Hydrogen\n");
                 printf("Symbol : H\n");
                 printf("Automic Number : 1\n");
            }
        }
       }
       else if(Exit == 7){
        printf("Periodic table has not closed and you can continue to learn more elements\n\n");
        printf("Enter the atomic number of the element to be searched : ");
        scanf("%d", &a);

        if(a==1){
            printf("Name : Hydrogen\n");
            printf("Symbol : H\n");
            printf("Automic Number : 1\n");
        }
       }
    }
    return 0;
}
