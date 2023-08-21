#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
	sort(A.begin(), A.end());
    int m;
    cin >> m;
	int temp;
    for(int i = 0; i < m; i++) {
        cin >> temp;
        // binary search for b[i] in A
        int low = 0, high = n - 1;
        int mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(A[mid] == temp) {
                cout << "1\n";
                break;
            }
            else if(A[mid] < temp)
                low = mid + 1;
            else
                high = mid - 1;
        }
		if(low > high)
			cout << "0\n";
    }
}
