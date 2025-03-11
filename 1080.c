#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int numbers[100];
    int max_value = 9999;
    int position = 0;
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        numbers[i]=rand();
        printf("%d\n",numbers[i]);

        if (numbers[i]>max_value)
        {
            max_value=numbers[i];
            position=i+1;
        }
    }
    printf("%d\n", max_value);
    printf("%d\n", position);
    return 0;
}
