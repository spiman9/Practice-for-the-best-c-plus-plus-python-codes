#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breath;

    public:
    Rectangle(){
        this->length = 0;
        this->breath = 0;
    }

    Rectangle(int a , int b){
        this->length = a;
        this->breath = b;
    }

    //Copy constructor
    Rectangle(Rectangle & r1){
        this->length = r1.length;
        this->breath = r1.breath;
    }

    // This is used for the preincrement
    void operator ++(){
        this->length++;
        this->breath++;
    }

    //Post Increment
    void operator ++(int){
        this->length += 2;
        this->breath += 2;
    }

    // FRIEND PRE DECREMENT
    friend void operator --(Rectangle&r){
        r.length-=1;
        r.breath-=1;
    }

    void display(){
        cout << "Length : " << this->length << endl;
        cout << "breath : " << this->breath << endl;
    }
};

int main(){
    Rectangle r(23 , 56);
    ++r;
    r.display();

    Rectangle r2(50 , 60);
    r2++;
    r2.display();


    //Copy Constructor
    Rectangle r3(r);
    r3.display();

    //Method 2 // Deep Copy
    Rectangle r4 = r;
    r4.display();

    // Shallow copy or the assignment operator
    Rectangle r5;
    r5 = r;
    r5.display();
    return 0;
}