#include<iostream>
using namespace std;



class Parent{
    protected:
    int a;

    public:
    Parent(){
        cout << "Parent class constructor\n";
    }
    virtual void show(){
        cout << "I am in parent class\n";
    }
};

class Child:public Parent{
    protected:
    int b;

    public:
    Child(){
        cout << "Child class constructor\n";
    }
    void show(){
        cout << "I am in Child class\n";
    }
};

int main(){
    cout << "PPPPPPP1\n";
    Parent p1;
    cout << "CCCCC1\n";
    Child c1;

    // p1.show();
    // c1.show();


    Child *cptr;
    // cptr = &c1; // Work fine thses 2 lines
    // cptr->show();
    
    // cptr = &p1; // Error

    Parent *pptr;
    // pptr = &p1; // Work fine thses 2 lines
    // pptr->show();

    // pptr = &c1; // Work fine..........if virtual not written
    // pptr->show(); // then parent class show ll get executed

    // After writng virtual
    pptr = &c1;
    pptr->show();

    return 1;
}