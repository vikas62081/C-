class functionoverloading{
	
	public static int add(int a,int b)
	{
		return(a+b);
	}
	public static int add(int a,int b,int c)
	{
		return(a*b*c);
	}
	public static String add(String a,String b)
	{
		return(a+b);
	}
	public static void main(String arg[])
	{
		System.out.println(add(2,3));
		System.out.println(add(2,3,4));
		System.out.println(add("vishal and ","rani "));
	}
}