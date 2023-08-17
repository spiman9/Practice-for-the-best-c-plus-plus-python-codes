#include<iostream>
using namespace std;

inline int square(int a){
    int ans = a*a;
    return ans;
}

int main(){
    int a;
    cin >> a;
    cout << square(a) <<endl;
}