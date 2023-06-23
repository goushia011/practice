//Program to reverse the position of the word in a sentence
package javaApp;

import java.util.Scanner;

public class Reverse3 {

	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter a sentence : ");
		char[] arr = scanner.nextLine().toCharArray();
		reverseWords(arr);
		System.out.println(String.valueOf(arr));
	}
	
	public static void reverse(char[] arr) {
		reverse(arr, 0, arr.length - 1);
	}
	public static void  reverseSpelling(char[] arr) {
		int startIndex = 0, endIndex = 0;
		for(int i = 0; i < arr.length; ++i) {
			if(arr[i] == ' ' || arr[i] == '\t') {
				reverse(arr, startIndex, endIndex);
				startIndex = endIndex = i + 1;
				continue;
			}
			endIndex = i;
		}
		reverse(arr, startIndex, endIndex);
	}
	public static void reverse(char[] arr, int startIndex, int endIndex) {
		char temp;
		for(int  i = 0, index = startIndex; i < (endIndex - startIndex + 1) / 2; ++i, ++index) {
			temp = arr[index];
			arr[index] = arr[endIndex - i];
			arr[endIndex - i] = temp;
		}
	}
	public static void reverseWords(char[] arr) {
		reverse(arr);
		reverseSpelling(arr);
	}
}
