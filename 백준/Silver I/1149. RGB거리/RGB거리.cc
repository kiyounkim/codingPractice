#include <iostream>
#include <algorithm>
using namespace std;
#define RED 0
#define GREEN 1
#define BLUE 2
int house[1001][3];
int main() {
    int N;
    int cost[3];
    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;
    cin >> N;
    for(int i = 1; i <= N; ++i)
    {
        cin >> cost[RED] >> cost[GREEN] >> cost[BLUE];
        house[i][RED] = min(house[i-1][GREEN],house[i-1][BLUE]) + cost[RED];
        house[i][GREEN] = min(house[i-1][RED],house[i-1][BLUE]) + cost[GREEN];
        house[i][BLUE] = min(house[i-1][GREEN],house[i-1][RED]) + cost[BLUE];
    }
    cout << min(house[N][BLUE],min(house[N][RED],house[N][GREEN]));
}