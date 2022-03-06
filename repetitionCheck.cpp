#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    const int _size = N;
    int chuoi[_size];
    for(int i = 0; i < N; i++)
        cin >> chuoi[i];
    
    bool test = true;
    for(int i = 0; i < _size; i++){
        if(!test)   break;
        for(int j = i + 1; j < _size; j++)
            if(chuoi[i] == chuoi[j]){
                test = false;
                break;
            }
    }
    
    if(test)    cout << "No";
    if(!test)   cout << "Yes";
    return 0;
}