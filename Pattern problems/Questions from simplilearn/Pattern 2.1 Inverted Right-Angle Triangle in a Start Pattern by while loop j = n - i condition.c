#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    while(i < n)
    {
        int j = n - i;

        while(j > 0)
        {
            printf("*  ");
            j--;
        }
        printf("\n");

        i++;
    }

    return 0;
}
