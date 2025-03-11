#include<stdio.h>
int main()
{
    int X,Y,N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        scanf("%d %d",&X,&Y);
        float Div=(float)X/Y;
        if(Y==0)
        {
            printf("divisao impossivel\n");
        }
        else if(X==0)
        {
            printf("0.0\n");
        }
        else
        {
            printf("%0.1f\n",Div);
        }
    }
    return 0;
}
