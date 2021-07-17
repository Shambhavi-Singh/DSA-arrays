#include <iostream>
using namespace std;
//Reversing the array by swapping element from start and end
void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - 1 - i]);
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
    int arrOdd[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n1 = sizeof(arrOdd) / sizeof(arrOdd[0]);
    int arrEven[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n2 = sizeof(arrEven) / sizeof(arrEven[0]);
    cout << "The arrays before reversing:" << endl;
    printArray(arrOdd, n1);
    printArray(arrEven, n2);
    reverseArray(arrOdd, n1);
    reverseArray(arrEven, n2);
    cout << "The arrays after reversing:" << endl;
    printArray(arrOdd, n1);
    printArray(arrEven, n2);

    return 0;
}