import java.util.Scanner;

public class ExceptionExample {
    public static void main(String args[]){
        try{
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter your age : ");
            int a = sc.nextInt();
            sc.close();
            if(a > 18){
                throw new AgeCheckException("Invalid Age");
            }
        }catch(AgeCheckException ag){
            System.out.println(ag);
        }catch(Exception e){
            System.out.println(e);
        }finally{
            System.out.println("Coming out of the try catch block");
        } 
    }
}


class AgeCheckException extends Exception{
    AgeCheckException(String s){
        super(s);
    }

    @Override
    public String toString(){
        return "Invalid Age Exception";
    }

    @Override
    public String getMessage(){
        return "Handled the msg";
    }

    @Override
    public void printStackTrace(){
        System.out.println("Error in this line");
    }

    protected void finalize(){
        System.out.println("Here the object is deleted");
    }

}