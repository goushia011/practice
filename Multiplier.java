//Program to find the multiples of a given number in a given range
package javaApp;

import java.util.Scanner;

public class Multiplier {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter lower bound of the range : ");
		int lowerBound = scanner.nextInt();
		System.out.print("Enter upper bound of the range : ");
		int upperBound = scanner.nextInt();
		System.out.print("Enter the multiplier : ");
		int multiplier = scanner.nextInt();
		System.out.println("All the multiples of " + multiplier + " between " + lowerBound + " and "
			+ upperBound + " are follows");
		for(int i = lowerBound; i <= upperBound; ++i) {
			if(i % multiplier == 0) {
				System.out.println(i);
			}
		}
		scanner.close();
	}

}
