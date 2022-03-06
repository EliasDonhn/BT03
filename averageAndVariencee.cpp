#include<iostream>

using namespace std;

float variencee(float ave, int n, int num[]){
    float _sum = 0;
    for(int i = 0; i < n; i++)
        _sum = _sum + (num[i] - ave)*(num[i] - ave);
    return _sum/n;
}

int main(){
    int n;
    cin >> n;
    int num[n];
    float sum = 0;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        sum = sum + num[i];
    }

    float ave = sum / n;
    cout << ave << ' ';

    float var = variencee(ave, n, num);
    cout << var;
    return 0;
}