#include<stdio.h>
int main()
{
    int n,q,r,result=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        result=result*10+r;
        q=q/10;
    }
    if(result==n)
        printf("This is a palindrome");
    else
        printf("This is not a palindrome");
    return 0;
}
