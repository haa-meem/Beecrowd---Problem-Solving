#include<stdio.h>
int main()
{
    int X,A=0,G=0,D=0;
    for(int i=0; i<=10; i++)
    {
        scanf("%d",&X);
        if(X==1)
        {
            A=A+1;
        }
        else if(X==2)
        {
            G=G+1;
        }
        else if(X==3)
        {
            D=D+1;
        }
        else if(X==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",A,G,D);
    return 0;
}
