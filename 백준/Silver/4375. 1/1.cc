#include <iostream>
 
using namespace std;
 
int main(){
    
    int input;

    while(cin >> input){
        int ans = 1;
        int length = 1;
        while(1){
            if(ans % input == 0 || ans == 0){
                break;
            }
            else{
                length++;
                ans = ans*10 + 1;
                ans %= input;
            }
        }
        cout << length << "\n";
    }
 
    return 0;
}