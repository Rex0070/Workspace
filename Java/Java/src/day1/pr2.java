package day1;

public class pr2 {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		int score=scanner.nextInt();
		if(score>=90)
		{
			System.out.println("A\n");
		}
		else if(score>=80)
		{
			System.out.println("B\n");
		}
		else if(score>=70)
		{
			System.out.println("C\n");
		}
		else
		{
			System.out.println("���հ�\n");
		}
	}

}
