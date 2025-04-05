#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    while(i <= n)
    {
        int j = 0;

        while(j < i)
        {
            printf("*  ");
            j++;
        }
        printf("\n");

        i++;
    }

    int ii = 0;

    while(ii <= n - 1)
    {
        int j = ii;

        while(j <= n - 2)
        {
            printf("*  ");
            j++;
        }

        printf("\n");

        ii++;
    }

    return 0;
}
