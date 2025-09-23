#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int var;
    int choice;
    printf("1\n"); //For Addition
    printf("2\n"); //For Subtraction
    printf("3\n"); //For Multiplication
    printf("4\n"); //For Division
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("Enter any two numbers to perform addition:\n");
        scanf("%d",&num);
        scanf("%d",&var);
        printf("The sum of %d and %d is %d\n",num,var,num+var);
    }else if(choice==2){
        printf("Enter any two numbers to perform subtraction:\n");
        scanf("%d",&num);
        scanf("%d",&var);
        printf("The sub of %d and %d is %d\n",num,var,num-var);
    }else if(choice==3){
        printf("Enter any two numbers to perform multiplication:\n");
        scanf("%d",&num);
        scanf("%d",&var);
        printf("The mul of %d and %d is %d\n",num,var,num*var);
    }else{
        printf("Enter any two numbers to perform division:\n");
        scanf("%d",&num);
        scanf("%d",&var);
        printf("The div of %d and %d is %d\n",num,var,num/var);
    }

    return 0;
}
