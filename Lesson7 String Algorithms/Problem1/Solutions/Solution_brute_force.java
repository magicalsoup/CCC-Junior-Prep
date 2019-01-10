import java.util.Scanner;
public class Solution_brute_force{
     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        boolean found = false;
        for(int i = 0; i < s.length() - 2; i++){
            if(s.charAt(i) == 'C' && s.charAt(i + 1) == 'C' && s.charAt(i + 2) == 'C'){
                found = true;
                break;
            }
        }
        if(found){
            System.out.println("NO");
        }
        else {
            System.out.println("YES");
        }
        sc.close();
     }
}
