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

/*#include <stdio.h>

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
}*/

/*#include <stdio.h>

int spy(int n)
{
    int sum = 0;
    int fact = 1;
    for (int i = n; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        sum += lastdig;
        fact *= lastdig;
    }
    return sum == fact;
}

int main()
{
    int value;
    printf("Number = ");
    scanf("%d",&value);

    if (spy(value))
    {
        printf("The %d is SPY NUMBER.",value);
    }
    else
    {
        printf("The %d is not SPY NUMBER.",value);
    }
    return 0;
}*/

/*#include <stdio.h>

int duck(int n)
{
    for (int i = n; i > 0; i = i/10)
    {
        int lastdig = i % 10;
        if (lastdig == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int value;
    printf("Number = ");
    scanf("%d",&value);

    if (duck(value))
    {
        printf("The %d is DUCK NUMBER.",value);
    }
    else
    {
        printf("The %d is not DUCK NUMBER.",value);
    }
}*/

/*#include <stdio.h>
int happy(int n)
{
    int lastdig;
    while (n != 1)
    {
        int sum = 0;
        while (n != 0)
        {
            lastdig = n % 10;
            int sq = lastdig*lastdig;
            sum = sum + sq;
            n = n/10;
        }
        n = sum;
    }
    return n == 1;
}

int main()
{
    int value;
    printf("VALUE = ");
    scanf("%d",&value);

    if (happy(value))
    {
        printf("The %d is the HAPPY NUMBER.",value);
    }
    else
    {
        printf("The %d is not HAPPY NUMBER.",value);
    }
    return 0;
}*/

/*#include <stdio.h>

int disarium(int n)
{
    int count = 0;
    int sum = 0;
    for(int i = n; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        sum = (sum*10) + lastdig;
    }
    int rev = sum;
    int dis = 0;
    for(int j = rev; j != 0; j = j/10)
    {
        int place = j % 10;
        count++;
        int pow = 1;
        for(int a = 1; a <= count; a++)
        {
            pow *= place;
        }
        dis = dis + pow;
    }
    return dis == n;
}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    if (disarium(n))
    {
        printf("The %d is the DISARIUM NUMBER.",n);
    }
    else
    {
        printf("The %d is not DISARIUM NUMBER.",n);
    }
    return 0;
}*/

/*#include <stdio.h>

int magic(int n)
{
    
    while (n != 1)
    {
        int sum = 0;
        while (n != 0)
        {
            int lastdig = n % 10;
            sum += lastdig;
            n = n/10;
        }
        n = sum;
    }
    return n == 1;
}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    if (magic(n))
    {
        printf("The %d is MAGIC NUMBER.",n);
    }
    else
    {
        printf("The %d is not MAGIC NUMBER.");
    }
    return 0;
}*/

/*#include <stdio.h>

int digcount(int n)
{
    int count = 0;
    for(int i = n; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        count++;
    }
    return count;
}

int prod(int n)
{
    int half = digcount(n);
    int ten = 1;

    for (int i = 1; i <= half; i++)
    {
        ten *= 10;
    }

    return ten;
}

int kaprekar(int n)
{
    int sq = n*n;
    int first = sq/prod(n);
    int last = sq % prod(n);

    return first + last == n;
}

int main()
{
    int n; 
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    if(kaprekar(n))
    {
        printf("The %d is KAPREKAR NUMBER.",n);
    }
    else
    {
        printf("The %d is not KAPREKAR NUMBER.",n);
    }

    return 0;
}*/

/*#include <stdio.h>

int digsum(int n)
{
    int sum = 0;
    for(int i = n; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        sum += lastdig;
    }
    return sum;
}

int prime(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            sum += i;
            n = n/i;
        }
        
    }
    return sum;
}

int smith(int n)
{
    int num = prime(n);
    int final = 0;
    for (int i = num; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        final = final + lastdig;
    }
    return final == digsum(n);
}       

int main(int n)
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);

    if (smith(num))
    {
        printf("The %d is SMITH NUMBER.",num);
    }
    else
    {
        printf("The %d is not SMITH NUMBER.",num);
    }
    return 0;
}*/

/*#include <stdio.h>

int abundant(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum < n;
}

int main()
{
    int num; 
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);

    if (abundant(num))
    {
        printf("The %d is DEFICIENT NUMBER.",num);
    }
    else
    {
        printf("The %d is not DEFICIENT NUMBER.",num);
    }
    return 0;
}*/

#include <stdio.h>

int perfectsquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n == i*i)
        {
            printf("The %d is perfect square.",n);
        }
        else
        {
            printf("The %d is not perfect square.",n);
        }
    }
}

int main()
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);

    perfectsquare(num);
}