#include <stdio.h>

void pattern (int num);

int main()
{
    int n;
    scanf("%d", &n);

    pattern(n);

    return 0;
}

void pattern(int num)
{
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
