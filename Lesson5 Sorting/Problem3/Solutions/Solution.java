import java.util.Scanner;
public class Solution {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int swaps = 0;
			int l = sc.nextInt();
			int[] train = new int[l];
			for (int j = 0; j < l; j++) {
				train[j] = sc.nextInt();
			}
			boolean isSorted = false;
      while(!isSorted){
        isSorted = true;
				for (int j = 0; j < l - 1; j++) {
					if (train[j] > train[j + 1]) {
				    int temp = train[j];
						train[j] = train[j + 1];
						train[j + 1] = temp;
            isSorted = false;
						swaps = swaps + 1;
					}
				}
			}
			System.out.println("Optimal train swapping takes " + swaps + " swap(s).");
		}
	}
}
