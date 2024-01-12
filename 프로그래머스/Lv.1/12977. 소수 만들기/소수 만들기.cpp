#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

// nums_len은 배열 nums의 길이입니다.
bool isPrime(int num){
    if(num==0 || num==1) return false;
    for(int i=2;i<=sqrt(num);i++)
        if(num%i==0) return false;
    return true;
}

int solution(vector<int> nums) {
    int answer = -1;
    int count = 0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(isPrime(nums[i]+nums[j]+nums[k]))
                   count++;
            }
        }
    }
    answer = count;
    return answer;
}