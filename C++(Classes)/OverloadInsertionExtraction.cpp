#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    // INLINE CONSTRUCTOR
    Complex(): real(0) , img(0){}

    Complex(int real , int img){
        this->real = real;
        this->img = img;
    }


    void printHeading();

    //overoad the  < operator BY MEMBER FUNCTION
    bool operator < (Complex c){
        if(real < c.real){
            return true;
        }
        return false;
    }

    // OERVLOADING THE GREATER THAN BY FRIEND FUNCTION
    friend bool operator > (Complex c1 , Complex c2){
        if(c1.real > c2.real){
            return true;
        }
        return false;
    }

};


void Complex::printHeading(){
    cout << "Noow gooing to print the complex number" << endl;
}


// OVERLOADING THE INSERTION OPERATOR
ostream& operator << (ostream &out , Complex c){
    out << c.img << "i + " << c.real << endl;
    return out;
}


// OVERLOADING THE EXTRATION OPERATOR
istream& operator >> (istream& in , Complex&c){
    in >> c.real >> c.img;
    return in;
}

int main(){

    Complex c1;
    c1.printHeading();

    cout << "Enter the real and img : " ;
    cin >> c1;
    cout << "The number is  : " << c1;

    Complex c2;
    c2.printHeading();

    cout << "Enter the real and img : " ;
    cin >> c2;
    cout << "The numebr is  : " << c2;



    cout << (c1 < c2) << endl;
    cout << (c1 > c2) << endl;
    return 0;
}