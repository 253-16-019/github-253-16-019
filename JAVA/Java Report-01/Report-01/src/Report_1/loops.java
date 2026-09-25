package Report_1;

public class loops {
    public static void main(String[] args) {

        System.out.println("For Loop:");
        for (int i = 1; i <= 3; i++) {
            System.out.println("i = " + i);
        }

        System.out.println("\nWhile Loop:");
        int j = 1;
        while (j <= 3) {
            System.out.println("j = " + j);
            j++;
        }
        
        System.out.println("\nDo-While Loop:");
        int k = 1;
        do {
            System.out.println("k = " + k);
            k++;
        } while (k <= 3);

        System.out.println("\nEnhanced For Loop:");
        
        int[] numbers = {20, 30, 40, 50};
        for (int num : numbers) {
            System.out.print(" " + num);
        }
    }
}
