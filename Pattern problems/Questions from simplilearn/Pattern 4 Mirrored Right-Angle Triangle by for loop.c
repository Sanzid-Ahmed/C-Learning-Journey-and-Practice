#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n * 5 - i * 4 - 5; j++)
        {
            printf(" ");
        }

        for(int j = 0; j < i; j++)
        {
            printf("*    ");
            /* Here I use 4 space thats why I multiply 4 with i.
            Then multiply 4 + 1 = 5 with n and minus 5 from i*4.*/


            /* if i assume space after * as s
            Then condition n * (s + 1) - i * s - (s + 1).*/
        }
        printf("\n\n");
    }
    return 0;
}
