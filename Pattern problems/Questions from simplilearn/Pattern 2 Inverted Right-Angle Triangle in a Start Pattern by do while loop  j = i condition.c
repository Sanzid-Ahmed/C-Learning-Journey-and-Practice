#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    do
    {
        int j = i;

        do
        {
            printf("* ");
            j++;
        }
        while(j < n);

        printf("\n");
        i++;
    }
    while(i < n);

    return 0;
}
