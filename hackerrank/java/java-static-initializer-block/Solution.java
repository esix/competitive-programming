import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    static int B;
    static int H;
    static boolean flag;

    static {
        Scanner sc = new Scanner(System.in);
        B = sc.nextInt();
        H = sc.nextInt();
        flag = B > 0 && H > 0;
        sc.close();
        if (!flag) {
            System.out.println(
                "java.lang.Exception: Breadth and height must be positive"
            );
        }
    }

    public static void main(String[] args) {
        if (flag) {
            int area = B * H;
            System.out.print(area);
        }
    } //end of main
} //end of class
