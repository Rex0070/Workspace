package day1;

import java.util.Scanner;

public class pr3 {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		String ID="rex9745";
		String id;
		String PWD="qwerty1124";
		String pwd; 
		
		while(true)
		{
			System.out.print("ID : \n");
			id=scanner.nextLine();
			if(ID.equals(id)== true )
			{
				System.out.print("PW : \n");
				pwd=scanner.nextLine();
				if(PWD.equals(pwd)==true)
				{
					System.out.print("로그인 성공\n");
					break;
				}
				else 
				{
					System.out.print("로그인 실패\n");
					continue;
				}
			}
			else 
			{
				System.out.print("로그인 실패\n");
				continue;
			}
		}
	}

}
