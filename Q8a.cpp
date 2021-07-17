#include <iostream>
using namespace std;
//Largest contiguous suubarray sum i.e, Kadane's algorithm
int maxSumContiguousSubarray(int arr[], int size)
{ //max_ending_here stores the sum of the subarray currently
    int max_ending_here = 0;
    //max_so_far contains the max sum obtained so far, this will be returned ultimately
    int max_so_far = 0;
    //biggest_non_pos holds the value of largest non-positive number in case there are no positive numbers in array
    int biggest_non_pos;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (flag == 0 && arr[i] <= 0)
        {
            biggest_non_pos = arr[i];
            flag = 1;
        }
        if (arr[i] <= 0 && arr[i] > biggest_non_pos)
            biggest_non_pos = arr[i];
        max_ending_here += arr[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;
    }
    if (max_so_far > 0)
        return max_so_far;
    else
        return biggest_non_pos;
}
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[] = {-9, -8, 7, -6, 4, 2, -1, -3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Array : " << endl;
    printArray(arr1, n);
    cout << "Max sum of contiguous subarray is: ";
    cout << maxSumContiguousSubarray(arr1, n);
    return 0;
}