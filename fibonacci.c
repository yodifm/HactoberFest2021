#include <stdio.h>

int main()
{
    int count, first = 0, second = 1, next, i;
    
    printf("Number of terms: \n");
    scanf("%d",&count);
    printf("First %d Fibonacci numbers are: /n", count);
    for(i = 0; i < count;  i++)
    {
        if(i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
    
    return 0;
}
