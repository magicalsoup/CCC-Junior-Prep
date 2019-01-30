import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = n; i < Integer.MAX_VALUE; i++)
            if(prime(i)){
                System.out.println(i);
                return;
            }
        sc.close();
    }
    public static boolean prime(int n){
        if( n < 2 )
            return false;
        if(n == 2)
            return true;
        for(int i = 2; i * i <= n; i++)
            if( n % i == 0)
                return false;
                
        return true;
    }
}
