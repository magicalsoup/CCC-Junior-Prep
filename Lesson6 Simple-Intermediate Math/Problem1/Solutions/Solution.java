import java.util.Scanner
public class Solution{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(); 
        int freq[] = new int[11];
        int max = 100;
        for(int i = 0; i < a; i++){
            int x = sc.nextInt();
            freq[x]++;
            max = Math.max(max, freq[x]);
        }
        for(int i = 0; i < freq.length(); i++){
            if(freq[i] == max){
                System.out.println(i);
                break;
            }
        }
        sc.close()
    }
}
