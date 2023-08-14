#include<iostream>
using namespace std;

class Grandfather{
    public:
    virtual void speak(){
        cout << "I am grandfather\n";
    }
};

class Father:public Grandfather{
    public:
    virtual void speak(){
        cout << "I am Father\n";
    }
};

class Child:public Father{
    public:
    void speak(){
        cout << "I am Child\n";
    }
};



int main(){
    Grandfather gf;
    gf.speak();

    Father f;
    f.speak();

    Child c;
    c.speak();

    cout << "Real experiment starts here" << endl;

    Child *cptr = &c;
    cptr->speak();

    Father *fptr = &f;
    fptr->speak();

    Grandfather *gfptr = &gf;
    gfptr->speak();

    fptr = &c;
    fptr->speak();

    return 0;
}