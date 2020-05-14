abstract class A{
	int result;
	abstract void input();
	void calculation(){
		System.out.println("result is -="+ result);
	}
}
class B extends A{
void input(){
	int a=9;
	int b=8;
	result=a+b;
	calculation();
}
}

class abstractclass {
	public static void main(String agr[]){
		B obj=new B();
		obj.input();
	}
	
}