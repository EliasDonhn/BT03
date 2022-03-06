#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int lim = N * N;
    int matrix[N][N];
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matrix[i][j] = 0;
    
    int x = 0, y = N/2;
    int num = 1;
    while(num <= lim){
        matrix[x][y] = num;
        x = (x - 1 + N) % N;
        y = (y + 1) % N;
        if(matrix[x][y] != 0){
            x = (x + 2) % N;
            y = (y - 1 + N) % N;
        }
        num++;
    }
    
    for(int i = 0; i < N; i++){
        cout << endl;
        for(int j = 0; j < N; j++){
            if(matrix[i][j] < 10)
                cout << ' ' << matrix[i][j] << ' ';
            else    
                cout << matrix[i][j] << ' ';
        }
    }
    return 0;
}