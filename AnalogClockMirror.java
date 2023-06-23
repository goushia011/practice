//Program to find the mirror time of a given time
package javaApp;

import java.util.Scanner;

public class AnalogClockMirror {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String time, mirrorTime;
		System.out.print("Enter Time (HH:MM) : ");
		time = scanner.nextLine();
		mirrorTime = getMirrorTime(time);
		System.out.println("Mirror time : " + mirrorTime);
		scanner.close();
	}
	public static String getMirrorTime(String time) {
		String mirrorTime = "Invalid Time";
		String hourString, minuteString;
		String[] timeParts;
		int hour, minute, mirrorHour, mirrorMinute;
		timeParts = time.split(":");
		hourString = timeParts[0].trim();
		minuteString = timeParts[1].trim();
		try {
			hour = Integer.parseInt(hourString);
			minute = Integer.parseInt(minuteString);
			
			hour += minute / 60;
			minute %= 60;
			hour %= 12;
			if(hour <= 0)
				hour += 12;
			
			System.out.println("Given Time : " + hour + " : " + minute);
			
			mirrorHour = 11 - hour;
			mirrorMinute = 60 - minute;
			
			mirrorHour += mirrorMinute / 60;
			mirrorMinute %= 60;
			mirrorHour %= 12;
			if(mirrorHour <= 0)
				mirrorHour += 12;
			
			mirrorTime = mirrorHour + " : " + mirrorMinute;
		} catch(Exception ex) {
			return mirrorTime;
		}
		return mirrorTime;
	}
}
