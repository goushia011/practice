/*Program to replace spaces with hyphens in a string and print
the result in near if not perfect square column-wise*/
package javaApp;

import java.io.IOException;
import java.util.Scanner;

public class Replace {

	public static void main(String[] args) throws IOException{
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter a String : ");
		char[] line = scanner.nextLine().toCharArray();
		
		for (int i = 0; i < line.length; ++i) {
			if(line[i] == ' ') {
				line[i] = '_';
			}
		}
		printCharArray(line);
		
		int row = getNearestPerfectSquare(line.length);
		int pos = 0;
		char[][] arrMat = new char[10][10];
		for(int i = 0; i < row; ++i)
		{
			for(int j = 0; j < row; ++j) {
				if(pos < line.length)
					arrMat[j][i] = line[pos++];
			}
		}
		for(int i = 0; i < row; ++i) {
			for(int j = 0; j < row; ++j) {
				System.out.print(arrMat[i][j]);
			}
			System.out.println();
		}
		scanner.close();
	}
	public static void printCharArray(char[] arr) {
		for(int i = 0; i < arr.length; ++i) {
			System.out.print(arr[i]);
		}
		System.out.println();
	}
	public static int getNearestPerfectSquare(int length) {
		for(int i = 0; ;++i) {
			if(i*i >= length)
				return i;
		}
	}
}
