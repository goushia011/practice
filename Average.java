//Program to find the average of numbers in a given range and round it off to an integer
package javaApp;

import java.util.Scanner;

public class Average {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter the lower bound of the range : ");
		int lowerBound = scanner.nextInt();
		System.out.print("Enter the upper bound of the range: ");
		int upperBound = scanner.nextInt();
		int numberOfNumbers = 0, sum = 0;
		for(int i = lowerBound; i <= upperBound; ++i) {
			sum = sum + i;
			++numberOfNumbers;
		}
		System.out.println("Sum = " + sum);
		System.out.println("Number of numbers = " + numberOfNumbers);
		float average = (float)sum/numberOfNumbers;
		System.out.println("Average = " + average);
		int roundedAverage = round(average);
		System.out.println("Rounded Average = " + roundedAverage);
		scanner.close();
	}
	
	public static int round(float number) {
		int beforeDecimal = (int)number;
		float afterDecimal = number - beforeDecimal;
		if(afterDecimal >= 0.5f) {
			++beforeDecimal;
		}
		return beforeDecimal;
	}

}
