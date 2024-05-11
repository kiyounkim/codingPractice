#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string intToBin(int n,int m){
    string s="";
    while(n>0){
        s+=to_string(n%2);
        n/=2;
    }
    while(s.length()<m)
        s+="0";
    reverse(s.begin(),s.end());
    return s;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0;i<n;i++){
        string s="";
        for(int j=0;j<n;j++){
            if(intToBin(arr1[i],n)[j]=='0' && intToBin(arr2[i],n)[j]=='0')
                s+=' ';
            else 
                s+='#';
        }
        answer.push_back(s);
    }
    return answer;
}