#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0; // i initialize here j = 0;

    while(i < n)
    {
        int j = 0; // here need to initialize j

        while(j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
