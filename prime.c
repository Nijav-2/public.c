#include<stdio.h>
int main()
{
    int num,i,factor=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        factor=factor+1;
        }
    }
    if(factor==2){
        printf("The number which you entered is a prime");
    }else{
        printf("The number which you entered is not a prime");
    }
    return 0;
}
