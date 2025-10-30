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
    int i,j,choice;
    char found;
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
        continue;
    }
    if(choice==1){
        char searchName[50];
        printf("Enter name to search:\n");
        scanf("%49s",&searchName);

        for(i=0;i<j;i++){
            if(strcmp(c[i].name,searchName)==0){
                printf("customer found\n");
                printf("Name:%s\nPhone:%llu\nAddress:%s\nCustomer ID:%d\n",c[i].name,c[i].phone,c[i].address,c[i].customer_id);
                found=1;
                break;
            }
        }
    }
    return 0;
}

