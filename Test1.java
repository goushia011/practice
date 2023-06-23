package javaApp;

public class Test1 {
	static {
		System.out.println("Test1 class static block");
	}

	public static void main(String[] args) {
		Super d = new Super();
		d.a = 10;
		System.out.println(d.a);
	}

}
