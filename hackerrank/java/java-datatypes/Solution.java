import java.io.*;
import java.util.*;

class Solution {

    public static void main(String[] argh) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            try {
                long x = sc.nextLong();
                System.out.println(x + " can be fitted in:");
                if (-128 <= x && x <= 127) System.out.println("* byte");
                if (-32_768 <= x && x <= 32_767) System.out.println("* short");
                if (
                    -2_147_483_648 <= x && x <= 2_147_483_647
                ) System.out.println("* int");
                System.out.println("* long");
            } catch (Exception e) {
                System.out.println(sc.next() + " can't be fitted anywhere.");
            }
        }
    }
}
