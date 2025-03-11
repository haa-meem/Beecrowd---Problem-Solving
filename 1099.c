#include<stdio.h>
int main()
{
    int N,X,Y;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        int sum=0;
        scanf("%d %d",&X,&Y);
        if(X<Y)
        {
            for(int j=X+1; j<Y; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
        }
        else if(X>Y)
        {
            for(int j=X-1; j>Y; j--)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
        }
        else if(X==Y)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
