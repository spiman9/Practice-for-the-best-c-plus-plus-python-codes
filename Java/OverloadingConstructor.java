public class OverloadingConstructor {
    int rollno;
    String firstName;
    String lastName;
    double percentage;

    OverloadingConstructor(){
        rollno = 1;
        percentage = 70.45d;
    }
    OverloadingConstructor(String firstName , String lastName){
        this.firstName = firstName;
        this.lastName = lastName;
    }

    OverloadingConstructor(int rollno , String firstName , String lastName , double percentage){
        this(firstName , lastName);
        this.rollno = rollno;
        this.percentage = percentage;
    }

    void display(){
        System.out.println("Roll no : " + this.rollno);
        System.out.println("Name : " + this.firstName + " " + this.lastName);
        System.out.println("Percentage : " + this.percentage);
    }

    public static void main(String args[]){
        OverloadingConstructor obj = new OverloadingConstructor(99 , "Pritham" , "Baswani Giryalkar" , 9.85);
        obj.display();
    }
}



