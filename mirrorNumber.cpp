#include<iostream>

using namespace std;

bool mirrorNum(int N){
    int x = N;
    int sum = 0;
    while(N > 0){
        sum = sum * 10 + (N % 10);
        N = N / 10;
    }
    if(sum == x) return true;
    else         return false;
}

int main(){
    int T;
    cin >> T;
    int A[T], B[T];
    for(int i = 0; i < T; i++){
        cin >> A[i] >> B[i];
    }
    for(int i = 0; i < T; i++){
        int count = 0;
        for(int N = A[i]; N <= B[i]; N++)
            if(mirrorNum(N))    count++;
        cout << count << endl;
    }
    return 0;
}