class a extends Thread{
public void run()
{
	for(int i=0;i<10;i++)
	{
		System.out.println(Thread.currentThread().getId()+"value"+i);
	}
}	
	
}

class javathread{
	public static void main(String arg[])
	{
		
		a obj=new a();
		obj.start();
		a obj1=new a();
		obj1.start();
	}
	
}