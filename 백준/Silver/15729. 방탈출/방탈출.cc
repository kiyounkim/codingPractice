#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    int count=0;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int* arr2 = new int[n];
    for(int i=0;i<n;i++)
        arr2[i]=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
            count++;
            arr2[i]=!arr2[i];
            if(i+1<n)
                arr2[i+1]=!arr2[i+1];
            if(i+2<n)
                arr2[i+2]=!arr2[i+2];
        }
    }
    cout << count << endl;
    return 0;
}
