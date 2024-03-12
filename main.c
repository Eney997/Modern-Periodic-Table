#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    //here we go

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
            }else if(a==61){
                printf("Name : Promethium\n");
                printf("Symbol : Pm\n");
                printf("Automic Number : 61\n");
            }else if(a==62){
                printf("Name : Samarium\n");
                printf("Symbol : Sm\n");
                printf("Automic Number : 62\n");
            }else if(a==63){
                printf("Name : Europium\n");
                printf("Symbol : Eu\n");
                printf("Automic Number : 63\n");
            }else if(a==64){
                printf("Name : Gadolininium\n");
                printf("Symbol : Gd\n");
                printf("Automic Number : 64\n");
            }else if(a==65){
                printf("Name : Terbium\n");
                printf("Symbol : Tb\n");
                printf("Automic Number : 65\n");
            }else if(a==66){
                printf("Name : Dysprosium\n");
                printf("Symbol : Dy\n");
                printf("Automic Number : 66\n");
            }else if(a==67){
                printf("Name : Holmium\n");
                printf("Symbol : Ho\n");
                printf("Automic Number : 67\n");
            }else if(a==68){
                printf("Name : Erbium\n");
                printf("Symbol : Er\n");
                printf("Automic Number : 68\n");
            }else if(a==69){
                printf("Name : Thulium\n");
                printf("Symbol : Tm\n");
                printf("Automic Number : 69\n");
            }else if(a==70){
                printf("Name : Ytterbium\n");
                printf("Symbol : Yb\n");
                printf("Automic Number : 70\n");
            }else if(a==71){
                printf("Name : Lutetium\n");
                printf("Symbol : Lu\n");
                printf("Automic Number : 71\n");
            }else if(a==72){
                printf("Name : Hafnium\n");
                printf("Symbol : Hf\n");
                printf("Automic Number : 72\n");
            }else if(a==73){
                printf("Name : Tantalum\n");
                printf("Symbol : Ta\n");
                printf("Automic Number : 73\n");
            }else if(a==74){
                printf("Name : Tungsten\n");
                printf("Symbol : W\n");
                printf("Automic Number : 74\n");
            }else if(a==75){
                printf("Name : Rhenium\n");
                printf("Symbol : Re\n");
                printf("Automic Number : 75\n");
            }else if(a==76){
                printf("Name : Osmium\n");
                printf("Symbol : Os\n");
                printf("Automic Number : 76\n");
            }else if(a==77){
                printf("Name : Iridium\n");
                printf("Symbol : Ir\n");
                printf("Automic Number : 77\n");
            }else if(a==78){
                printf("Name : Platinum\n");
                printf("Symbol : Pt\n");
                printf("Automic Number : 78\n");
            }else if(a==79){
                printf("Name : Gold\n");
                printf("Symbol : Au\n");
                printf("Automic Number : 79\n");
            }else if(a==80){
                printf("Name : Mercury\n");
                printf("Symbol : Hg\n");
                printf("Automic Number : 80\n");
            }else if(a==81){
                printf("Name : Thalium\n");
                printf("Symbol : Ti\n");
                printf("Automic Number : 81\n");
            }else if(a==82){
                printf("Name : Lead\n");
                printf("Symbol : Pb\n");
                printf("Automic Number : 82\n");
            }else if(a==83){
                printf("Name : Bismuth\n");
                printf("Symbol : Bi\n");
                printf("Automic Number : 83\n");
            }else if(a==84){
                printf("Name : Polonium\n");
                printf("Symbol : Po\n");
                printf("Automic Number : 84\n");
            }else if(a==85){
                printf("Name : Astatine\n");
                printf("Symbol : At\n");
                printf("Automic Number : 85\n");
            }else if(a==86){
                printf("Name : Radon\n");
                printf("Symbol : Rn\n");
                printf("Automic Number : 86\n");
            }else if(a==87){
                printf("Name : Franciu\n");
                printf("Symbol : Fr\n");
                printf("Automic Number : 87\n");
            }else if(a==88){
                printf("Name : Radium\n");
                printf("Symbol : Ra\n");
                printf("Automic Number : 88\n");
            }else if(a==89){
                printf("Name : Actinium\n");
                printf("Symbol : Ac\n");
                printf("Automic Number : 89\n");
            }else if(a==90){
                printf("Name : Thorium\n");
                printf("Symbol : Th\n");
                printf("Automic Number : 90\n");
            }else if(a==91){
                printf("Name : Protactinium\n");
                printf("Symbol : Pa\n");
                printf("Automic Number : 91\n");
            }else if(a==92){
                printf("Name : Uranium\n");
                printf("Symbol : U\n");
                printf("Automic Number : 92\n");
            }else if(a==93){
                printf("Name : Neptunium\n");
                printf("Symbol : Np\n");
                printf("Automic Number : 93\n");
            }else if(a==94){
                printf("Name : Plutonium\n");
                printf("Symbol : Pu\n");
                printf("Automic Number : 94\n");
            }else if(a==95){
                printf("Name : Americium\n");
                printf("Symbol : Am\n");
                printf("Automic Number : 95\n");
            }else if(a==96){
                printf("Name : Curium\n");
                printf("Symbol : Cm\n");
                printf("Automic Number : 96\n");
            }else if(a==97){
                printf("Name : Berkelium\n");
                printf("Symbol : Bk\n");
                printf("Automic Number : 97\n");
            }else if(a==98){
                printf("Name : Californiu\n");
                printf("Symbol : Cf\n");
                printf("Automic Number : 98\n");
            }else if(a==99){
                printf("Name : Einsteinium\n");
                printf("Symbol : Es\n");
                printf("Automic Number : 99\n");
            }else if(a==100){
                printf("Name : Fermium\n");
                printf("Symbol : Fm\n");
                printf("Automic Number : 100\n");
            }else if(a==101){
                printf("Name : Mendelevium\n");
                printf("Symbol : Md\n");
                printf("Automic Number : 101\n");
            }else if(a==102){
                printf("Name : Nobelium\n");
                printf("Symbol : Nb\n");
                printf("Automic Number : 102\n");
            }else if(a==103){
                printf("Name : Lawrencium\n");
                printf("Symbol : Lr\n");
                printf("Automic Number : 103\n");
            }else if(a==104){
                printf("Name : Rutherfordium\n");
                printf("Symbol : Rf\n");
                printf("Automic Number : 104\n");
            }else if(a==105){
                printf("Name : Dubnium\n");
                printf("Symbol : Db\n");
                printf("Automic Number : 105\n");
            }else if(a==106){
                printf("Name : Seaborgium\n");
                printf("Symbol : Sg\n");
                printf("Automic Number : 106\n");
            }else if(a==107){
                printf("Name : Borhium\n");
                printf("Symbol : Bh\n");
                printf("Automic Number : 107\n");
            }else if(a==108){
                printf("Name : Hassium\n");
                printf("Symbol : Hs\n");
                printf("Automic Number : 108\n");
            }else if(a==109){
                printf("Name : Meitnerium\n");
                printf("Symbol : Mt\n");
                printf("Automic Number : 109\n");
            }else if(a==110){
                printf("Name : Darmshtadium\n");
                printf("Symbol : Ds\n");
                printf("Automic Number : 110\n");
            }else if(a==111){
                printf("Name : Roentgenium\n");
                printf("Symbol : Rg\n");
                printf("Automic Number : 111\n");
            }else if(a==112){
                printf("Name : Copenicium\n");
                printf("Symbol : Cn\n");
                printf("Automic Number : 112\n");
            }else if(a==113){
                printf("Name : Nihonium\n");
                printf("Symbol : Nh\n");
                printf("Automic Number : 113\n");
            }else if(a==114){
                printf("Name : Flerovium\n");
                printf("Symbol : Pl\n");
                printf("Automic Number : 114\n");
            }else if(a==115){
                printf("Name : MoscoviumYleebi\n");
                printf("Symbol : Mc\n");
                printf("Automic Number : 115\n");
            }else if(a==116){
                printf("Name : Livermorium\n");
                printf("Symbol : Lv\n");
                printf("Automic Number : 116\n");
            }else if(a==117){
                printf("Name : Tennessine\n");
                printf("Symbol : Ts\n");
                printf("Automic Number : 117\n");
            }else if (a==118){
                printf("Name : Oganesson\n");
                printf("Symbol : Og\n");
                printf("Automic Number : 118\n");
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
