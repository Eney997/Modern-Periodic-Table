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
            }else if(a==7){
                printf("Name : Nitrogen\n");
                printf("Symbol : N\n");
                printf("Automic Number : 7\n");
            }else if(a==8){
                printf("Name : Oxygen\n");
                printf("Symbol : O\n");
                printf("Automic Number : 8\n");
            }else if(a==9){
                printf("Name : Fluorine\n");
                printf("Symbol : F\n");
                printf("Automic Number : 9\n");
            }else if(a==10){
                printf("Name : Neon\n");
                printf("Symbol : Ne\n");
                printf("Automic Number : 10\n");
            }else if(a==11){
                printf("Name : Sadium\n");
                printf("Symbol : Na\n");
                printf("Automic Number : 11\n");
            }else if(a==12){
                printf("Name : Magnesium\n");
                printf("Symbol : Mg\n");
                printf("Automic Number : 12\n");
            }else if(a==13){
                printf("Name : Aluminum\n");
                printf("Symbol : Al\n");
                printf("Automic Number : 13\n");
            }else if(a==14){
                printf("Name : Silicon\n");
                printf("Symbol : Si\n");
                printf("Automic Number : 14\n");
            }else if(a==15){
                printf("Name : Phosphorus\n");
                printf("Symbol : P\n");
                printf("Automic Number : 15\n");
            }else if(a==16){
                printf("Name : Sulfur\n");
                printf("Symbol : S\n");
                printf("Automic Number : 16\n");
            }else if(a==17){
                printf("Name : Chlorine\n");
                printf("Symbol : Cl\n");
                printf("Automic Number : 17\n");
            }else if(a==18){
                printf("Name : Argon\n");
                printf("Symbol : Ar\n");
                printf("Automic Number : 18\n");
            }else if(a==19){
                printf("Name : Potassium\n");
                printf("Symbol : K\n");
                printf("Automic Number : 19\n");
            }else if(a==20){
                printf("Name : Calcium\n");
                printf("Symbol : Ca\n");
                printf("Automic Number : 20\n");
            }else if(a==21){
                printf("Name : Scandium\n");
                printf("Symbol : Sc\n");
                printf("Automic Number : 21\n");
            }else if(a==22){
                printf("Name : Titanium\n");
                printf("Symbol : Ti\n");
                printf("Automic Number : 22\n");
            }else if(a==23){
                printf("Name : Vanadium\n");
                printf("Symbol : V\n");
                printf("Automic Number : 23\n");
            }else if(a==24){
                printf("Name : Chromium\n");
                printf("Symbol : Cr\n");
                printf("Automic Number : 24\n");
            }else if(a==25){
                printf("Name : Manganese\n");
                printf("Symbol : Mn\n");
                printf("Automic Number : 25\n");
            }else if(a==26){
                printf("Name : Iron\n");
                printf("Symbol : Fe\n");
                printf("Automic Number : 26\n");
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
