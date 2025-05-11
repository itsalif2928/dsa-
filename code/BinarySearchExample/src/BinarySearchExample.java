import java.util.Scanner;

public class BinarySearchExample {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Input the number of elements in the array: ");
        int n = input.nextInt();

        int[] arra = new int[n];
        System.out.println("Input " + n + " elements in ascending order: ");
        for (int i = 0; i < n; i++) {
            arra[i] = input.nextInt();
        }
        System.out.println("Input the element to search: ");
        int x = input.nextInt();

        // Binary search
        int f = 0, l = n - 1, m = 0;
        boolean found = false;

        while (f <= l) {
            m = (f + l) / 2;
            if (arra[m] == x) {
                found = true;
                break;
            } else if (x < arra[m]) {
                l = m - 1;
            } else {
                f = m + 1;
            }
        }

        if (found) {
            System.out.println("Value found at position: " + m);
        } else {
            System.out.println("Value not found");
        }

        input.close();
    }
}
