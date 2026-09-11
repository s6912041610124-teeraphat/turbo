#include <stdio.h>

int main()
{
    int n, i;
    int isprime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    // เลขที่น้อยกว่าหรือเท่ากับ 1 ไม่ใช่จำนวนเฉพาะ
    if (n <= 1) 
    {
        isprime = 0;
    }
    else 
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    if (isprime == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}