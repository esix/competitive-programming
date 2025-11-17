import java.util.*;

class Solution {

    public static void main(String[] argh) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            int pow = 1,
                result = a;
            for (int j = 0; j < n; j++) {
                result += pow * b;
                pow <<= 1;
                System.out.print(result);
                System.out.print(' ');
            }
            System.out.println();
        }
        in.close();
    }
}
