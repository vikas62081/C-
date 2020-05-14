 interface A
 {
	public void input();
	public void calculation();
	public void output();
}
class B implements A{
	int number1,number2,result;
	public void input(){
	    number1=6;
		  number2=8;
	}
	public void calculation(){
		input();
		  result=number1+number2;
	}
	public void output(){
		calculation();
	System.out.println("result is -=:"+result);
	}
}
class interfaces{
public static void main(String args[]){
	B obj=new B();
	obj.output();
}
	
}