
    for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << intervals[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr{{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    cout << "Initially the array is:" << endl;
    printArr(arr);
    merge(arr);
    cout << "Finally the array is:" << endl;
    printArr(arr);