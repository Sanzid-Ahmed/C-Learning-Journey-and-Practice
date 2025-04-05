#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int  i = 0;

    do
    {
        int j = 0;

        do
        {
            printf("*  ");
            j++;
        }
        while(j <= i);

        printf("\n");

        i++;
    }
    while(i < n);

    int ii = 0;

    do
    {
        int j = ii;

        do
        {
            printf("*  ");
            j++;
        }
        while(j <= n - 2);

        printf("\n");

        ii++;
    }
    while(ii <= n - 2);

    return 0;
}
