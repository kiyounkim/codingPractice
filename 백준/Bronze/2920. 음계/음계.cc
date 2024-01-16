#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n;
	vector<int> a;
	int sum = 0;
	int temp=0;
	int num;
	for(int i=0;i<8;i++){
		cin >> num;
		a.push_back(num);
		if(a.size()>=2){
			temp = a[i]-a[i-1];
			if(temp!=1 && temp!=-1){
				cout << "mixed";
				return 0;
			}
			else sum += temp;
		}
	}
	if(sum==7) cout << "ascending";
	else if(sum==-7) cout << "descending";
}
