#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num>=1)
        printf("The square root of %d is %d\n",num,num*num);
    else
        printf("The given number %d is invalid\n",num);
    return 0;
}
