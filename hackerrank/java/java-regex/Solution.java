import java.util.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Pattern pattern = Pattern.compile("^(([01]?\\d{1,2}|2[0-4]\\d|25[0-5])(\\.(?!$)|$)){4}$");

        while (scan.hasNext()) {
            String line = scan.nextLine();
            Matcher matcher = pattern.matcher(line);
            System.out.println(matcher.find());
        }
        scan.close();
    }
}
