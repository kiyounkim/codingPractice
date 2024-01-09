#include <bits/stdc++.h>
using namespace std;
void insertDeque(deque<int> &dq){
    string s;
    cin>>s;
    int i=1;
    while(i<s.size()-1){
        string temp="";
        while(s[i]!=',' && s[i]!=']'){
            temp+=s[i];
            i++;
        }
        dq.push_back(stoi(temp));
        i++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    deque<int> dq;
    for(int i=0;i<n;i++){
        dq.clear();
        bool reverse=false;
        bool error=false;
        string cmd;
        cin>>cmd;
        int m;
        cin>>m;
        insertDeque(dq);
        for(int j=0;j<cmd.size();j++){
            if(cmd[j]=='R')
                reverse = !reverse;
            if(!reverse){
                if(cmd[j]=='D'){
                    if(!dq.empty())
                        dq.pop_front();
                    else error = true;
                }
            }
            else{
                if(cmd[j]=='D'){
                    if(!dq.empty())
                        dq.pop_back();
                    else error = true;
                }
            }
        }
        if(!error) {
            cout << "[";
            if(!reverse){
                for(int j=0;j<dq.size();j++){
                    cout<<dq[j];
                    if(j!=dq.size()-1){
                        cout<<",";
                    }
                }
            }
            else{
                for(int j=dq.size()-1;j>=0;j--){
                    cout<<dq[j];
                    if(j!=0){
                        cout<<",";
                    }
                }
            }
            cout<<"]\n";
        }
        else{
            cout<<"error\n";
        }
    }
    return 0;
}