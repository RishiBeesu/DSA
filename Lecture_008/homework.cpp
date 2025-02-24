#include <iostream>
using namespace std;

// Calculate sum and product of all numbers in an array
// void sumProd(int arr[], int size)
// {
//     int sum = 0;
//     int product = 1;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//         product *= arr[i];
//     }
//     cout << "sum = " << sum << endl;
//     cout << "product = " << product << endl;
// }

// Swap the max and min number of an array
// void swapMinMax(int arr[], int size)
// {
//     int smallest = arr[0];
//     int largest = arr[0];
//     int smallestIndex = 0;
//     int largestIndex = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//             largestIndex = i;
//         }
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//             smallestIndex = i;
//         }
//     }
//     swap(arr[smallestIndex], arr[largestIndex]);
// }

// Print all the unique values in an array
// void printUnqVal(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         bool req = true;
//         int currNum = arr[i];
//         for (int j = i + 1; j < size; j++)
//         {
//             if (currNum == arr[j])
//             {
//                 req = false;
//                 break;
//             }
//         }
//         if (req)
//         {
//             cout << currNum << endl;
//         }
//     }
// }

// Print Intersection of two arrays
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

void intersectionArr(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        int currNum = arr1[i];
        if (linearSearch(arr2, size2, currNum))
        {
            cout << currNum << endl;
        }
    }
}

int main()
{
    int arr1[] = {1, 26, 3, 55, 34, 56, 77, 26, 56};
    int arr2[] = {1, 2, 3, 4, 5, 77};
    int size1 = 9;
    int size2 = 6;

    intersectionArr(arr1, arr2, size1, size2);

    return 0;
}