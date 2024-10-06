// List of prime numbers from 1 to 100

#include <stdio.h>

int main()
{
    printf("List of all prime numbers from 1 to 100 is as follows: \n");

    int n; // To go from 2 to 100
    int i; // To go from 2 to n

    for (n = 2; n <= 100; n++) // Loop for a number n which will go from 1 to 100
    {
        for (i = 2; i < n; i++) // Loop for numbers less than the number n
        {
            if (n % i == 0) // To check the remainder of every number < n with the number n
            {
                break; // If the remainder = 0 is found, do nothing
            }
        }
        if (i == n) // Condition if the number i reaches the number n (without finding mod. 0)
        {
            printf("%d  ", n); // Then print the value of that prime number
        }
    }

    return 0;
}