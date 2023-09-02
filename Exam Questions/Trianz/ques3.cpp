#include<iostream>
using namespace std;


struct Result{
    Result() : output1(){};
    int output1[10000];
};

Result fuction(int input1 , int input2 , int input3[]){
    Result ans;

    input2 = (input2 - 1) % input1;
    int k = 0;
    if(input2 == 0){
        input2 = -1;
    }else{
        ans.output1[0] = input3[input2];
        k = 1;
    }
    

    for(int i=0;i<input1;i++){
        if(i!=input2)
            ans.output1[k++] = input3[i];
    }

    return ans;
}

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    Result rs = fuction(n , k , arr);

    for(int i=0;i<1000;i++){
        cout << rs.output1[i] << " ";
    }
    
}