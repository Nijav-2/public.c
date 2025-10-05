#include<stdio.h>
int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5;
    int point01,point02,point03,point04,point05;
    int total,total1,total2;

    printf("----WELCOME TO THE QUIZ----\n");

    printf("-> press 1 to start the game\n");
    printf("-> press 0 to exit\n");
    scanf("%d",&i);

    if(i==1){
        printf("The game is started\n");
    }else if(i==0){
        printf("The game is ended\n");
    }else{
        printf("Invalid\n");
    }
    if(i==1){
        printf("1) Who is the father of C programming?\n");
        printf("1. Steve Jobs\n");
        printf("2. James Gosling\n");
        printf("3. Dennis Ritchie\n");
        printf("4. Rasmus Lerdorf\n");

        printf("Enter your choice:\n");
        scanf("%d",&ans1);

        if(ans1==3){
            printf("Your answer is correct\n");
            point1=5;
            printf("Your secured is %d points\n",point1);
        }else{
            printf("Your answer is wrong\n");
            point01=0;
            printf("Your secured is %d points\n",point01);
        }

        printf("2) All keywords in C are?\n");
        printf("1. LowerCase letters\n");
        printf("2. UpperCase letters\n");
        printf("3. CamelCase letters\n");
        printf("4. None of the mentioned\n");

        printf("Enter your choice:\n");
        scanf("%d",&ans2);

        if(ans2==1){
            printf("Your answer is correct\n");
            point2=5;
            printf("Your secured is %d points\n",point2);
        }else{
            printf("Your answer is wrong\n");
            point02=0;
            printf("Your secured is %d points\n",point02);
        }

        printf("3) What is the purpose of printf() function in C?\n");
        printf("1. To read the input from user\n");
        printf("2. To perform mathematical operation\n");
        printf("3. To display the output from console\n");
        printf("4. To define a new function\n");

        printf("Enter your choice:\n");
        scanf("%d",&ans3);

        if(ans3==3){
            printf("Your answer is correct\n");
            point3=5;
            printf("Your secured is %d points\n",point3);
        }else{
            printf("Your answer is wrong\n");
            point03=0;
            printf("Your secured %d points\n",point03);
        }

        printf("4) Which operator is used for equality in C?\n");
        printf("1. =\n");
        printf("2. ==\n");
        printf("3. !=\n");
        printf("4. ===\n");

        printf("Enter your choice:\n");
        scanf("%d",&ans4);

        if(ans4==2){
            printf("Your answer is correct\n");
            point4=5;
            printf("Your secured is %d points\n",point4);
        }else{
            printf("Your answer is wrong\n");
            point04=0;
            printf("Your secured is %d points\n",point04);
        }

        printf("5) What is the default value of global variable in C if not explicitly initalized?\n");
        printf("1. garbage value\n");
        printf("2. 0\n");
        printf("3. 1\n");
        printf("4. undefined\n");

        printf("Enter your choice:\n");
        scanf("%d",&ans5);

        if(ans5==2){
            printf("Your answer is correct\n");
            point5=5;
            printf("Your secured is %d points\n",point5);
        }else{
            printf("Your answer is wrong\n");
            point05=0;
            printf("Your secured is %d points\n",point05);
        }

        printf("---THANK YOU---\n");
    }
    return 0;
}
