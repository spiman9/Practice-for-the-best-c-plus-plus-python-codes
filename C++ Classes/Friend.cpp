#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int a){
        this->a = a;
    }
    void show(){
        cout << "A : " << a << endl;
    }

    friend void add(A , B); // Friend function demonstraition
    
};

class B{
    int b;
    public:
    B(int b){
        this->b = b;
    }
    void show(){
        cout << "B : " << b << endl;
    }

    friend void add(A , B);
};

void add(A a , B b){
    cout << "The sum is : " << (a.a + b.b) << endl;
}

int main(){
    A a1(90);
    B b1(91);
    add(a1 , b1);
}