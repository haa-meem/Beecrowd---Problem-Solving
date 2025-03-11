#include<stdio.h>
int main()
{
    int N,Amount,total=0,total_c = 0,total_r = 0,total_s = 0;
    char Type;
    float p_of_C,p_of_R,p_of_S;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d %c",&Amount,&Type);
        switch (Type)
        {
        case 'C':
            total_c=total_c+Amount;
            break;
        case 'R':
            total_r=total_r+Amount;
            break;
        case 'S':
            total_s=total_s+Amount;
            break;
        default:
            printf("Invalid type.\n");
        }
    }
    total=total_c+total_r+total_s;
    p_of_C=((float)total_c/total)*100;
    p_of_R=((float)total_r/total)*100;
    p_of_S=((float)total_s/total)*100;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",total_c);
    printf("Total de ratos: %d\n",total_r);
    printf("Total de sapos: %d\n",total_s);
    printf("Percentual de coelhos: %0.2f %%\n",p_of_C);
    printf("Percentual de ratos: %0.2f %%\n",p_of_R);
    printf("Percentual de sapos: %0.2f %%\n",p_of_S);
    return 0;
}
