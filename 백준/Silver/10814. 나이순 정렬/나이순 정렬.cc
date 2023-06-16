#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
typedef struct{
    int age;
    string name;
}Mem;
int main(){
    int n;
    cin >> n;
    Mem *mem = new Mem[n];
    for(int i=0;i<n;i++)
        cin >> mem[i].age >> mem[i].name;
    stable_sort(mem,mem+n,[](Mem a, Mem b){
        return a.age < b.age;
    });
    for(int i=0;i<n;i++)
        cout << mem[i].age << " " << mem[i].name << "\n";
}