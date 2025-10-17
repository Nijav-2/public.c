#include<stdio.h>
int main()
{
    int i,j,k;
    int Exit;
    int ex;
    printf("----WELCOME TO PREODIC TABLE----\n\n");

    printf("PRESS 1 to continue\n\n");
    scanf("%d",&i);
    if(i==1)
        printf("Search the element by using the atomic number:\n");
        scanf("%d",&j);

        if(j==1){
            printf("Element:Hydrogen\n");
            printf("Atomic Mass:1.008\n");
            printf("Symbol:H\n");
            printf("State:Gas\n");
            printf("Type:Non-Metal\n");
        }else if(j==2){
            printf("Element:Helium\n");
            printf("Atomic Mass:4.0026\n");
            printf("Symbol:He\n");
            printf("State:Gas\n");
            printf("Type:Noble Gas\n");
        }else if(j==3){
            printf("Element:Lithium\n");
            printf("Atomic Mass:6.94\n");
            printf("Symbol:Li\n");
            printf("State:Metal(Alkali)\n");
            printf("Type:Solid\n");
        }else if(j==4){
            printf("Element:Beryllium\n");
            printf("Atomic Mass:9.0122\n");
            printf("Symbol:Be\n");
            printf("State:Metal(Alkaline Earth)\n");
            printf("Type:Solid\n");
        }else if(j==5){
            printf("Element:Boron\n");
            printf("Atomic Mass:10.81\n");
            printf("Symbol:B\n");
            printf("State:Metalloid\n");
            printf("Type:Solid\n");
        }else if(j==6){
            printf("Element:Carbon\n");
            printf("Atomic Mass:12.011\n");
            printf("Symbol:C\n");
            printf("State:Non-Metal\n");
            printf("Type:Solid\n");
        }else if(j==7){
            printf("Element:Nitrogen\n");
            printf("Atomic Mass:14.007\n");
            printf("Symbol:N\n");
            printf("State:Non-Metal\n");
            printf("Type:Gas\n");
        }else if(j==8){
            printf("Element:Oxygen\n");
            printf("Atomic Mass:15.999\n");
            printf("Symbol:O\n");
            printf("State:Non-Metal\n");
            printf("Type:Gas\n");
        }else if(j==9){
            printf("Element:Fluorine\n");
            printf("Atomic Mass:18.998\n");
            printf("Symbol:F\n");
            printf("State:Non-Metal(Halogen)\n");
            printf("Type:Gas\n");
        }else if(j==10){
            printf("Element:Neon\n");
            printf("Atomic Mass:20.180\n");
            printf("Symbol:Ne\n");
            printf("State:Noble Gas\n");
            printf("Type:Gas\n");
        }else if(j==11){
            printf("Element:Sodium\n");
            printf("Atomic Mass:22.990\n");
            printf("Symbol:Na\n");
            printf("State:Metal(Alkali)\n");
            printf("Type:Solid\n");
        }else if(j==12){
            printf("Element:Magnesium\n");
            printf("Atomic Mass:24.305\n");
            printf("Symbol:Mg\n");
            printf("State:Metal(Alkali metal)\n");
            printf("Type:Solid\n");
        }else if(j==13){
            printf("Element:Aluminium\n");
            printf("Atomic Mass:26.982\n");
            printf("Symbol:Al\n");
            printf("State:Metal\n");
            printf("Type:Solid\n");
        }else if(j==14){
            printf("Element:Silicon\n");
            printf("Atomic Mass:28.085\n");
            printf("Symbol:Si\n");
            printf("State:Metalloid\n");
            printf("Type:Solid\n");
        }else if(j==15){
            printf("Element:Phosphorus\n");
            printf("Atomic Mass:30.974\n");
            printf("Symbol:P\n");
            printf("State:Non-Metal\n");
            printf("Type:Solid\n");
        }else if(j==16){
            printf("Element:Sulphur\n");
            printf("Atomic Mass:32.06\n");
            printf("Symbol:S\n");
            printf("State:Non-Metal\n");
            printf("Type:Solid\n");
        }else if(j==17){
            printf("Element:Chlorine\n");
            printf("Atomic Mass:35.45\n");
            printf("Symbol:Cl\n");
            printf("State:Non-Metal(Halogen)\n");
            printf("Type:Gas\n");
        }else if(j==18){
            printf("Element:Argon\n");
            printf("Atomic Mass:39.948\n");
            printf("Symbol:Ar\n");
            printf("State:Noble Gas\n");
            printf("Type:Gas\n");
        }else if(j==19){
            printf("Element:Potassium\n");
            printf("Atomic Mass:39.098\n");
            printf("Symbol:K\n");
            printf("State:Metal(Alkali)\n");
            printf("Type:Solid\n");
        }else if(j==20){
            printf("Element:Calcium\n");
            printf("Atomic Mass:40.078\n");
            printf("Symbol:Ca\n");
            printf("State:Metal(Alkaline Metal)\n");
            printf("Type:Solid\n");
        }else{
            printf("---UNDER DEVELOPMENT---\n");
        }
        return 0;

}
