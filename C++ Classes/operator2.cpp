// OVERLOADING THE + operator AND RETURNING THE SUM IN THE NEW INVOKING OBJECT

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

    

    Currency operator+(Currency c1){
        Currency temp;
        temp.rupees  =this->rupees + c1.rupees;
        temp.paisa  =this->paisa + c1.paisa;
        if(temp.paisa > 99){
            temp.rupees +=1;
            temp.paisa%=100;
        }
        return temp;
    }

    void display(){
        cout << rupees << " rupees " << " and " << paisa << " paisa" << endl;
    }
};

int main(){
    Currency c1(1, 99);
    Currency c2(2 , 90);
    Currency c3;
    c3 = c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}