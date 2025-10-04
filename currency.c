#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
   double inr,result;
   int choice;
   printf("Enter your value in form of INR:\n");
   scanf("%lf",&inr);
   printf("Choose any one form of conversion\n");
   printf("1.United States of America\n");
   printf("2.Eurozone\n");
   printf("3.United Kingdom\n");
   printf("4.Japan\n");
   printf("5.China\n");
   printf("6.UAE\n");
   printf("7.Saudhi Arabia\n");
   printf("8.Singapore\n");
   printf("9.Australia\n");
   printf("10.Canada\n");
   printf("11.Switzerland\n");
   printf("12.Russia\n");
   printf("13.South Africa\n");
   printf("14.Brazil\n");
   printf("15.Bangladesh\n");
   printf("16.Nepal\n");
   printf("17.Sri Lanka\n");
   printf("18.Thailand\n");
   printf("19.Malaysia\n");
   printf("20.Indonesia\n");
   printf("Enter your choice code(1-20):\n");
   scanf("%d",&choice);
   switch(choice){
       case 1:printf("Your converted currency is %.4lf USD",inr*0.012);
              break;
       case 2:printf("Your converted currency is %.4lf EUR",inr*0.011);
              break;
       case 3:printf("Your converted currency is %.4lf GBP",inr*0.0095);
              break;
       case 4:printf("Your converted currency is %.4lf JPY",inr*1.95);
              break;
       case 5:printf("Your converted currency is %.4lf CNY",inr*0.087);
              break;
       case 6:printf("Your converted currency is %.4lf AED",inr*0.044);
              break;
       case 7:printf("Your converted currency is %.4lf SAR",inr*0.045);
              break;
       case 8:printf("Your converted currency is %.4lf SGD",inr*0.016);
              break;
       case 9:printf("Your converted currency is %.4lf AUD",inr*0.018);
              break;
       case 10:printf("Your converted currency is %.4lf CAD",inr*0.016);
               break;
       case 11:printf("Your converted currency is %.4lf CHF",inr*0.011);
               break;
       case 12:printf("Your converted currency is %.4lf RUB",inr*1.10);
               break;
       case 13:printf("Your converted currency is %.4lf ZAR",inr*0.22);
               break;
       case 14:printf("Your converted currency is %.4lf BRL",inr*0.064);
               break;
       case 15:printf("Your converted currency is %.4lf BDT",inr*1.42);
               break;
       case 16:printf("Your converted currency is %.4lf NPR",inr*1.60);
               break;
       case 17:printf("Your converted currency is %.4lf LKR",inr*3.65);
               break;
       case 18:printf("Your converted currency is %.4lf THB",inr*0.45);
               break;
       case 19:printf("Your converted currency is %.4lf MYR",inr*0.058);
               break;
       case 20:printf("Your converted currency is %.4lf IDR",inr*185.0);
               break;
   }
   return 0;
}
