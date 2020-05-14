import java.io.File;
import java.io.PrintWriter;
class fileoperation{
	public static void main(String arg[])
	{
		try{
			File file=new File("filename.txt");
if(!file.exists())
{
	file.createNewFile();
}	
PrintWriter pw=new PrintWriter(file);
pw.println("this is content of file");
pw.println("vikas kumar vihwakaarma");
System.out.println("Done!!");	
pw.close();
	}
	catch(Exception e)
	{
		System.out.println(e);
	}
}
}