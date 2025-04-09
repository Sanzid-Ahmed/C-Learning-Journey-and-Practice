#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    do
    {
        int space = 0;

        do
        {
            if(space == i)
                continue;
            printf("  ");
            space++;
        }
        while(space < i);

        int j = i;

        do
        {
            printf("*   ");
            j++;
        }
        while(j < n);

        printf("\n");
        i++;
    }
    while(i < n);

    return 0;
}
