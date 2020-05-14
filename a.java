import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Date;
class a{
	public static void main(String arg[])
	{
		try{
			Date date=new Date();
			System.out.println(date.toString());
		}
			 
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
	
}