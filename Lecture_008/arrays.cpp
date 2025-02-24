#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void revArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (end >= start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    // int size = 7;
    // int numbers[size] = {1, 4, 45, 452, -42, -43, 73};
    // int smallest = numbers[0];
    // int smallestIndex = 0;
    // int largest = numbers[0];
    // int largestIndex = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (numbers[i] > largest)
    //     {
    //         largest = numbers[i];
    //         largestIndex = i;
    //     }
    //     if (numbers[i] < smallest)
    //     {
    //         smallest = numbers[i];
    //         smallestIndex = i;
    //     }
    // }
    // cout << "smallest = " << smallest << endl;
    // cout << "smallest index = " << smallestIndex << endl;
    // cout << "largest = " << largest << endl;
    // cout << "largest index = " << largestIndex << endl;
    int arr[] = {1, 42, 5323, 33, 26, 72, 356, 4, 63, 3};
    int size = 10;
    int target = 33;

    revArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}