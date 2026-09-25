package Report_1;

public class Variables { 
    int instanceVar = 10;  
    static String staticVar = "I am Rashed. Doing Static";

    public void showVariables() {
        int localVar = 5;

        System.out.println("Instance Variable: " + instanceVar);
        System.out.println("Static Variable: " + staticVar);
        System.out.println("Local Variable: " + localVar);
    }
    public static void main(String[] args){    
        Variables obj1 = new Variables();
        obj1.showVariables();

        System.out.println("Accessing Static Variable via class: " + Variables.staticVar);
    }
}
