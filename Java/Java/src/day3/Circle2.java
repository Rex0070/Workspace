package day3;

public Circle2()
{ 
radius = 1; name = " ";
}
public Circle2(int r, String n) 
{
radius = r; name = n;
}
public double getArea() 
{
return 3.14*radius*radius;
}
public static void main(String[] args)
{

Circle2 pizza = new Circle2(10, "�ڹ�����");
	double area = pizza.getArea();
	System.out.println(pizza.name+"�� ������ "+area);
	Circle2 donut = new Circle2();
	donut.radius = 2;
	donut.name = "�ڹٵ���";
	area = donut.getArea();
	System.out.println(donut.name+ "�� ������ "+area);
}
}
