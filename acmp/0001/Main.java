import java.io.*;
import java.util.*;
 
 
public class Main {
 
    public static void main(String[] args) {
        try {
            new Main().run();
        }catch(IOException e) {
 
        }
    }
     
    public void run() throws IOException {
        Scanner sc = new Scanner(new File("input.txt"));
        int a = sc.nextInt();
        int b = sc.nextInt();
        PrintWriter pw = new PrintWriter(new File("output.txt"));
        pw.print(a+b);
        pw.close();
    }
 
}