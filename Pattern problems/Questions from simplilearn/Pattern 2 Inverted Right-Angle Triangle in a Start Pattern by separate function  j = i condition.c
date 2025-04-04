#include <stdio.h>

int user (void);
void pattern (int num);

int main()
{
    user();

    return 0;
}

int user(void)
{
    int n;
    scanf("%d", &n);

    pattern(n);
}

void pattern (int num)
{
    for(int i = 0; i < num; i++)
    {
        for(int j = i; j < num; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
