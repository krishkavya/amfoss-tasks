#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("height:");
    } 
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#"); 
        }
        printf("\n");
      
    }
}
