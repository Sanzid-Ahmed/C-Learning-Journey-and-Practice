#include <stdio.h>

void pattern (int n);

int main()
{
    int n;
    scanf("%d", &n);

    pattern (n);
}

void pattern (int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int space = i; space < n - 1; space++)
        {
            printf("  ");
        }

        for(int j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for(int i = 1; i < n; i++)
    {
        for(int space = 0; space < i; space++)
        {
            printf("  ");
        }

        for(int j = i; j < n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
