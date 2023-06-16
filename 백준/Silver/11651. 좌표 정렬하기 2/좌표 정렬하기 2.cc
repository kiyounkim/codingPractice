#include <iostream>
#include <algorithm>

using namespace std;
typedef struct{
    int x,y;
}Coord;
int main(){
    int n;
    cin >> n;
    Coord *coord = new Coord[n];
    for(int i=0;i<n;i++){
        cin >> coord[i].x >> coord[i].y;
    }
    
    sort(coord,coord+n,[](Coord a,Coord b){
        if(a.y == b.y) return a.x < b.x;
        return a.y < b.y;
    });
    
    for(int i=0;i<n;i++){
        cout << coord[i].x << " " << coord[i].y << "\n";
    }
}