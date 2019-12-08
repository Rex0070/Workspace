package day2;

public class pr2 {
	public static void main(String[] args)
	{
		String str = "elephant";
		String str2 = "990701-456789";
		String[] test=str2.split("-");
		String str3="		test	";
		
		System.out.println(str.charAt(2));
		System.out.println(str.codePointAt(0));
		System.out.println(str.compareTo("apple"));
		System.out.println(str.compareTo("elephant"));
		System.out.println(str.compareTo("five"));
		System.out.println(str.concat(" is big."));
		System.out.println(str.contains("ant"));
		System.out.println(str.length());
		System.out.println(str.replace("e", "o"));
		System.out.println(test[0]);
		System.out.println(str.substring(3));
		System.out.println(str.toUpperCase());
		System.out.println(str3.trim());
	}

}
