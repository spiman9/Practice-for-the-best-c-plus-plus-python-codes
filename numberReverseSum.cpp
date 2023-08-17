#include<iostream>
using namespace std;


bool isPalindrome(int n){
    int rev = 0 ;
    int temp = n;
    while(n != 0){
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    if(temp == rev){
        return true;
    }
    return false;
}


int reverse(int n){
    int rev = 0;
    while(n!=0){
        int d = n %10;
        rev = rev*10 + d;
        n /= 10;
    }
    return rev;
}

int main(){
    int n;
    cin >> n;
    // cout << reverse(n) << endl;
    while(!isPalindrome(n)){
        int sum = n + reverse(n);
        n = sum;
    }
    cout << n << endl;
}