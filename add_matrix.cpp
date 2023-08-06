#include<iostream>
using namespace std;

int main(){
    int n1 , n2;
    cout << "Enter the number of columns and number of rows : ";
    cin >> n1 >> n2;

    int a[n1][n2];
    int b[n1][n2];
    int c[n1][n2];
    cout << "Enter the elements of A : " << endl;
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j <n2 ; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of B : " << endl;
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j <n2 ; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j <n2 ; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Result : " << endl;
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}