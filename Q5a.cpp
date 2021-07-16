#include <iostream>
using namespace std;
// Partition process similar to quicksort
void SeperateNegandPos(int a[], int size)
{
    int sep = 0;
    for (int j = 0; j < size; j++)
    {
        if (a[j] < 0)
        {
            swap(a[j], a[sep]);
            sep++;
        }
    }
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
    int arr[] = {-1, 0, 2, 3, -12, 5, -56, 342, 0, 12, -12, 45};
    int n = (sizeof(arr) / sizeof(arr[0]));
    SeperateNegandPos(arr, n);
    printArray(arr, n);

    return 0;
}