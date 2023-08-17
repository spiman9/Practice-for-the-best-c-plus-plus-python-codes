

class Triangle{
    double calculateArea(int base , int height){
        return (double)(0.5 * (double)(base *height));
    }


    double calculateArea(int a , int b , int c){
        double s = (a + b + c) / 2;
        double area = Math.sqrt(s * (s-a) * (s-b) * (s-c));
        return area;
    }
}


class Overloading{
    public static void main(String args[]){
        Triangle obj = new Triangle();
        System.out.println(obj.calculateArea(4 ,5));
        System.out.println(obj.calculateArea(6 , 8 , 5));
    }
}