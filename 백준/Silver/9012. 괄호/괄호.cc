#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin >> n;    
    for(int i = 0; i < n; i++){
        stack <char> s;
        string str;
        cin >> str;
        bool isBalanced = true;
        for(int j = 0; j < str.length() && isBalanced; j++){
            if(str[j] == '(')
                s.push(str[j]);
            else
                if(s.empty() || s.top() != '(') 
                    isBalanced = false;
            	else
                	s.pop();
        }
        if(isBalanced && s.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
