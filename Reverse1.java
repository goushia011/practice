//Program to reverse the entire sentence
package javaApp;

import java.util.Scanner;

public class Reverse1 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter a sentence : ");
		char[] arr = scanner.nextLine().toCharArray();
		reverse(arr);
		System.out.println("Total Reversal");
		System.out.println(String.valueOf(arr));
		scanner.close();
	}
	public static void reverse(char[] arr) {
		char temp;
		for (int i = 0; i < (arr.length) / 2; ++i) {
			temp = arr[i];
			arr[i] = arr[arr.length -1 -i];
			arr[arr.length -1 -i] = temp;
		}
	}	
}
