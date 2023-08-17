#include<iostream>
using namespace std;

class Shape{
    protected:
    string name;
    float area = 0;
    public:
    Shape(){
        ;
    }
    Shape(string name){
        this->name = name;
    }

    virtual void Area(){
        cout << "Area1";
        area = 0.0;
        cout << area<< endl;
    }

    virtual void show(){
        cout << "Area1 : " << area << endl;
    }
};

class Square:public Shape{
    private:
    int side;

    public:
    Square(string name , int side): Shape(name)
    {
        this->side = side;
    }
    void Area(){
        area = side * side;
    }
    void show(){
        cout << "Area2 : " << area << endl;
    }
};

int main(){

    Square s("Square" , 6);
    Shape *base;
    // s.Area();
    // s.show();
    base = &s;
    base->Area();
    base->show();
    Shape tempShape= Shape();
    base = &tempShape;
    base->show();
}