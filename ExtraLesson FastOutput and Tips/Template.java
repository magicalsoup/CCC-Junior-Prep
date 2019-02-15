import java.io.*;
import java.util.*;
public class Template {
  static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  static PrintWriter pw = new PrintWriter(new OutputStreamWriter(System.out));
  static StringTokenizer st;
  public static void main(String[]args) throws IOException {
    
  }
  static String next() throws IOException {
      while(st == null || !st.hasNextToken)
          st = new StringTokenizer(br.readLine().trim());
      return st.nextToken();
  }
  static int readInt() throws IOException {
      return Integer.parseInt(next());
  }
  static long readLong() throws IOException {
      return Long.parseLong(next());
  }
  static Character readCharacter() throws IOException {
      return next().charAt(0);
  }
  static String readLine() throws IOException {
      return br.readLine().trim();
  }
}
