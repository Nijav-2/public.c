#include<stdio.h>
#include<string.h>
struct student{
    char student_name[50];
    int student_roll;
    char student_college[50];
    float student_percentage;
};
int main(){
    struct student s[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter the %d student name:\n",i+1);
        fgets(s[i].student_name,sizeof(s[i].student_name),stdin);
        s[i].student_name[strcspn(s[i].student_name,"\n")]=0;
        printf("Enter the %d student roll number:\n",i+1);
        scanf("%d",&s[i].student_roll);
        while(getchar()!='\n');
        printf("Enter the %d student college:\n",i+1);
        fgets(s[i].student_college,sizeof(s[i].student_college),stdin);
        s[i].student_college[strcspn(s[i].student_college,"\n")]=0;
        printf("Enter the %d student percentage:\n",i+1);
        scanf("%f",&s[i].student_percentage);
        while(getchar()!='\n');
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%d->student details:-\n",i+1);
        printf("The Name of the student:%s\n",s[i].student_name);
        printf("The Roll number of the student:%d\n",s[i].student_roll);
        printf("The student is studying in:%s\n",s[i].student_college);
        printf("The student secured:%f\n",s[i].student_percentage);
    }
    return 0;
}
