#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string  , int>mp;
    string s;
    cin >> s;
    int n = s.size();

    mp["A"] = 1;
    mp["B"] = 2;
    mp["C"] = 3;
    mp["D"] = 4;
    mp["E"] = 5;
    int ct = 5;

    if(n == 1){
        cout << mp[s];
        return 0;
    }

    for(int i = 'A' ; i <='E' ; i++){
        for(int j = 'A' ; j<='E' ; j++){
            ct+=1;
            string temp = "";
            temp.push_back(i);
            temp.push_back(j);
            if(temp == s){
                cout << ct << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}