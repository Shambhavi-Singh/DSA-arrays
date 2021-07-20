#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<vector<int>> intervals)
{
    for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << intervals[i][j] << " ";
        }
        cout << endl;
    }
}
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    int i = 0;
    while (i < n - 1)
    {
        // cout << "What is n now?:  " << n << endl;
        if (intervals[i][1] >= intervals[i + 1][0])
        {
            // cout << "here";
            int a = intervals[i][0];
            int b = intervals[i + 1][1];
            vector<int> arr;
            arr.push_back(a);
            arr.push_back(b);
            intervals.insert(intervals.begin() + i, arr);
            // cout << "Intermediate print" << endl;
            // printArr(intervals);
            intervals.erase(intervals.begin() + i + 1);
            // cout << "Intermediate print2" << endl;
            // printArr(intervals);
            intervals.erase(intervals.begin() + i + 1);
            // cout << "Intermediate print3" << endl;
            // printArr(intervals);
            i--;
            n--;
            // cout << "What is n now?:  " << n << endl;
        }

        i++;
    }
    // cout << "Have we got intervals?" << endl;
    // printArr(intervals);
    return intervals;
}

int main()
{
    vector<vector<int>> arr{{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    cout << "Initially the array is:" << endl;
    printArr(arr);
    merge(arr);
    cout << "Finally the array is:" << endl;
    printArr(arr);
    return 0;
}