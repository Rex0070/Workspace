package day3;

public class CircleArray {
	public static void main(String[] args)
	{
		Circle3 [] c;
		c=new Circle3[5];
		
		for(int i=0;i<c.lenght;i++)
			c[i]=new Circle3(i);
		for(int i=0;i<c.lenght;i++)
			System.out.print((int)(c[i].getArea())+ " ");
	}