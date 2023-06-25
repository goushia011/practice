package javaApp;

import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter an number : ");
		int n = scanner.nextInt();
		int fact = 1;
		for(; n > 0;  --n) {
			fact *= n;
		}
		System.out.println(fact);
		scanner.close();
	}
}
