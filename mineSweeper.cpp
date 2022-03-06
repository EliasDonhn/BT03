#include<iostream>

using namespace std;

int count(int i, int j, int a, int b, char cloneMap[a][b]){
    
}

int main (){
    int a, b;
    cin >> a >> b;
    char _map[a][b];
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            cin >> _map[i][j];
    
    char cloneMap[a][b];
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            cloneMap[i][j] = _map[i][j];

    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            int count = 0;
            if(cloneMap[i][j] == '.'){
                cloneMap[i][j] = count(i, j, a, b, cloneMap[a][b]);
            }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++)
            cout << cloneMap[i][j] << ' ';
        cout << endl;
    }
}