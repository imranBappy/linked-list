#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {

        int flag = 1;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 0;
            }
        }
        if (flag)
            return;
        flag = 1;
    }
}
int main()
{
    int arr[] = {5, 1, 3, 4, 6, 7, 20};
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    bubble_sort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}