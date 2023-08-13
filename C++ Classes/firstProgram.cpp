#include<iostream>
using namespace std;


enum color{red = 89 , black = 12 , blue = 56};
int main(){
    cout << "Hello World" << endl;

    // Enumerations in c++
    color background = black;
    cout << background << endl;
    background = (color)13;
    cout << background << endl;
    background = black;
    cout << background << endl;
    return 0;
}