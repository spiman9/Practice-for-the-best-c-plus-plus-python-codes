import java.util.Scanner;



class Complex{
    private int real;
    private int img;

    // Zero argument constructor
    Complex(){
        real = 0;
        img = 0;
    }

    // Parameterized constructor
    Complex(int real , int img){
        this.real = real;
        this.img = img;
    }

    //Copy constructor
    Complex(Complex c){
        real = c.real;
        img = c.img;
    }

    int getReal(){
        return real;
    }

    int getimg(){
        return img;
    }

    Complex add(Complex c){
        Complex temp= new Complex();
        temp.real = real + c.real;
        temp.img  = img + c.img;
        return temp;
    }

    Complex subtract(Complex c){
        Complex temp= new Complex();
        temp.real = real - c.real;
        temp.img  = img - c.img;
        return temp;
    }


    void display(){
        System.out.println("Complex Number : " + img + "i +  " + real);
    }


    public static void main(String args[]){
        int real;
        int img;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the real and img part for complex number one : ");
        real = sc.nextInt();
        img = sc.nextInt();
        Complex c1 = new Complex(real , img);
        c1.display();

        System.out.println("Enter the real and img part for complex number two : ");
        real = sc.nextInt();
        img = sc.nextInt();
        Complex c2 = new Complex(real , img);
        c2.display();


        Complex c3 = c1.add(c2);
        Complex c4 = c1.subtract(c2);
        System.out.println("Addition");
        c3.display();
        System.out.println("Subtract");
        c4.display();

        sc.close();
        // System.out.println("Hashcode : " + c1.hashCode() + " " + c1.substring(0 , 3));
    }

}