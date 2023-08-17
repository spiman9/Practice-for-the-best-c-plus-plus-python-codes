#include<iostream>
using namespace std;



class Shape{
    protected:
    string name;
    public:
    Shape(string s){
        name = s;
    }
    void show(){
        cout << "The shape is : " << name << endl;
    }
};

class Triangle :public Shape{
    int a , b , c;
    public:
    Triangle(string name , int a , int b , int c):Shape(name)
    {
        // super->name = name;
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void show(){
        Shape::show();
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};


int main(){
    
    Triangle t = Triangle("Triangle" , 34 , 12  ,78);
    t.show();
    return 0;
}