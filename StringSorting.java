//Program to sort given string alphabetical order
package javaApp;

public class StringSorting {

	public static void main(String[] args) {
		String[] words = {"Sdjksjd", "Skjdasjj", "Bjsdakja", "Xhudhua", "Eeeeggg", "Chrome"};
		char[][] wordsArray = new char[words.length][];
		for(int i = 0; i < words.length; ++i) {
			wordsArray[i] = words[i].toCharArray();
		}

		char[] temp;
		int smallPos;
		for(int i = 0; i < wordsArray.length; ++i) {
			smallPos = i;
			for(int j = i + 1; j < wordsArray.length; ++j) {
				for(int k = 0; k < wordsArray[smallPos].length; ++k) {
					if(wordsArray[smallPos][k] == wordsArray[j][k]) {
						continue;
					}
					else if(wordsArray[smallPos][k] > wordsArray[j][k]) {
						smallPos = j;
						break;
					} else {
						break;
					}
				}
			}
			temp = wordsArray[smallPos];
			wordsArray[smallPos] = wordsArray[i];
			wordsArray[i] = temp;
		}
		String result = "";
		for(int i = 0; i < wordsArray.length; ++i) {
			for(int j = 0; j < wordsArray[i].length; ++j) {
				result += wordsArray[i][j];
			}
			result += "_";
		}
		System.out.println(result);
	}
}