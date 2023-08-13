// OVERLOADING THE + operator AND DOING THE SUM IN THE INVOKING OBJECT AS WELL

#include<iostream>
using namespace std;

class Currency{
    int rupees;
    int paisa;

    public:
    Currency(){
        rupees = 0;
        paisa = 0;
    }
    Currency(int r , int p){
        this->rupees = r;
        this->paisa = p;
    }

    void operator+(Currency c1){
        this->rupees += c1.rupees;
        this->paisa += c1.paisa;
        if(this->paisa > 99){
            this->rupees += 1;
            this->paisa %=100;
        }
    }

    void display(){
        cout << rupees << " rupees " << " and " << paisa << " paisa" << endl;
    }
};

int main(){
    Currency c1(1, 99);
    Currency c2(2 , 90);
    c1.display();
    c2.display();
    c1+c2;
    c1.display();
    c2.display();
    return 0;
}