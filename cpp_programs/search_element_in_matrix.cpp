#include <iostream>
// #include<vector>
using namespace std;

int main()
{

    // vector <int> V;
    // int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int size;
    cout << "Enter the size of the matrix" << endl;
    cin >> size;
    int array[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array[i][j];
        }
    }
    int search;
    cin >> search;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] == search)
            {
                cout << "Element found at: " << i << ", " << j;
                return 0;
            }
        }
    }

    cout << "Not found";

    return 0;
}