#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int>odd ;
    vector<int>even;


    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        if(i%2==0){
            even.push_back(x);
        }else{
            odd.push_back(x);
        }
    }

    sort(even.begin() , even.end());
    sort(odd.begin()  , odd.end());

    for(auto x :even){
        cout << x << " ";
    }
    cout << endl;
    for(auto x : odd){
        cout << x << " ";
    }
}