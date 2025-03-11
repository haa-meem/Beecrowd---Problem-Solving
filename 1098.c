#include<stdio.h>
int main()
{
    for(float i=0;i<2.2;i+=0.2)
    {
        for(float j=1;j<=3;j++){
            if(i==(int)i) {
                printf("I=%d ",(int)i);
            } else {
                printf("I=%.1f ",i);
            }

            float J=i+j;
            if(J==(int)J) {
                printf("J=%d\n",(int)J);
            } else {
                printf("J=%.1f\n",J);
            }
        }
    }
    return 0;
}

