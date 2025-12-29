import java.util.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        Pattern pattern = Pattern.compile("<([^>]+)>([^<]+?)</\\1>");

        for (int i = 0; i < n; i++) {
            String line = scan.nextLine();
            boolean found = false;
            Matcher matcher = pattern.matcher(line);
            while (matcher.find()) {
                System.out.println(matcher.group(2));
                found = true;
            } 
            if (!found) {
                System.out.println("None");
            }
        }
        scan.close();
    }
}