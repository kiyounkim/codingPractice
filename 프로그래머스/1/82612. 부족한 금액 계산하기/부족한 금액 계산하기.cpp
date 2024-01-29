using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long oc= price;
    for(int i=0;i<=count;++i){
        answer += oc*i;
    }
    answer -= money;
    if(answer<0) answer = 0;
    return answer;
}