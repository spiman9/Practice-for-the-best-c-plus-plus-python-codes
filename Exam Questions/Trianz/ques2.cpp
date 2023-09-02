#include<iostream>
using namespace std;



int FindContagiousSeq(int input1 , int input2[]){
    int ans = 0;
    int s = 0;
    for(int i=0;i<input1;i++){
        if(input2[i] <= 0){
            if(s > ans){
                ans = s;
            }
            s = 0;
        }else{
            s += input2[i];
        }
    }

    if(s > ans){
        ans = s;
    }

    return ans;
}


int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << FindContagiousSeq(n , arr);
}