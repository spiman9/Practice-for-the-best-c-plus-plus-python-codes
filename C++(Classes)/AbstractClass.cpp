#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void draw();
};

class Triangle:public Shape{
    public:
    void draw(){
        cout << "I am Triangle shape\n";
    }
};

class Square:public Shape{
    public:
    void draw(){
        cout << "I am Square shape\n";
    }
};

int main(){
    Shape *s;

    Triangle t;
    s = &t;
    s->draw();

    Square sq;
    s = &sq;
    s->draw();

    return 1;
}