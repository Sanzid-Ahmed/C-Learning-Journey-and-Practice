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
                break;
            printf("  ");
            space++;
        }
        while(space <= i);

        /*do
        {
            printf("  ");
            space++;
        }
        while(space < i);

        Here first 2 space is print then condition checked thats why in 1st line it print the unwanted space

        We can not stop printing at begin but at last position we can by break*/

        /*do
        {
            printf("  ");
            space++;
        }
        while(space <= i);*/

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
