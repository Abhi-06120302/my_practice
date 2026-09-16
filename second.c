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
    int num; 
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if (perfect(num))
    {
        printf("The %d is PERFECT.",num);
    }
    else
    {
        printf("The %d is not PERFECT.",num);
    }
    return 0;
}