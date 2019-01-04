public class BubbleSort {
	public static void main(String[]args) {
		int array[] = {1, 39, 2034, 432, 43, 30, 2};
		boolean isSorted = false;
		while(!isSorted) {
			isSorted = true;
			for(int i = 0; i < array.length - 1; i++) {
				if(array[i] > array[i + 1]) {
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					isSorted = false;
				}
			}
		}
		for(int i = 0; i < array.length; i++) {
			System.out.print(array[i] + " ");
		}
	}
}
