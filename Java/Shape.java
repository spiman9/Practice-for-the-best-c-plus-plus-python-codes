import static java.lang.Math.sqrt;
import static java.lang.Math.PI;
import static java.lang.Math.pow;

import java.util.*;


public abstract class Shape {
    String name;
    Shape(String name){
        this.name = name;
    }
    abstract double getArea();

    public static void main(String ar[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius of circle : ");
        int r = sc.nextInt();
        Circle c = new Circle("Circle", r);
        System.out.println("The area is : " + c.getArea());

        System.out.println("Enter the side of square : ");
        int s = sc.nextInt();
        Square sobj = new Square("Square", s);
        System.out.println("The area is : " + sobj.getArea());

        System.out.println("Enter the side of triangle : ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int d = sc.nextInt();

        Triangle tobj = new Triangle("Triangle", a , b , d);
        System.out.println("The area is : " + tobj.getArea());
        sc.close();
    }
}

class Triangle extends Shape{
    int a ;
    int b ;
    int c;
    Triangle(String name , int a , int b , int c){
        super(name);
        this.a = a;
        this.b = b;
        this.c = c;
    }

    double getArea(){
        double s = (double)(a + b + c) / 2;
        return sqrt(s * (s-a) * (s-b) * (s-c));
    }

}


class Square extends Shape{
    int a;
    Square(String name ,int  a){
        super(name);
        this.a = a;
    }

    double getArea(){
        return (double)a*a;
    }
} 

class Circle extends Shape{
    int radius;
    Circle(String name , int radius){
        super(name);
        this.radius = radius;
    }
    double getArea(){
        return PI * pow(radius , 2);
    }
}


