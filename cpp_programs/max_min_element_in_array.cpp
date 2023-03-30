#include <iostream>
using namespace std;

int main()
{

    int len;
    cout<<"Input the length of the array: ";
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout<<"Enter the array element: ";
        cin >> arr[i];
    }

    //Maximum element
    int temp = arr[0];
    for (int j = 1; j < len; j++)
    {
        if (arr[j] > temp)
        {
            temp = arr[j];
        }
    }
    cout <<"The maximum number in the array is: "<<temp<<endl;


    //Minimum element
    int min = arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The minimum number in the array is: "<<min<<endl;;

    return 0;
}