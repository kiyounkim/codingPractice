#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	map<int, int> mp;
	int N, M, input;
	cin >> N;

	for(int i=0;i<N;i++){
		cin >> input;
		mp[input]++;
	}

	cin >> M;
	for(int i=0;i<M;i++)
	{
		cin >> input;
		auto it = mp.find(input);

		if (it != mp.end())
			cout << it->second << ' ';
		else
			cout << "0" << ' ';
	}
}