#include <iostream>
using namespace std;

int main()
{

    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[0];
    for (int j = 1; j < len; j++)
    {
        if (arr[j] > temp)
        {
            temp = arr[j];
        }
    }
    cout << temp << endl;

    return 0;
}