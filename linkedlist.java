import java.util.*;
class linkedlist{
	public static void main(String args[])
	{
		 System.out.println("=================WELCOME================");
		 System.out.println();
		 System.out.println();
		Scanner s=new Scanner(System.in);
		String name;
		LinkedList<String> obj=new LinkedList<String>();
		System.out.println("size is="+obj.size());
System.out.println("enter the number of name which u want to endroll");
int number=s.nextInt();		
		for(int i=0;i<number;++i)
		{
			System.out.println("enter name "+(i));
		 name =s.nextLine();
		 obj.add(name);
		}
		 System.out.println("-----------------------------OUTPUT-----------------------------------");
		for(String x: obj)
		{
			System.out.println(x);
			
		}System.out.println("size is="+obj.size());
	}
}