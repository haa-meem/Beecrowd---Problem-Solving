#include<stdio.h>
int main()
{
    int X,Y;
    for(int i=0; i<=10; i++)
    {
        scanf("%d %d",&X,&Y);
        if(X==0||Y==0)
        {
            break;
        }
        else if(X>0&&Y>0)
        {
            printf("primeiro\n");
        }
        else if(X>0&&Y<0)
        {
            printf("quarto\n");
        }
        else if(X<0&&Y<0)
        {
            printf("terceiro\n");
        }
        else if(X<0&&Y>0)
        {
            printf("segundo\n");
        }
    }
    return 0;
}
