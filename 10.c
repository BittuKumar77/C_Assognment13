// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int fun(int n)s
{
    int ct=0;
    if (n == 0)
        return 0;
    ct++;
    return ct + fun(n/10);
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    printf("count is: %d", fun(n));
    return 0;
}
