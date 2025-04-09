#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    while(i < n)
    {
        int space = i;

        while(space < n - 1)
        {
            printf("  ");
            space++;
        }

        int j = 0;

        while(j <= i)
        {
            printf("*   ");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
