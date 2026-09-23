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

/*#include <stdio.h>

int perfectsquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n == i*i)
        {
            return 1;
        }
    }
}

int main()
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);

    
    if (perfectsquare(num))
    {
        printf("The %d is PERFECT SQUARE.",num);
    }
    else
    {
        printf("The %d is not PERFECT SQUARE.",num);
    }
    return 0;
}*/

/*#include <stdio.h>

int perfectcube(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n == i*i*i)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    if (perfectcube(num))
    {
        printf("The %d is PERFECT CUBE.",num);
    }
    else
    {
        printf("The %d is not PERFECT CUBE.",num);
    }
    return 0;
}*/

/*#include <stdio.h>

int fascinating(int n)
{
    int twice = n * 2;
    int thrice = n * 3;
    int fact = 1;
    int prod = 1;
    int original;
    for (int i = twice; i != 0; i = i/10)
    {
        fact *= 10;
    }
    original = (n * fact) + twice;
    for (int i = thrice; i != 0; i = i/10)
    {
        prod *= 10;
    }
    original = (original * prod) + thrice;
    for (int i = original; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        int count = 0;
        for (int j = original; j != 0; j = j/10)
        {
            if (lastdig == j % 10)
            {
                count++;
            }
        }
        if (count > 1) 
        {
            return 0;
        }
        if (lastdig == 0)
        {
            return 0;
        }
    }

    int digit = 0;
    for (int i = original; i != 0; i = i/10)
    {
        digit++;
    }
    if (digit != 9)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    if (fascinating(n))
    {
        printf("The %d is FASCINATING NUMBER.",n);
    }
    else
    {
        printf("The %d is not FASCINATING NUMBER.",n);
    }
    return 0;
}*/

/*#include <stdio.h>

int keith(int n)
{
    int lastdig,a,b;
    int original = n;
    lastdig = n % 10;

    n = n / 10;
    b = n % 10;
    n = n / 10;
    a = n % 10;

    int sum;
    while (lastdig < original)
    {
        sum = a + b + lastdig;
        a = b;
        b = lastdig;
        lastdig = sum;
    }
    return original == lastdig;
}

int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d",&n);

    if (keith(n))
    {
        printf("The %d is KEITH NUMBER.",n);
    }
    else
    {
        printf("The %d is not KEITH NUMBER.",n);
    }
    return 0;
}*/

/*#include <stdio.h>

int evil(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int a = n % 2;
        sum = (sum*10) + a;
        n = n/2;
    }
    int var = sum;
    int count = 0;
    for (int i = var; i != 0; i = i/10)
    {
        int lastdig = i % 10;
        if (lastdig == 1)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("ENTER A VALUE: ");
    scanf("%d",&n);

    if (evil(n))
    {
        printf("The %d is EVIL NUMBER.",n);
    }
    else
    {
        printf("The %d is not EVIL NUMBER.",n);
    }
    return 0;
}*/

/*#include <stdio.h>

int bouncy(int n)
{
    int increase = 0;
    int decrease = 0;
    for (int i = n; i > 0;)
    {
        int lastdig = i % 10;
        i = i/10;
        if (i == 0)
        {
            break;
        }
        int ld = i % 10;
        if (lastdig > ld)
        {
            increase = 1;
        }
        else if (lastdig < ld)
        {
            decrease = 1;
        }
    }
    return increase == 1 && decrease == 1;
}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    if (bouncy(n))
    {
        printf("The %d is BOUNCY NUMBER.",n);
    }
    else
    {
        printf("The %d is not BOUNCY NUMBER.",n);
    }
    return 0;
}*/

/*#include <stdio.h>

int circular(int n)
{
    int prod = 1;
    int original = n;
    for (int i = n; i != 0; i = i/10)
    {
        prod = prod * 10;
    }
    int mult = prod;
    int rev;
    do
    {
        int count = 0;
        int a = n % (mult/10);
        int b = n /(mult/10);
        rev = (a*10)+b;
        for (int i = 1; i <= rev; i++)
        {
            if (rev % i == 0)
            {
                count++;
            }
        }
        if (count != 2)
        {
            return 0;
        }
        n = rev;
        
    } while (n != original);
    return 1;
}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    if (circular(n))
    {
        printf("The %d is CIRCULAR PRIME",n);
    }
    else
    {
        printf("The %d is not CIRCULAR PRIME.",n);
    }
    return 0;
}*/

#include <stdio.h>

int trimorphic(int n)
{
    int prod = 1;
    for(int i = n; i != 0; i = i/10)
    {
        prod *= 10;
    }
    int a = n*n*n;

    int lastdig = a % (prod);
    return n == lastdig;
}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    if (trimorphic(n))
    {
        printf("The %d is TRIMORPHIC NUMBER.",n);
    }
    else
    {
        printf("The %d is not TRIMORPHIC NUMBER.",n);
    }
    return 0;
}