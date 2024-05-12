#include <string>
#include <vector>
#include <cmath>
using namespace std;
int number = 1000000;
int primes[1000001];

void primeSieve(){
    for(int i=0;i<1000000;i++){
        primes[i]=1;
    }
    primes[0]=0;
    primes[1]=0;
    for (int i = 2; i * i <= number; i++)
    {
        if (primes[i] == 1) {
            for (int j = i * i; j <= number; j += i)
                primes[j] = 0;
        }
    }
}

int solution(int n) {
    int answer = 0;
    primeSieve();
    for(int i=0;i<=n;i++){
        if(primes[i]) answer++;
    }
    return answer;
}