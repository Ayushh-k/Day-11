#include <bits/stdc++.h>
using namespace std;

int find(int *arr, int n, int t)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid] > t)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;

    int index = find(arr, n, t);
    cout << "Element at index -: " << index << endl;
}