#include <iostream>
using namespace std;

int main()
{
    // square pattern

    // int n;
    // cout << "Enter length of square: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter length of square: ";
    // cin >> n;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << char(ch + j) << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter length of square: ";
    // cin >> n;
    // int num = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         num++;
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter length of square: ";
    // cin >> n;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    // Triangle pattern

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << char(ch + i) << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // int num = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         num++;
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = i; j >= 0; j--)
    //     {
    //         cout << char(ch + j) << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << (i + 1);
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter no of rows of required triangle ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - 1; j > i; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "length of hollow diamond: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != 0)
    //     {
    //         for (int j = 0; j < i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 0; j < i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != n - 2)
    //     {
    //         for (int j = 0; j < 2 * (n - i) - 5; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // butterfly

    int n;
    cout << "wing length of butterfly: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}