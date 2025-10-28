#include<stdio.h>
#include<string.h>
struct customer{
    char name[50];
    unsigned long long phone;
    char address[50];
    int customer_id;
};
int main()
{
    int i,j;
    printf("Enter the number of customers:\n");
    scanf("%d",&j);
    struct customer c[j];
    for(i=0;i<j;i++)
    {
        printf("Enter the name of the %d customer :\n",i+1);
        scanf("%49s",&c[i].name);
        printf("Enter the phone number of the %d customer :\n",i+1);
        scanf("%llu",&c[i].phone);
        printf("Enter the address of the %d customer :\n",i+1);
        scanf("%49s",&c[i].address);
        printf("Enter the customer id of the %d customer :\n",i+1);
        scanf("%d",&c[i].customer_id);
    }
    printf("\n");
    for(i=0;i<j;i++)
    {
        printf("----Customer details-----\n");
        printf("The name of the %d customer is %s\n",i+1,c[i].name);
        printf("The phone number of the %d customer is %llu\n",i+1,c[i].phone);
        printf("The adress of the %d customer is %s\n",i+1,c[i].address);
        printf("THe customer id of the %d customer is %d\n",i+1,c[i].customer_id);
    }
    return 0;
}

