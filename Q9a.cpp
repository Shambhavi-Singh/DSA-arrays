#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int getMinHeightDiff(int arr[], int n, int k)
{
    selectionSort(arr, n);
    int shortestTow, tallestTow;
    int minDiff = arr[n - 1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - k >= 0 && arr[n - 1] - k >= 0)
        {
            if (i == 0)
            {
                tallestTow = arr[n - 1] - k;
                        }
            else
            {
                tallestTow = max(arr[i - 1] + k, arr[n - 1] - k);
            }
            if (i == 0)
            {
                shortestTow = arr[0] + k;
            }
            else
            {
                shortestTow = min(arr[0] + k, arr[i] - k);
            }

            minDiff = min(minDiff, tallestTow - shortestTow);
        }
    }
    return minDiff;
}

int main()
{
    int arr[] = {20, 12, 9, 3, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Min height difference between tallest and shortest towers is: " << getMinHeightDiff(arr, n, 2);

    return 0;
}