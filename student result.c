#include<stdio.h>
#include<math.h>
int main()
{
    int marks,result;
    int subject1,mark1;
    int subject2,mark2;
    int subject3,mark3;
    int subject4,mark4;
    int subject5,mark5;
    int subject6,mark6;
    subject1=printf("enter the mark1:");
    scanf("%d",&mark1);
    subject2=printf("enter the mark2:");
    scanf("%d",&mark2);
    subject3=printf("enter the mark3:");
    scanf("%d",&mark3);
    subject4=printf("enter the mark4:");
    scanf("%d",&mark4);
    subject5=printf("enter the mark5:");
    scanf("%d",&mark5);
    subject6=printf("enter the mark6:");
    scanf("%d",&mark6);
    marks=mark1+mark2+mark3+mark4+mark5+mark6;
    printf("The total mark is %d",marks);
    result=marks/6;
    printf("your percentage is %d",result);


        if(result>=91 || result==100){
            printf("You have secured A+\n");
    }
        else if(result>=81 && result<=90){
            printf("You have secured A\n");
    }
        else if(result>=71 && result<=80){
            printf("You have secured B+\n");
    }
        else if(result>=61 && result<=70){
            printf("You have secured B\n");
    }
        else if(result>=51 && result<=60){
            printf("You have secured C+\n");
    }
        else if(result>=41 && result<=50){
            printf("You have secured C\n");
    }
        else if(result>35 && result<=40){
            printf("You have secured D\n");
    }
        else{
            printf("Fail\n");
    }

    return 0;
}


