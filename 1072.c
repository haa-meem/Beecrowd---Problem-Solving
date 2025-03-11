#include<stdio.h>
int main()
{
    int X,N,count1=0,count2=0;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        scanf("%d",&X);
        if(X>=10&&X<=20)
        {
            count1=count1+1;
        }
        else
        {
            count2=count2+1;
        }
    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
    return 0;
}
