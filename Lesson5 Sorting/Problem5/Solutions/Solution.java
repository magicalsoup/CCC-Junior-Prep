import java.util.Scanner;
public class Solution{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-- > 0){
            System.out.println(sc.nextLong()); //print out all the numbers as you are reading them in
        }
        sc.close();
    }
}
