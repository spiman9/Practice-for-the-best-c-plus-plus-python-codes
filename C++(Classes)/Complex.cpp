#include<iostream>
using namespace std;

class Complex{
    float real , img;

    public:
    // Inline Constructor
    Complex():real(0) , img(0){}

    Complex(float a , float b):real(a) , img(b){}

    Complex(Complex & c){
        this->real = c.real;
        this->img = c.img;
    }

    void display(){
        cout << img << "i + " << real << endl;
    }

    Complex operator+(Complex c){
        Complex temp(0.0 , 0.0);
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }

    Complex operator-(Complex c){
        Complex temp(0.0 , 0.0);
        temp.real = this->real - c.real;
        temp.img = this->img - c.img;
        return temp;
    }

    // preincreament operation overloading
    void operator++(){
        this->real += 1;
        this->img += 1;
    }

    void operator--(){
        this->real -= 1;
        this->img -= 1;
    }


    //pre increment operator oveloading
    void operator++(int){
        this->real += 1;
        this->img += 1;
    }

    void operator--(int){
        this->real -= 1;
        this->img -= 1;
    }


    

};


int main(){
    cout << "Enter the c1 real and img : " ;
    float r , i;
    cin >> r >> i;
    
    Complex c1(r , i);

    cout << "Complex c1 = ";
    c1.display();
    cout << "Enter the c2 real and img : " ;
    cin >> r >> i;
    Complex c2(r , i);
    cout << "Complex c2 = ";
    c2.display();

    Complex c3;
    c3 = c1+c2;
    cout << "After the sum is : " ;
    c3.display();

    c3 = c1-c2;
    cout << "After the subtraction is : " ;
    c3.display();

    c1++;
    cout << "After post increment is : " ;
    c1.display();

    return 0;
}