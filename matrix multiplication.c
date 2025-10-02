#include<stdio.h>
#define max 50
int main()
{
    int a[max][max],b[max][max],product[max][max];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;

    printf("Enter the rows and columns of matrix A\n");
    scanf("%d%d",&arows,&acolumns);

    printf("Enter the elements in the matrix A\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the rows and colums of matrix B\n");
    scanf("%d%d",&brows,&bcolumns);

    if(brows!=acolumns)
        printf("Sorry! we can't multiply this matrix");

    else
        printf("Enter the elements in the matrix B\n");
        for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }


    printf("\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            for(k=0;k<acolumns;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
             product[i][j]=sum;
             sum=0;
        }
    }

    printf("The result is\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            printf("%d",product[i][j]);
        }

        printf("\n");

    }

    return 0;

}
