import java.util.Scanner;

public class Main {
    public static int birthdayCakeCandles(int[] candles) {
        int max = candles[0];
        int count = 0;

        for (int i = 0; i < candles.length; i++) {
            if (candles[i] > max) {
                max = candles[i];
                count = 1;
            } else if (candles[i] == max) {
                count++;
            }
        }

        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] candles = new int[n];

        for (int i = 0; i < n; i++) {
            candles[i] = scanner.nextInt();
        }

        int result = birthdayCakeCandles(candles);
        System.out.println(result);

        scanner.close();
    }
}