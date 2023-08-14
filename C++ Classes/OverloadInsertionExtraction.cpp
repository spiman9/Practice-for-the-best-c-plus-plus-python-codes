#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    
    Complex(): real(0) , img(0){}

    Complex(int real , int img){
        this->real = real;
        this->img = img;
    }

    void printHeading();

};


void Complex::printHeading(){
    cout << "Noow gooing to print the complex number" << endl;
}


ostream& operator << (ostream& out , Complex &c){
    out << c.img << "i + " << c.real << endl;
    return out;
}

istream& operator >> (istream& in , Complex&c){
    in >> c.real >> c.img;
    return in;
}

int main(){

    Complex c1;
    c1.printHeading();
    
    cout << "Enter the real and img : " ;
    cin >> c1;
    cout << "The roots are  : " << c1;
    return 0;
}