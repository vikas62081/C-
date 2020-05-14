import java.io.BufferedReader;
import java.io.FileReader;
class fileread{
	public static void main(String arg[])
	{
		try{
			BufferedReader br=new BufferedReader(new FileReader("filename.txt"));
			String line;
			while((line=br.readLine())!=null)
			{
				System.out.println(line);
			}
		}
		catch(Exception e){
			System.out.println(e);
		}
		
	}
	
}