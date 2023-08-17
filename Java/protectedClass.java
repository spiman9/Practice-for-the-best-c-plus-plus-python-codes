//demonstrate that protected member can be inherited to base class

public class protectedClass {
    protected int a , b;

    protectedClass(int a , int b){
        this.a = a;
        this.b = b;
    }

    protectedClass(){
        a = 0 ; b = 0;
    }

    public static void main(String args[]){
        Child c = new Child(10 , 20);
        System.out.println(c);
        
        System.out.println(c.sum());
    }
}


class Child extends protectedClass{

    Child(int a , int b){
        super(a , b);
    }

    int sum(){
        return a + b;
    }

    public String toString(){
        return "I am Child Class";
    }
}
