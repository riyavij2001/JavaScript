#include<iostream>
using namespace std;

char lower_case(char c){
    if(c >= 'a' && c <= 'z'){
        return c;
    }
    else{
        char temp = c - 'A' +'a';
        return temp;
    }
}

bool checkPalindrome(char word[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(lower_case(word[s]) != lower_case(word[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
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
    cin>>word;

    int len = getLength(word);
    cout<<"length is: "<<len<<endl;

    cout<<checkPalindrome(word,len)<<endl;

    // cout<<"character is: "<<lower_case('b')<<endl;
    // cout<<"character is: "<<lower_case('N')<<endl;

    return 0;
}