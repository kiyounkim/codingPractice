#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> trees;

int solve(int ans){
    int left=0, right=trees.back(), mid;
    long long sum=0;
    while(left<=right){
        mid = (left+right)/2;
        sum=0;
        for(int i=0; i<trees.size(); i++){
            if(trees[i]>mid)
                sum += trees[i]-mid;
        }
        if(sum>=ans)
            left = mid+1;
        else
            right = mid-1;
    }
    return right;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;
    
    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        trees.push_back(temp);
    }

    sort(trees.begin(), trees.end());
    
    cout << solve(m) << '\n';

    return 0;
}
