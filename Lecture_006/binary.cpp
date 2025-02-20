#include <iostream>
#include <cmath>
using namespace std;

int numToBin(int n)
{
    int power = 1;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans = ans + rem * power;
        power *= 10;
    }
    return ans;
}

int binToNum(int n)
{
    int power = 1;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        ans = ans + rem * power;
        power *= 2;
    }
    return ans;
}

int main()
{
    cout << binToNum(1010) << endl;
    return 0;
}