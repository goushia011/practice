//Program to print all the permutations
// package javaApp;
import java.util.Scanner;
public class Permutation {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter a word: ");
		char[] set = scanner.next().toCharArray();
		permutation(set);
		scanner.close();
	}
	public static void swapChar(char[] array, int sourcePos, int destinationPos) {
		char temp = array[sourcePos];
		array[sourcePos] =array[destinationPos];
		array[destinationPos] = temp;
		System.out.print(sourcePos + ":" + destinationPos + ":" + String.valueOf(array) + " ");
	}
	
	public static void permutation(char[] array) {
		permutation(array, 0);
	}
	public static void permutation(char[] array, int index) {
		if (index == array.length - 1) {
			System.out.print(String.valueOf(array) + "\n\n");
		}
		for(int i = index; i < array.length; ++i) {
			swapChar(array, index, i);
			// System.out.print(index + ":" + i + " " + String.valueOf(array) + " ");
			permutation(array, index + 1);
			// System.out.print(index + ":" + i + " " + String.valueOf(array) + " ");
			swapChar(array, index, i);
			// System.out.print(index + ":" + i + " " + String.valueOf(array) + "\n");
		}
	}
}
