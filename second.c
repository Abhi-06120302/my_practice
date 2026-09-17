/*#include <stdio.h>

int perfect(int n)
{
    for (int j = 1; j <= n; j++)
    {
        int sum = 0;
        for(int i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                sum += i;
            }
        }
        if (j == sum)
        {
            printf("%d\n",j);
        }
    }
}

int main()
{
    int value; 
    printf("Enter a number: ");
    scanf("%d",&value);
    
    perfect(value);
    return 0;
}*/

/*#include <stdio.h>

int strong(int n)
{
    int ld;
    for (int a = 1; a <= n; a++)
    {
        int sum = 0;
        for (int i = a; i > 0; i = i/10)
        {
            ld = i % 10;
            int fact = 1;
            for (int j = 1 ; j <= ld; j++)
            {
                fact *= j;
            }
            sum += fact;
        }
        if (a == sum)
        {
            printf("%d\n",a);
        }
    }
}

int main()
{
    int value;
    printf("Enter a value: ");
    scanf("%d",&value);

    strong(value);
    return 0;
}*/

/*#include <stdio.h>
int automorphic(int n)
{
    int square, lastdig;
    square = n*n;
    lastdig = square % 10;

    return n == lastdig;
}

int main()
{
    int number;
    printf("Number to check given value is automorphic: ");
    scanf("%d",&number);

    if (automorphic(number))
    {
        printf("The %d is AUTOMORPHIC",number);
    }
    else
    {
        printf("The %d is not AUTOMORPHIC.",number);
    }
}*/

/*#include <stdio.h>

int harshad(int n)
{
    int sum = 0;
    for (int i = n; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        sum += lastdig;
    }
    return n % sum == 0;
}

int main()
{
    int value;
    printf("Enter value to check: ");
    scanf("%d",&value);

    if (harshad(value))
    {
        printf("The %d is HARSHAD",value);
    }
    else
    {
        printf("The %d is not HARSHAD",value);
    }
}*/

#include <stdio.h>

int neon(int n)
{
    int square = n*n;
    int sum = 0;
    for (int i = square; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        sum += lastdig;
    }
    return n == sum;
}

int main()
{
    int value;
    printf("Enter value to check: ");
    scanf("%d",&value);

    if (neon(value))
    {
        printf("The %d is NEON",value);
    }
    else
    {
        printf("The %d is not NEON",value);
    }
}
