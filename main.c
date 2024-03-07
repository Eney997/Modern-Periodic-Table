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
            }else if(a==27){
                printf("Name : Cobalt\n");
                printf("Symbol : Co\n");
                printf("Automic Number : 27\n");
            }else if(a==28){
                printf("Name : Nickel\n");
                printf("Symbol : Ni\n");
                printf("Automic Number : 28\n");
            }else if(a==29){
                printf("Name : Copper\n");
                printf("Symbol : Cu\n");
                printf("Automic Number : 29\n");
            }else if(a==30){
                printf("Name : Zinc\n");
                printf("Symbol : Zn\n");
                printf("Automic Number : 30\n");
            }else if(a==31){
                printf("Name : Gallium\n");
                printf("Symbol : Ga\n");
                printf("Automic Number : 31\n");
            }else if(a==32){
                printf("Name : germanium\n");
                printf("Symbol : Ge\n");
                printf("Automic Number : 32\n");
            }else if(a==33){
                printf("Name : Arsenic\n");
                printf("Symbol : As\n");
                printf("Automic Number : 33\n");
            }else if(a==34){
                printf("Name : Selenium\n");
                printf("Symbol : Se\n");
                printf("Automic Number : 34\n");
            }else if(a==35){
                printf("Name : Bromine\n");
                printf("Symbol : Br\n");
                printf("Automic Number : 35\n");
            }else if(a==36){
                printf("Name : Krypton\n");
                printf("Symbol : Kr\n");
                printf("Automic Number : 36\n");
            }else if(a==37){
                printf("Name : Rubidium\n");
                printf("Symbol : Rb\n");
                printf("Automic Number : 37\n");
            }else if(a==38){
                printf("Name : Strontium\n");
                printf("Symbol : Sr\n");
                printf("Automic Number : 38\n");
            }else if(a==39){
                printf("Name : Yttrium\n");
                printf("Symbol : Y\n");
                printf("Automic Number : 39\n");
            }else if(a==40){
                printf("Name : Zirconium\n");
                printf("Symbol : Zr\n");
                printf("Automic Number : 40\n");
            }else if(a==41){
                printf("Name : Biobium\n");
                printf("Symbol : Nb\n");
                printf("Automic Number : 41\n");
            }else if(a==42){
                printf("Name : Molybdenum\n");
                printf("Symbol : Mb\n");
                printf("Automic Number : 42\n");
            }else if(a==43){
                printf("Name : Technetium\n");
                printf("Symbol : Tc\n");
                printf("Automic Number : 43\n");
            }else if(a==44){
                printf("Name : Ruthenium\n");
                printf("Symbol : Ru\n");
                printf("Automic Number : 44\n");
            }else if(a==45){
                printf("Name : Rhodium\n");
                printf("Symbol : Rh\n");
                printf("Automic Number : 45\n");
            }else if(a==46){
                printf("Name : Palladium\n");
                printf("Symbol : Pd\n");
                printf("Automic Number : 46\n");
            }else if(a==47){
                printf("Name : Silver\n");
                printf("Symbol : Ag\n");
                printf("Automic Number : 47\n");
            }else if(a==48){
                printf("Name : Cadmium\n");
                printf("Symbol : Cd\n");
                printf("Automic Number : 48\n");
            }else if(a==49){
                printf("Name : Indium\n");
                printf("Symbol : In\n");
                printf("Automic Number : 49\n");
            }else if(a==50){
                printf("Name : Tin\n");
                printf("Symbol : Sn\n");
                printf("Automic Number : 50\n");
            }else if(a==51){
                printf("Name : Antimony\n");
                printf("Symbol : Sb\n");
                printf("Automic Number : 51\n");
            }else if(a==52){
                printf("Name : Tellurium\n");
                printf("Symbol : Te\n");
                printf("Automic Number : 53\n");
            }else if(a==53){
                printf("Name : Iodine\n");
                printf("Symbol : I\n");
                printf("Automic Number : 53\n");
            }else if(a==54){
                printf("Name : Xenon\n");
                printf("Symbol : Xe\n");
                printf("Automic Number : 54\n");
            }else if(a==55){
                printf("Name : Caesium\n");
                printf("Symbol : Cs\n");
                printf("Automic Number : 55\n");
            }else if(a==56){
                printf("Name : Barium\n");
                printf("Symbol : Ba\n");
                printf("Automic Number : 56\n");
            }else if(a==57){
                printf("Name : Lanthanum\n");
                printf("Symbol : La\n");
                printf("Automic Number : 57\n");
            }else if(a==58){
                printf("Name : Cerium\n");
                printf("Symbol : Ce\n");
                printf("Automic Number : 58\n");
            }else if(a==59){
                printf("Name : Praseodymium\n");
                printf("Symbol : Pr\n");
                printf("Automic Number : 59\n");
            }else if(a==60){
                printf("Name : Neodymium\n");
                printf("Symbol : Nd\n");
                printf("Automic Number : 60\n");
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
