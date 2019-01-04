import java.util.Arrays;
public class BinarySearch {
	// indexes start at 0 / 0 - based
	public static void main(String[]args) {
		int array[] = {1, 396, 99, 84, 33, 75, 9073};
		Arrays.sort(array);
		int left = 0, right = array.length - 1;
		int key = 396;
		boolean found = false;
		while(left <= right) {
			int mid = (left + right) / 2;
			if(array[mid] == key) {
				System.out.println("key found at index " + mid); 
				found = true; 
				break;
			}
			else if(array[mid] > key) {
				right = mid - 1;
			}
			else if(array[mid] < key) {
				left = mid + 1;
			}
		}
		if(found == false) {
			System.out.println("Key not found in the array");
		}
	}
}
