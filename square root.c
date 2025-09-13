#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);

    if(num>=0)
        printf("The square root value of %d is %.2f",num,sqrt(num));
    else
        printf("The number is invalid try any other number");
    return 0;
}
