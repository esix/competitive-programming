import java.util.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        Pattern pattern = Pattern.compile("^[A-Za-z][A-Za-z0-9_]{7,29}$");

        for (int i = 0; i < n; i++) {
            String line = scan.nextLine();
            Matcher matcher = pattern.matcher(line);
            if (matcher.find()) {
                System.out.println("Valid");
            } else {
                System.out.println("Invalid");

            }
        }
        scan.close();
    }
}