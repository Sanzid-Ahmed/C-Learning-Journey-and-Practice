#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;
    do
    {
        int j = n - i;

        do
        {
            printf("*  ");
            j--;
        }
        while(j > 0);

        printf("\n");
        i++;
    }
    while(i < n);

    return 0;
}
