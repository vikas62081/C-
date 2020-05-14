import java.util.*;

class edge{
	Scanner s=new Scanner(System.in);
 public int lenght,bridth;
	void input(){
		System.out.println("enter the lenght and bridth");
		lenght=s.nextInt();
		bridth=s.nextInt();
	}
}
class rectangle extends edge{
	int rec;
	void area(){
		input();
		 rec=lenght*bridth;
		System.out.println("area of rectangle is="+rec);
	}
}
class triangle extends edge{
	void area1()
	{
		input();
	double re=((0.5*lenght)*bridth);
		System.out.println("area of triangle is="+re);
	}
}

class hierarchicalinheritance{
	public static void main(String args[]){
		rectangle obj=new rectangle();
		obj.area();
     triangle obj1=new triangle();
		obj1.area1();
		
	}
}