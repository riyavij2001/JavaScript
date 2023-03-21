#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int even[4] = {3,4,7,9};
    int odd[3] = {8,3,6};

    swapAlternate(even,4);
    printarray(even,4);

    cout<<endl;

    swapAlternate(odd,3);
    printarray(odd,3);

    return 0;

}

