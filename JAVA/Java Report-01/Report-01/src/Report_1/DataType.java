package Report_1;

public class DataType {
    public static void main(String[] args) {
        byte b=100;
        short s=1000;
        int i=200;
        long l=1000000;
        float f=1.23f;
        double d=1.27645645;

        char ch='A';
        String str="I am Rashed";

        boolean bo=true;

        int[] arr={2,3,4,5,6,7};

        Integer wrapperClass=Integer.valueOf(50);
        StringBuilder obj=new StringBuilder("Rashed");


        System.out.println("byte: " + b);
        System.out.println("short: " + s);
        System.out.println("int: " + i);
        System.out.println("long: " + l);
        System.out.println("float: " + f);
        System.out.println("double: " + d);
        System.out.println("char: " + ch);
        System.out.println("boolean: " + bo);

        System.out.println("String: " + str);

        System.out.print("Array: ");
        for (int num : arr) {
            System.out.print(num + " "); // sudhu print.  'ln'-> \n moto kaj kore
        }

        System.out.println();

        System.out.println("Wrapper Integer: " + wrapperClass);
        System.out.println("StringBuilder: " + obj);  
    }
}
