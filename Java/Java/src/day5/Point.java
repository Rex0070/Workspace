package day5;

public class Point {
	private void set(int x,int y) {
		this.x=x;
		this.y=y;
	}
	public void showPoint() {
		System.out.println("("+x+","+y+")");
	}

}

class ColorPoint extends Point{
	private String color;
	public void setColor(String color)
	{
		System.out.print(color);
		showPoint();
	}
}

