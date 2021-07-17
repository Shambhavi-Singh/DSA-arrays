#include <iostream>
using namespace std;
//Rotating array by shifting all elements ahead and storing last element in a variable to use for first position
void rotateArr(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            arr[i] = arr[i - 1];
        }
        else
        {
            arr[i] = temp;
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
    int arr1[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Array before rotating: " << endl;
    printArray(arr1, n);
    rotateArr(arr1, n);
    cout << "Array after rotating:" << endl;
    printArray(arr1, n);
    return 0;
}