

import java.util.Scanner;


class HelloWorld{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your age : ");
        int n = sc.nextInt();
        System.out.println("Hello World !!! Your age is " + n);
        sc.close();
    }
}