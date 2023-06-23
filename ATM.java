//Program to assign notes to pay a given amount where there must be minimum 5 hundred Rupee notes
//i.e to pay Rs. 500 5 one hundred Rupee notes
//and to pay Rs. 1500 2 five hundred Rupee notes and 5 one hundred Rupee notes
package javaApp;
import java.util.Scanner;
public class ATM {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter withdrawal amount : ");
		int amount = scanner.nextInt();
		divide(amount);
		scanner.close();
	}
	public static void divide(int amount) {
		if(amount % 100 != 0) {
			System.out.println("Amount must a multiple of 100.");
			return;
		}
		int offset = 0;
		if (amount >= 500) {
			offset = 500;
			amount -= 500;
		}
		int twoThousand = amount / 2000;
		amount %= 2000;
		int fiveHundred = amount / 500;
		amount %= 500;
		int twoHundred = amount / 200;
		amount %= 200;
		int hundred = amount / 100;
		hundred += offset / 100;
		if (twoThousand != 0) {
			System.out.println("Two Thousands Rupee notes : " + twoThousand);
		}
		if (fiveHundred != 0) {
			System.out.println("Five Hundred Rupee notes : " + fiveHundred);
		}
		if (twoHundred != 0) {
			System.out.println("Two Hundred rupee notes : " + twoHundred);
		}
		if (hundred != 0) {
			System.out.println("One Hundred Rupee notes : " + hundred);
		}
	}
}
