public class Inheritance {
    public static void main(String args[]){
        Grandfather g = new Grandfather(45);
        // g.speak();
        Father f = new Father(23, 12);
        // f.speak();
        Child c = new Child(12 , 89 , 9);
        // c.speak();
        g = f;
        g.speak();
        g = c;
        g.speak();
        f = c;
        f.speak();
        
    }
}


class Grandfather{
    int a;
    Grandfather(int a){
        this.a = a;
    }

    void speak(){
        System.out.println("I am Grandfather");
    }
}

class Father extends Grandfather{
    int b;
    Father(int a , int b){
        super(a);
        this.b = b;
    }

    @Override
    void speak(){
        System.out.println("I am Father");
    }
}


class Child extends Father{
    int c;
    Child(int a , int b , int c){
        super(a , b);
        this.c= c;
    }

    @Override
    void speak(){
        System.out.println("I am Child");
    }
}