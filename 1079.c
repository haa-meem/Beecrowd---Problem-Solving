#include<stdio.h>
int main()
{
    int N;
    float X,Y,Z;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        scanf("%f %f %f",&X,&Y,&Z);
        float w_avg=(X*2+Y*3+Z*5)/(2+3+5);
        printf("%0.1f\n",w_avg);
    }
    return 0;
}
