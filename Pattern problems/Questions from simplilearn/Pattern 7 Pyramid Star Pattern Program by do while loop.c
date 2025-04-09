#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    do
    {
        int space = i;

        do
        {
            if(space == n - 1)
                break;
            printf("  ");
            space++;
        }
        while(space < n - 1);

        int j = 0;

        do
        {
            printf("*   ");
            j++;
        }
        while(j <= i);

        printf("\n");
        i++;
    }
    while(i < n);

    return 0;
}
