package day5;

public class Point2 {
	private int x,y;

	public Point2() {
		this.x=x;
		this.y=y;
	}
	public void showPoint() {
		System.out.println("("+x+","+y+")");
	}
}
class ColorPoint extends Point
{
	private String color;
	public void setColor(String color) {
		this.color=color;
	}
}