import java.util.Scanner;
public class Solution {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), array[] = new int[n]; //n is the length of the array
		for(int i = 0; i < n; i++) {
			array[i] = sc.nextInt();
		}
		
		for(int j = 0; j < array.length; j++) {
			System.out.print(array[j] + " ");
		}
		System.out.println(); //print on a new line
		
		boolean isSorted = false; //set a boolean to check if the array is sorted
		while(!isSorted) { //while the array is not sorted,
			isSorted = true;
			for(int i = 0; i < n - 1; i++) {
				if(array[i] > array[i + 1]) { //bubble sort
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					isSorted = false;
					for(int j = 0; j < n; j++) {
						System.out.print(array[j] + " ");
					}
					System.out.println(); //print on a new line
				}
			}
		}
		sc.close();
	}
}
