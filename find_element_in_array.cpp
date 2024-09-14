#include <bits/stdc++.h>
using namespace std;

bool find(int *arr, int n, int t)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == t)
        {
            return true;
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

    return false;
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

    if (find(arr, n, t))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}