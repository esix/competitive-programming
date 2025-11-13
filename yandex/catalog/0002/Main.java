import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int[] cost = new int[m];

        for (int i = 0; i < n; i++) {
            scanner.nextLine();
            for (int j = 0; j < m; j++) {
                int v = scanner.nextInt();
                if (i == 0) {
                    cost[j] = j == 0 ? v : cost[j - 1] + v;
                } else {
                    cost[j] = j == 0
                        ? cost[j] + v
                        : Math.min(cost[j] + v, cost[j - 1] + v);
                }
            }
        }
        scanner.close();
        System.out.println(cost[m - 1]);
    }
}
