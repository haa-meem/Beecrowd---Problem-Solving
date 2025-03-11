#include<stdio.h>
int main()
{
    int X,N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {N
        scanf("%d",&X);
        if(X==0)
        {
            printf("NULL\n");
        }
        else if(X%2==0)
        {
            printf("EVEN ");
            if(X>0)
            {
                printf("POSITIVE\n");
            }
            else
            {
                printf("NEGATIVE\n");
            }
        }
        else
        {
            printf("ODD ");
            if(X>0)
            {
                printf("POSITIVE\n");
            }
            else
            {
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}
