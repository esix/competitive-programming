import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        String formatted = String.format("%,.2f", payment);
        
        System.out.println("US: $" + formatted);
        System.out.println("India: Rs." + formatted);
        
        System.out.print("China: ");
        System.out.write(0xEF);
        System.out.write(0xBF);
        System.out.write(0xA5);
        System.out.println(formatted);
        
        String franceFormatted = formatted.replace(',', (char) 0x00A0).replace('.', ',');
        System.out.print("France: " + franceFormatted + " ");
        System.out.write(0xE2);
        System.out.write(0x82);
        System.out.write(0xAC);
        System.out.println();
    }
}