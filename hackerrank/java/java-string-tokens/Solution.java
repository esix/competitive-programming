import java.util.*;
import java.util.stream.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        List<String> tokens = Arrays.asList(s.split("[^A-Za-z]+"))
            .stream()
            .filter(x -> !x.equals(""))
            .collect(Collectors.toList());
        System.out.println(tokens.size());
        for (Object t: tokens) {
            System.out.println(t);
        }
        scan.close();
    }
}
