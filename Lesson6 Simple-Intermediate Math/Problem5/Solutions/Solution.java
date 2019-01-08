import java.util.Scanner;
public class Solution	 {
    public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      double g = scan.nextDouble();
      double v = scan.nextDouble();
      double t = scan.nextDouble();
      double t2 = (v*v)+(2*v*g)*t;
      double t3 = Math.sqrt(t2);
      double t1 = (-v+t3)/g;
      double v2 = t1*g;
      double h =(t1*t1)*g/2;
      double h2 = Math.round(h*100.0)/100.0;
      double v3 = Math.round(v2*100.0)/100.0;
      System.out.println(h2);
      System.out.println(v3);
    }
}
