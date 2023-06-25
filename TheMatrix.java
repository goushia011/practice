/*
 * input  : 1 & 2
 * output : 1_2_3_5_8
 * input  : 3 & 7
 * output : 3_7_10_17_27
 * 
 * input  : hello_there_have_a_nice_day
 * output : day_nice_a_have_there_hello
 * 
 * cube
 * input  : 2
 * output : 8
 * 
 * mirror clock
 * input  : 12:15
 * output : 11:45
 * 
 * cavity
 * input  : 1_3_2,7_9_8,4_6_5
 * 1 3 2
 * 7 9 8
 * 4 6 5
 * output : {1,1}
 * */
package javaApp;

import java.util.Scanner;

public class TheMatrix {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the Matrix : ");
		String matrixStr = scanner.next();
		int[][] matrix = getMatrix(matrixStr);
		for(int i = 0; i < matrix.length; ++i) {
			for(int j = 0; j < matrix[i].length; ++j) {
				System.out.print(matrix[i][j] + " ");
			}
			System.out.println();
		}
		String cavity = getCavity(matrix);
		System.out.println(cavity);
		scanner.close();
	}

	public static int[][] getMatrix(String str) {
		char[] strArr = str.toCharArray();
		int rows = 1, cols = 1;
		for(int i = 0; i < strArr.length; ++i) {
			if(strArr[i] == ',') {
				rows++;
			}
		}
		for(int i = 0; strArr[i] != ','; ++i) {
			if(strArr[i] == '_') {
				cols++;
			}
		}
		int[][] matrix = new int[rows][cols];
		String[] strRow = str.split(",");
		String[] strCol;
		for(int i = 0; i < rows; ++i) {
			strCol = strRow[i].split("_");
			for(int j = 0; j < cols; ++j) {
				matrix[i][j] = Integer.parseInt(strCol[j]);
			}
		}
		return matrix;
	}
	
	public static String getCavity(int[][] matrix) {
		String cavity = "";
		for(int i = 1; i < matrix.length - 1; ++i) {
			for(int j = 1; j < matrix[i].length - 1; ++j) {
				if(matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i][j+1] && matrix[i][j] > matrix[i][j-1]) {
					cavity = cavity + "{" + i + "," + j + "},";
				}
			}
		}
		
		return cavity.substring(0, cavity.length() - 1);
	}
}
