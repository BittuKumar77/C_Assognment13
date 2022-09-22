//4. Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>
int fun(int n)
{
    if (n == 0)
        return 0;
    return (n*n) + fun(n - 1);
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    printf("Sum is: %d", fun(n));
    return 0;
}
