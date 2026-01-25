import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        List<Integer> list = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            list.add(scanner.nextInt());
        }
        
        int Q = scanner.nextInt();
        
        for (int i = 0; i < Q; i++) {
            String queryType = scanner.next();
            
            if (queryType.equals("Insert")) {
                int x = scanner.nextInt();
                int y = scanner.nextInt();
                list.add(x, y);
            }
            
            if (queryType.equals("Delete")) {
                int x = scanner.nextInt();
                if (x >= 0 && x < list.size()) {
                    list.remove(x);
                }
            }
        }
        
        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i));
            if (i < list.size() - 1) {
                System.out.print(" ");
            }
        }
        
        scanner.close();
    }
}
