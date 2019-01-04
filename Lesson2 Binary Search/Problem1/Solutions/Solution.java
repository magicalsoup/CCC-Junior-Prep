import java.util.Scanner;
public class Solution {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		int key =  sc.nextInt();
		int left = 1, right = 1000000000;
		int guesses = 0;
		while(left <= right) {
			int mid = (left + right) / 2;
			if(mid == key) {
				break;
			}
			else if(mid > key) { 
				right = mid - 1;
			}
			else if(mid < key) {
				left = mid + 1;
			}
			guesses++;
		}
		guesses--;
	  int money = 1000000 - guesses * 1000;
	  System.out.println("Bob can get $"  + money);
	  sc.close();
	}
}
