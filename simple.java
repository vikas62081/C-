class simple{
public static void main(String arg[])
{ 

A obj=new A();
obj.roll=1;
obj.name="vikas kumar";

System.out.println("Roll number is  "+obj.roll+" and name is "+obj.name);
A obj1=new A();
obj1.roll=2;
obj1.name="vishal kumar";

System.out.println("Roll number is  "+obj1.roll+" and name is "+obj1.name);
}
}
class A{
	//A(){
		int roll;
		String name;
		
		//System.out.println("This is constructor of class A");
	//}
	
}