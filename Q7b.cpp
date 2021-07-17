#include <iostream>
using namespace std;
//Rotating array by two pointers i=start,j=end-1 and swaping arr[i] and arr[j] and keep j fixed and i moving towards j

void rotateArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
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
    cout << "Rotating array using start and end pointer" << endl;
    int arr1[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Array before rotating: " << endl;
    printArray(arr1, n);
    rotateArr(arr1, n);
    cout << "Array after rotating:" << endl;
    printArray(arr1, n);
    return 0;
}
