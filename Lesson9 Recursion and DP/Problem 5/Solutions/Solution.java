import java.util.Scanner;
public class Solution{
     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        int dp[] = new int[c + 1];
        dp[0] = 1;
        for(int i = 0; i <= c; i++){
            if(dp[i] == 1){
                if(i + a <= c)
                    dp[i + a] = 1;
                if(i + b <= c)
                    dp[i + b] = 1;
            }
        }
        for(int i = c; i >= 0; i--){
            if(dp[i] == 1){
                System.out.println(i);
                break;
            }
        }
        sc.close();
     }
}
