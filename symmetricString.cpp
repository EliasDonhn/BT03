#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool test = true;
    for(int i = 0; i < s.length()/2; i++){
        if(!test)   break;
        if(s[i] != s[s.length() - 1 - i])
            test = false;
    }

    if(!test)   cout << "No";
    else        cout << "Yes";
    return 0;
}