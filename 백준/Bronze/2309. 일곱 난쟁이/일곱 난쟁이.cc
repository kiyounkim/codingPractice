#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int height[10];
    int sum = 0;
    for (int i = 0; i < 9;i++){
        cin >> height[i];
        sum += height[i];
    }
    sort(height, height + 9);
    for (int i = 0; i < 8; i++){
        for (int j = i + 1; j < 9;j++){
            if(sum-(height[i]+height[j]) == 100){ 
                for (int z = 0; z < 9;z++){
                    if(z != i  && z != j){
                        cout << height[z] << '\n';
                    }
                }
                return 0;
            }   
        }
    }
    return 0;
}
