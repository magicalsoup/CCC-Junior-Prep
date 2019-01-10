import java.util.Scanner;
public class Solution_built_in{
     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        if(s.contains("CCC")){
            System.out.println("NO");
        }
        else {
            System.out.println("YES");
        }
        sc.close();
     }
}
