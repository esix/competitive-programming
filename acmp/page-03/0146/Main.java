import java.math.*;
import java.io.*;
import java.util.*;

public class Main {

  static BigInteger sqrt_2(BigInteger n) {
    BigInteger x = BigInteger.ONE;
    boolean decreased = false;
    while(true) {
    	BigInteger nx = x.add(n.divide(x)).shiftRight(1);
    	if (x.equals(nx) || nx.compareTo(x) == 1 && decreased)  break;
    	decreased = nx.compareTo(x) == -1;
    	x = nx;
    }
    return x;
  }


  public static void main(String args[]){
    String snum = new Scanner(System.in).next();
    System.out.println(sqrt_2(new BigInteger(snum)).toString());
  }
}
