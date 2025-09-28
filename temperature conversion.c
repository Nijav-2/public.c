#include<stdio.h>
#include<math.h>
int main()
{
    int temperature;
    printf("Enter your choice(1-12):\n");
    scanf("%d",&temperature);

    switch(temperature){
        case 1:printf("Enter the temperature in terms of celsius:\n");  //from celcius to fahernheit
               scanf("%d",&temperature);
               printf("The converted temperature from celcius to fahernheit:%f\n",(temperature*9.0/5.0)+32);
               break;
        case 2:printf("Enter the temperature in terms of celsius:\n");  //from celsius to kelvin
               scanf("%d",&temperature);
               printf("The converted temperature from celsius to kelvin:%f\n",temperature+273.15);
               break;
        case 3:printf("Enter the temperature in terms of celsius:\n");  //from celsius to rankine
               scanf("%d",&temperature);
               printf("The converted temperature from celsius to rankine:%f\n",(temperature+273.15)*9.0/5.0);
               break;
        case 4:printf("Enter the temperature in terms of fahrenheit:\n");  //from fahrenheit to celsius
               scanf("%d",&temperature);
               printf("The converted temperature from fahrenheit to celsius:%f\n",(temperature-32)*5.0/9.0);
               break;
        case 5:printf("Enter the temperature in terms of fahrenheit:\n");  //from fahrenheit to kelvin
               scanf("%d",&temperature);
               printf("The converted temperature from fahrenheit to kelvin:%f\n",(temperature+459.67)*5.0/9.0);
               break;
        case 6:printf("Enter the temperature in terms of fahrenheit:\n");  //from fahrenheit to rankine
               scanf("%d",&temperature);
               printf("The converted temperature from fahrenheit to rankine:%f\n",temperature+459.67);
               break;
        case 7:printf("Enter the temperature in terms of kelvin:\n");  //from kelvin to celsius
               scanf("%d",&temperature);
               printf("The converted temperature from kelvin to celsius:%f\n",temperature-273.15);
               break;
        case 8:printf("Enter the temperature in terms of kelvin:\n");  //from kelvin to fahrenheit
               scanf("%d",&temperature);
               printf("The converted temperature from kelvin to fahrenheit:%f\n",(temperature*9.0/5.0)-459.67);
               break;
        case 9:printf("Enter the temperature in terms of kelvin:\n");  //from kelvin to rankine
               scanf("%d",&temperature);
               printf("The converted temperature from kelvin to rankine:%f\n",temperature*9.0/5.0);
               break;
        case 10:printf("Enter the temperature in terms of rankine:\n");  //from rankine to celsius
                scanf("%d",&temperature);
                printf("The converted temperature from rankine to celsius:%f\n",(temperature-491.67)*5.0/9.0);
                break;
        case 11:printf("Enter the temperature in terms of rankine:\n");  //from rankine to fahrenheit
                scanf("%d",&temperature);
                printf("The converted temperature from rankine to fahrenheit:%f\n",temperature-459.67);
                break;
        case 12:printf("Enter the temperature in terms of rankine:\n");  //from rankine to kelvin
                scanf("%d",&temperature);
                printf("The converted temperature from rankine to kelvin:%f\n",temperature*5.0/9.0);
                break;
    }
    return 0;
}

