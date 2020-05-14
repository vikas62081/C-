import java.util.ArrayList;
class array{
	
	public static void main(String args[])
	{
		
		ArrayList<Integer> obj=new ArrayList<Integer>(5);
		System.out.println("size =="+obj.size());
		obj.add(2);
		obj.add(6);
		for(Integer x : obj)
		{
			System.out.println(x);
		}
		obj.set(1,100);
		System.out.println("size =="+obj.size());
		obj.remove(0);
		for(Integer x : obj)
		{
			System.out.println(x);
		}
		obj.clear();
		System.out.println("size =="+obj.size());
		
	}
}