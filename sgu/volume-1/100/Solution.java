import java.util.Scanner;
import java.io.PrintWriter;
import java.io.File;

public class Solution {

    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(new File("input.txt"));
        PrintWriter writer = new PrintWriter("output.txt");
        
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        writer.print(m * n);

        writer.close();
    }
}