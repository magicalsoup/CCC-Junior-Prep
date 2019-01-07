import java.util.Scanner;
public class Solution {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(); //number of test cases
		for (int i = 0; i < n; i++) { 
			int l = sc.nextInt, train = new int[l], swaps = 0; //l is the length of the array
			for (int j = 0; j < l; j++) {
				train[j] = sc.nextInt();
			}
			boolean isSorted = false; //boolean to check if the array is sorted
      			while(!isSorted){ //while the array is not sorted
       				isSorted = true;
				for (int j = 0; j < l - 1; j++) {
					if (train[j] > train[j + 1]) {
				    		int temp = train[j]; //bubble sort
						train[j] = train[j + 1];
						train[j + 1] = temp;
         					isSorted = false;
						swaps = swaps + 1; //every time we make a swap, we add 1 to the counter
					}
				}
			}
			System.out.println("Optimal train swapping takes " + swaps + " swap(s)."); //print the counter
		}
	}
}
