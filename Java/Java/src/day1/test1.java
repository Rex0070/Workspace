package day1;

import java.util.Scanner;

public class test1 {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("원화를 입력하세요(단위 원)>>");
		int n=scanner.nextInt();
		System.out.print(n+"원은 $"+n/1100.0+"입니다\n");
	}
}
