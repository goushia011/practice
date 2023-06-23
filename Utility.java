package javaApp;

public class Utility {
	public static void printArray(int[] array) {
		for (int element : array) {
			System.out.print(element + " ");
		}
		System.out.println();
	}
	
	public static void printArray(char[] array) {
		for(char element : array) {
			System.out.print(element + " ");
		}
		System.out.println();
	}

	public static void printArray(String[] array) {
		for(String element : array) {
			System.out.print(element + " ");
		}
		System.out.println();
	}

	public static void printArray(Object[] array) {
		for(Object element : array) {
			System.out.println(element);
		}
		System.out.println();
	}
	
	public static int factorialByRecusion(int num) {
		if(num == 0) {
			return 1;
		}
		else {
			return(num * factorialByRecusion(num - 1));
		}
	}
	
	public static int factorialByIteration(int num) {
		int fact = 1;
		for(; num > 0; --num) {
			fact *= num;
		}
		return fact;
	}
}
