#include <iostream>
using namespace std;
int primes[250000];

void sieve(){
    for(int i=0;i<250000;i++){
        primes[i] = 1;
    }
    primes[0] = 0;
    primes[1] = 0;
    for(int i=2;i<250000;i++){
        if(primes[i]){
            for(int j=i*2;j<250000;j+=i){
                primes[j] = 0;
            }
        }
    }
}

int main() {
    sieve();
    int n;
    while(1){
        cin >> n;
        if(n==0){
            break;
        }
        int count = 0;
        for(int i=n+1;i<=2*n;i++){
            if(primes[i]){
                count++;
            }
        }
        cout << count << "\n";
    }
}
