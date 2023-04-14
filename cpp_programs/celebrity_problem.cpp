#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> V;
    int array[4][4] = {{0,0,1,0},{0,0,1,0},{0,0,0,0},{0,0,1,0}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(array[i][j] == 1){
                V.push_back(j);
            }
        }
    }

    int count =0;
    for(int i=0;i<V.size()-1;i++){
        if(V[i] == V[i+1]){
            count++;
        }
    }

    if(count==V.size()-1){
        cout<<"Celebrity found at: "<<V[0]<<endl;
    }
    else{
        cout<<"No Celebrity found"<<endl;
    }
    return 0;
}