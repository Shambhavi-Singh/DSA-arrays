#include <iostream>
using namespace std;
//Using recursion to reverse an array
void recursiveReverseArr(int arr[], int start, int end)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    recursiveReverseArr(arr, start + 1, end - 1);
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
    cout << "Reversing array using recursion" << endl;
    int arrOdd[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n1 = sizeof(arrOdd) / sizeof(arrOdd[0]);
    int arrEven[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n2 = sizeof(arrEven) / sizeof(arrEven[0]);
    cout << "The arrays before reversing:" << endl;
    printArray(arrOdd, n1);
    printArray(arrEven, n2);
    recursiveReverseArr(arrOdd, 0, n1 - 1);
    recursiveReverseArr(arrEven, 0, n2 - 1);

    cout << "The arrays after reversing:" << endl;
    printArray(arrOdd, n1);
    printArray(arrEven, n2);

    return 0;
}