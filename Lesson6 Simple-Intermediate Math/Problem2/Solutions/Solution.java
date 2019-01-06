import java.util.*;
public class Solution{
      public static void main(String[]args) {
          Scanner sc = new Scanner(System.in);
    	  int n = sc.nextInt();
    	  int x = sc.nextInt(); 
    	  int a[] = new int[n];
    	  int cnt = 0;
    	  for(int i = 0; i < n; i++) a[i] = sc.nextInt();
    	  for(int i = 0; i < n; i++) {
    		  for(int j = i + 1; j < n; j++) {
    			  for(int k = j + 1; k < n; k++) {
    				  int b[] = new int[3];
    				  b[0] = a[i]; b[1] = a[j]; b[2] = a[k];
    				  Arrays.sort(b);
    				  if(b[1] == x) cnt++;
    			  }
    		  }
    	  }
    	  System.out.println(cnt); sc.close();
      }
}
