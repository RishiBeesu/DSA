#include <iostream>
using namespace std;

int main()
{
    // int count = 1;
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // while (count <= num)
    // {
    //     cout << count << " ";
    //     count++;
    // }
    // cout << endl;

    // int sum = 0;
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // for (int i = 0; i <= num; i++)
    // {
    //     sum += i;
    // }
    // cout << "Sum of numbers until given number is " << sum << endl;

    // int oddSum = 0;
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // for (int i = 0; i <= num; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         oddSum += i;
    //     }
    // }
    // cout << "Sum of odd numbers until given number is " << oddSum << endl;

    // int num;
    // bool isPrime = true;
    // cout << "Enter a number: ";
    // cin >> num;
    // for (int i = 2; i * i <= num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // cout << (isPrime ? "Given number is a prime number" : "Given number is not a prime number") << endl;

    // Homework

    // int sum = 0;
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << "Sum of numbers until given number divisible by 3 is " << sum << endl;

    int factorial = 1;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of given number is " << factorial << endl;
    return 0;
}