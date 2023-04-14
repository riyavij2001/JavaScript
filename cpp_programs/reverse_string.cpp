// 344. Reverse String
#include<iostream>
using namespace std;

void reverseString(char word[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(word[s++], word[e--]);
    }

}

int getLength(char word[]){
    int count=0;
    for(int i=0;word[i]!= '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char word[30];
    cout<<"Enter the word to be reversed: "<<endl;
    cin>>word;

    int len = getLength(word);
    cout<<"length is: "<<len<<endl;
    reverseString(word,len);
    cout<<word;

    return 0;
}