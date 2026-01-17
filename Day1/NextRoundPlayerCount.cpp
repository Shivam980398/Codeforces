#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int player = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= arr[k] && arr[i] > 0)
        {
            player = i;
        }
    }

    cout << player;
}