#include <iostream>

using namespace std;

int main(){	
	int lines;
	int count = 0;
	string str;
	cin >> lines;

	for(int i=0; i<lines; i++){
		cin >> str;
		int size = str.length();
		bool flag = true;
		
		for(int j=0; j<size; j++){
			for(int k=0; k<j; k++){
				if(str[j] != str[j-1] && str[j] == str[k]){
					flag = false;
					break;			
				}				
			}
		}
		if(flag) count++;
	}
	
	cout << count;

    return 0;
}