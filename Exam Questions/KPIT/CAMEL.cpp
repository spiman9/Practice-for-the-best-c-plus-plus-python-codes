#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string>arr;
    string temp;
    for(auto ch : s){
        if(ch >= 'A' && ch <='Z'){
            arr.push_back(temp);
            temp = "";
            temp += toupper(ch);
        }else{
            temp+= tolower(ch);
        }
    }
    arr.push_back(temp);

    vector<string>arr2;

    for(auto temp : arr){
        string t = "";
        for(auto ch : temp)
        {
            if(isupper(ch)){
                t += tolower(ch);
            }else{
                t += toupper(ch);
            }
        }
        arr2.push_back(t);
    }

    for(auto t : arr2){
        cout << t << endl;
    }
    return 1;
}