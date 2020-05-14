import java.util.*;
class listiterator{
	public static void main(String arg[])
	{
		ArrayList<String> name=new ArrayList<String>();
		name.add("iman");
		name.add("maximum ");
		name.add("vishal");
		name.add("rani");
		
		ListIterator<String> itr=name.listIterator();
		while(itr.hasNext())
			System.out.println(itr.next());
		
	}
}