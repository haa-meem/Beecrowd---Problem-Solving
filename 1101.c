#include<stdio.h>
int main()
{
    int M,N;
    for(int i=0; i<=10; i++)
    {
        int Sum=0;
        scanf("%d %d",&M,&N);
        if(M<=0||N<=0)
        {
            break;
        }
        else if(M>N)
        {
            for(int j=N; j<=M; j++)
            {
                Sum=Sum+j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",Sum);
        }
        else if(M<N)
        {
            for(int j=M; j<=N; j++)
            {
                Sum=Sum+j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",Sum);
        }
    }
    return 0;
}
