#include <iostream>
#include <cstring>
using namespace std;
int main(){
    //5 words with max 15 characters
    string str[5];
    for(int i=0;i<5;i++){
        cin >> str[i];
    }
    //print the each letters of the words
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            if(i<str[j].length())
                cout << str[j][i];
        }
    }
}