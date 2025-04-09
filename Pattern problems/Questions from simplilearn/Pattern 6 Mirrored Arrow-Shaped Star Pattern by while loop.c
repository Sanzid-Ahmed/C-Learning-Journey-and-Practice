#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    while(i < n)
    {
        int space = i + 1;

        while(space < n)
        {
            printf("  ");
            space++;
        }

        int j = 0;

        while(j <= i)
        {
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }

    int ii = 1;

    while(ii < n)
    {
        int space = 0;

        while(space < ii)
        {
            printf("  ");
            space++;
        }

        int j = ii;

        while(j < n)
        {
            printf("* ");
            j++;
        }
        ii++;
        printf("\n");
    }

    return 0;
}
