import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        sc.close();
        if (new StringBuilder(s).reverse().toString().equals(s)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
