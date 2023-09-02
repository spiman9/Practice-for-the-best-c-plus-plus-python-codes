#include<bits/stdc++.h>
using namespace std;


int isPrime(int num){
    if(num == 1){
        return 0;
    }
    if(num == 2 || num==3){
        return 1;
    }

    for(int i=2;i<=num/2;i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){
    string s;
    while(getline(cin , s)){
        int num = stoi(s);
        if(isPrime(num)){
            cout <<"TRUE\n";
        }else{
            cout << "FALSE\n";
        }
    }
}

