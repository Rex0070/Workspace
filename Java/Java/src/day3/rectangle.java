package day3;

import java.util.Scanner;

public class rectangle {
	int height;
	int width;
	
	public int getArea()
	{
		return width*height;
	}
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		int area;
		
		rectangle rec;
		rec=new rectangle();
		System.out.println("≥Ù¿Ã : ");
		rec.height=scanner.nextInt();
		System.out.println("πÿ∫Ø : ");
		rec.width=scanner.nextInt();
		area=rec.getArea();
		System.out.println("≥–¿Ã : "+area);
		
	}

}
