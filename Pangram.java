package javaApp;
import java.util.Scanner;
public class Pangram {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter a sentence : ");
		String str = scanner.nextLine();
		if(isPangram(str)) {
			System.out.println("The sentence is a pangram.");
		} else {
			System.out.println("The sentence is not pangram.");
		}
		scanner.close();
	}
	public static boolean isPangram(String str) {
		str = str.toLowerCase();
		for(int i = 'a'; i <= 'z'; ++i) {
			if(str.indexOf((char)i) == -1) {
				return false;
			}
		}
		return true;
	}

}
