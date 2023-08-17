class Addition{
    int sum(int ...a){
        int sum = 0;
        for(int x : a){
            sum += x;
        }
        return sum;
    }

    String sum(String name , int ...a){
        int sum = 0;
        for(int x : a){
            sum = sum + x;
        }
        return "The name is  : " + name + " and sum is "+ sum;
}
}


public class VariableLengthArgument {
    public static void main(String args[]){
        Addition obj = new Addition();
        System.out.println(obj.sum(10,20,30,40,50));
        System.out.println(obj.sum(10 , 20));
        System.out.println(obj.sum("Pritham" , 10 , 20 , 30 , 40 , 50));
    }
}
