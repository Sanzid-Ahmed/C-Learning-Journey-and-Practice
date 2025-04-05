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
            if (j == n * 2 - i - 2)
                break;

            printf(" ");
            j++;
        }
        while(j <= n * 2 - i - 2);

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
