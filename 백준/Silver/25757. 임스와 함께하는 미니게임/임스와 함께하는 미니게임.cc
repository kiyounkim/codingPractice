#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    char c;
    cin >> c;
    int num;
    switch(c){
        case 'Y':
            num = 2;
            break;
        case 'F':
            num = 3;
            break;
        case 'O':
            num = 4;
            break;
    }
    set<string>s;
    string str;
    for(int i = 0; i < T; i++){
        cin >> str;
        s.insert(str);
    }
    cout << s.size() / (num -1);
    return 0;
}
