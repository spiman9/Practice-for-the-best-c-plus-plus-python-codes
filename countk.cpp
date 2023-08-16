#include<bits/stdc++.h>
using namespace std;


int countt(int n , int k){
    int ct = 0;
    while(n!=0){
        int d = n%10;
        d == k ? ct++ : ct;
        n /= 10;
    }
    return ct;
}
int main(){
    int n;
    int k;
    cin >> k;
    cin >> n;
    vector<int>count;
    vector<int>arr;
    while(n--){
        int x;
        cin >> x;
        arr.push_back(x);
        int ct = countt(x , k);
        count.push_back(ct);
    }

    int max = count[0];
    int index = 0;
    for(int i=1;i<count.size();i++){
        if(max < count[i]){
            max = count[i];
            index = i;
        }
    }

    cout << arr[index] << endl;
}