#include <stdio.h>

void pattern (int n);

int main()
{
    int n;
    scanf("%d", &n);

    pattern (n);

    return 0;
}

void pattern (int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            printf("  ");
        }

        for(int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
