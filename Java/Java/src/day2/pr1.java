package day2;

public class pr1 {
	public static void main(String[] args)
	{
		String a = "Hello";
		String b = "Java";
		String c = "Hello";
		String d = new String("Hello");
		String e = new String("Java");
		String f = new String("Java");
		
		System.out.println(a==c);
		System.out.println(c==d);
		System.out.println(e==f);
	}
}
