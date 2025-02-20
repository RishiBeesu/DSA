#include <iostream>
using namespace std;

// function for min of two numbers
// int min(int num1, int num2)
// {
//     if (num1 > num2)
//     {
//         return num2;
//     }
//     else
//     {
//         return num1;
//     }
// }

// int sum1N(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

int facto(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

// int sumDigits(int n)
// {
//     int ans = 0;
//     int num = n;
//     while (num > 0)
//     {
//         ans = ans + (num % 10);
//         num = num / 10;
//     }
//     return ans;
// }

// int binCoeff(int n, int r)
// {
//     int ans;
//     ans = facto(n) / (facto(n - r) * facto(r));
//     return ans;
// }

// bool isPrime(int n)
// {
//     bool prime = true;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             prime = false;
//             break;
//         }
//     }
//     return prime;
// }

// void allPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime(i) == 1)
//         {
//             cout << i << endl;
//         }
//     }
// }

int fibonacci(int n)
{
    return 0;
}

int main()
{
    return 0;
}