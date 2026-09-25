package Report_1;

public class Operator {
    public static void main(String[] args) {
        int a = 500, b = 40;

        System.out.println("a + b = " + (a + b)); 
        System.out.println("a - b = " + (a - b));  

        System.out.println("a > b ? " + (a > b));  

        boolean x = true, y = false;
        System.out.println("x And y = " + (x && y));
        System.out.println("x OR y = " + (x || y)); 

        a += 5;
        System.out.println("a after += 5 : " + a);

        int max = (a > b) ? a : b;
        System.out.println("Maximum = " + max);
    }
}
