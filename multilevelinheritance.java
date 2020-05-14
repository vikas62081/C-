import java.util.*;
class base{
	int number;
	base(){
	System.out.println("enter a number");
	Scanner s=new Scanner(System.in);
	number=s.nextInt();
	
	}
}
class derived1 extends base{
	int news;
	derived1(){
		news=10*number;
	}
}
class derived2 extends derived1{
	derived2(){
	 
		System.out.println("RESULT (10*number)== "+news);
	}
}


class multilevelinheritance{
	public static void main(String arg[]){
		derived2 obj=new derived2();
	}
}