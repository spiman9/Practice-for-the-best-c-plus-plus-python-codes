#include<iostream>
using namespace std;

struct Student{
    int sno;
    string name;
    int marks[3];
    float avg;
};

int main(){
    int n;
    cout << "Enter the number of students : ";
    cin >> n;
    Student s[n];

    cout << "Enter the data below\n";
    for(int i =0 ; i < n ; i++){
        cout << "Enter the sno of " << (i+1) << " Student : ";
        cin >> s[i].sno ;
        cout << "Enter the name of " << (i+1) << " Student : ";
        cin >> s[i].name ;
        cout << "Enter the marks of " << (i+1) << " Student : ";
        cin >> s[i].marks[0] >> s[i].marks[1] >> s[i].marks[2] ;
        s[i].avg = (float)(s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3;
    }

    cout << "Thanks for entering the data !!!\n\n";

    //Display

    for(int i = 0 ; i < n; i++){
        cout << "Student : "  << (i+1) << endl;
        cout << "sno : " << s[i].sno << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "marks : " << s[i].marks[0] << " " <<s[i].marks[1] << " " <<s[i].marks[2] << endl;
        cout << "Average : " << s[i].avg << endl<<endl;
    }
}