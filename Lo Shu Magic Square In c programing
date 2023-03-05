#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int a[ROW][COL],i,j,m,n;
    printf("enter Your dimension :");
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter Your Values : ");
            scanf("%d",&a[i][j]);
        }
    }
    int result = check(a,m,n);
    if(result==1)
        printf("this is magic square.\n");
    else
        printf("this is not magic square.\n");
}

int check(int a[][COL],int m,int  n)
{
    int leftSum=0,rightSum=0;
    int rowSum[100]={0},colSum[100]={0};
    int i,j;
    for(i=0; i<m; i++)
    {
        leftSum = leftSum + a[i][i];
    }
     for(i=0,j=n-1; i<m; i++,j--)
    {
        rightSum = rightSum + a[i][j];
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++ )
        {
            rowSum[i]=rowSum[i] + a[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++ )
        {
            colSum[i]=colSum[i] + a[j][i];
        }
    }
    int flag=1;
for(i=0; i<m; i++)
    {
        if(rowSum[i]!=colSum[i])
            flag=0;
    }
    if((leftSum==rightSum) && flag)
        return 1;
    else
        return -1;
}



