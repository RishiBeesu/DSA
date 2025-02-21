#include <iostream>
using namespace std;

// Figure out if a number is power of 2 without using loop
bool isPowerOf2(int n)
{
    // try using bitwise left and right afterwards
    return true;
}

// Write a function to reverse an integer n
int revInt(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;

        ans = ans * 10 + rem;
        n /= 10;
    }
    return ans;
}

int main()
{
    cout << revInt(12345) << endl;
    return 0;
}