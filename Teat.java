package javaApp;

import java.util.Scanner;

public class Teat {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter number : ");
		int size = scanner.nextInt();
		char ch = 'A';
		for(int i = 0; i < size / 2; ++i) {
			System.out.print((char)(ch + i) + " ");
			System.out.print((char)(ch + 26 - i - 1) + " ");
		}
		scanner.close();
	}

}
