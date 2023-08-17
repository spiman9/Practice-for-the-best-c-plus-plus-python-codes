#include<iostream>
using namespace std;

class Shape{
    string name;
    public:
    Shape();
    void display();
    ~Shape();
};

Shape::~Shape(){
    cout << "Destructor : " << this->name  << endl;
}
Shape::Shape(){
        cout << "Enter the shape : " ;
        string x;
        cin >> x;
        this->name =x;
}
void Shape::display(){
    cout << "The shape is : " << this->name << endl;
}

int main(){
    Shape s;
    Shape s1;
    return 1;
}