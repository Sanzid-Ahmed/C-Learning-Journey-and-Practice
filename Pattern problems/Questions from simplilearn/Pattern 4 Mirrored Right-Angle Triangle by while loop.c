#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    while(i < n)
    {
        int j = i;

        while(j < n * 2 - i - 2)
        {
            printf(" ");
            j++;
        }

        int k = 0;

        while(k < i)
        {
            printf("* ");
            k++;
        }

        printf("\n");
        i++;
    }

    return 0;

}
