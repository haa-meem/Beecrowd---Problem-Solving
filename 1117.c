#include<stdio.h>
int main()
{
    int X,Y,Sum=0;
    scanf("%d %d",&X,&Y);
    if(X<Y)
    {
        for(int i=X; i<=Y; i++)
        {
            if(i%13==0)
            {
                continue;
            }
            Sum=Sum+i;
        }
        printf("%d\n",Sum);
    }
    else if(X>Y){
        for(int i=Y; i<=X; i++)
        {
            if(i%13==0)
            {
                continue;
            }
            Sum=Sum+i;
        }
        printf("%d\n",Sum);
    }
    else{
        printf("%d\n",Sum);
    }
    return 0;
}
