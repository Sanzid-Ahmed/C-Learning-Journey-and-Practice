#include <stdio.h>


int user(void);
void pattern(int n);

int main()
{
    user();
}

int user(void)
{
    int num;
    scanf("%d", &num);

    pattern(num);
}

void pattern(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n - i; j > 0; j--)
        {
            printf("*  ");
        }
        printf("\n");
    }
}
