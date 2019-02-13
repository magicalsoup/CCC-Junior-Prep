import java.util.*;
    public class TestScores{
      public static void main(String[] args){
          Scanner sc = new Scanner(System.in);
    	  int n = sc.nextInt(); 
    	  long m = sc.nextLong();
    	  long k = sc.nextLong(); 
    	  long cnt = 0; 
    	  Test t[] = new Test[n];
    	  for(int i = 0; i < n; i++) { 
    	      t[i] = new Test(sc.nextLong(), sc.nextLong()); 
    	      cnt += t[i].score;
    	  }
    	  if(cnt >= n * k) { 
    	      System.out.println(0); 
    	      return;
    	  } 
    	  long ans = 0; 
    	  Arrays.sort(t);
    	  for(int i = 0; i < n; i++) {
    		  if(cnt + (m - t[i].score) <= n * k) {
    			  ans += (m - t[i].score) * t[i].hour;
    			  cnt += (m - t[i].score);
    		  }
    		  else { 
    		      ans += t[i].hour * (n * k - cnt) ; 
    		      break;
    		  }
    	  }
    	  System.out.println(ans); 
    	  sc.close();
      }
      static class Test implements Comparable<Test>{
    	  long score, hour;
    	  public Test(long score, long hour) {
    		  this.score = score; this.hour = hour;
    	  }
    	  @Override
    	  public int compareTo(Test t) {
    		  if(t.hour == hour) return Long.compare(t.score, score);
    		  return Long.compare(hour, t.hour);
    	  }
      }
  }
