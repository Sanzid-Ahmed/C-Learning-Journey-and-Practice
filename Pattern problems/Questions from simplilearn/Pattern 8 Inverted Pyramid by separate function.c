#include <stdio.h>

void pattern (int n);

int main()
{
    int num;
    scanf("%d", &num);

    pattern (num);
}

void pattern (int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int space = 0; space < i; space++)
        {
            printf("  ");
        }
        for(int j = i; j < n; j++)
        {
            printf("*   ");
        }

        printf("\n");
    }
}
