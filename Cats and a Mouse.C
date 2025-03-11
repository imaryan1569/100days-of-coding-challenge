import java.util.Scanner;

public class Solution {
    public static void catAndMouse(int x, int y, int z) {
        int distA = Math.abs(x - z);
        int distB = Math.abs(y - z);

        if (distA < distB) {
            System.out.println("Cat A");
        } else if (distB < distA) {
            System.out.println("Cat B");
        } else {
            System.out.println("Mouse C");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int q = scanner.nextInt();

        for (int i = 0; i < q; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int z = scanner.nextInt();

            catAndMouse(x, y, z);
        }

        scanner.close();
    }
}