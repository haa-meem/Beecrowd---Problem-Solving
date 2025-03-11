#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int rest=2,sum=rest+N;
    printf("%d\n",rest);
    printf("%d\n",sum);
    for(int i=1; i<=10000; i++)
    {
        sum=sum+N;
        if(sum>=10000)
        {
            break;
        }
        printf("%d\n",sum);
    }
    return 0;
}
