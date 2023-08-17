

public class Rectangle {
    private int lenght;
    private int breath;
    static int count ;
    int objnumber;

    //Static block
    static{
        count = 1;
    }

    // Instance Block
    {
        lenght = 0;
        breath = 0;
    }

    
    Rectangle(int lenght , int breath){
        this.lenght = lenght;
        this.breath = breath;
        objnumber = count++;
    }

    Rectangle(){
        lenght = 0 ; breath = 0;
        objnumber = count++;
    }

    //Non static member
    boolean isEqual(Rectangle r){
        if(lenght == r.lenght && breath == r.breath){
            return true;
        }
        return false;
    }

    //static member
    static boolean isEqual(Rectangle r1 , Rectangle r2){
        if(r1.lenght == r2.lenght && r1.breath == r2.breath){
            return true;
        }
        return false;
    }


    @Override
    public String toString(){
        return "lenght : " + lenght + " breath : " + breath;
    }

    public static void main(String args[]){
        Rectangle r1 = new Rectangle(90 , 100);
        System.out.println(r1);
        Rectangle r2 = new Rectangle(90 , 100);
        System.out.println(r2);
        System.out.println(r1.isEqual(r2));
        System.out.println(isEqual(r1, r2));
    }


}
