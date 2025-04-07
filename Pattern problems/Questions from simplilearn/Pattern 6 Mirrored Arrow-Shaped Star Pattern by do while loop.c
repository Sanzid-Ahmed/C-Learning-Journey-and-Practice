#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    do
    {
        int space = i + 1;

        do
        {
            if(space == n)
                break;
            printf("  ");
            space++;
        }
        while(space < n);

        int j = 0;

        do
        {
            printf("* ");
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
        int space = 0;

        do
        {
            printf("  ");
            space++;
        }
        while(space <= ii);

        int j = ii;

        do
        {
            printf("* ");
            j++;
        }
        while(j < n - 1);

        printf("\n");
        ii++;
    }
    while(ii < n - 1);

    return 0;
}
