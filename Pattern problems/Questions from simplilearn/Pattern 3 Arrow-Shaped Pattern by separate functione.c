#include <stdio.h>

int user (void);
void pattern (int n);

int main()
{
    user();
}

int user(void)
{
    int n;
    scanf("%d", &n);

    pattern (n);
}

void pattern (int n)
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}
