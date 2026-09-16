#include <stdio.h>

int perfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return n == sum;
}

int main()
{
    int value; 
    printf("Enter a number: ");
    scanf("%d",&value);
    
    if (perfect(value))
    {
        printf("The %d is PERFECT.",value);
    }
    else
    {
        printf("The %d is not PERFECT.",value);
    }
    return 0;
}