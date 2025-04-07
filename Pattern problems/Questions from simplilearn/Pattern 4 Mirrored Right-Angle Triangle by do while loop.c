#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    do
    {
        int j = i;

        do
        {
            if (j == n - 1)
                break;

            printf("  ");
            j++;
        }
        while(j < n);

        int k = 0;

        do
        {
            printf("* ");
            k++;
        }
        while(k <= i);

        printf("\n");
        i++;
    }
    while(i < n);

    return 0;
}
