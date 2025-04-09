#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    while(i < n)
    {
        int space = 0;

        while(space < i)
        {
            printf("  ");
            space++;
        }

        int j = i;

        while(j < n)
        {
            printf("*   ");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
