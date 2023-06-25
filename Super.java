package javaApp;

public class Super {
	static int b;
	int a;
	static {
		System.out.println("Super class static block");
		System.out.println(b);
	}
	{
		System.out.println("Super class non-static block");
		System.out.println(a);
	}
	Super() {
		System.out.println("Super class default cons.");
		System.out.println(a);
		System.out.println(b);
	}
	public static void main(String[] ag) {
		System.out.println("hello");
	}
}
