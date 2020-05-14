 class B{
	 int a,n;
     final void input(int a){
		int number;
				number=10;
				number=12;
				System.out.println("your number is "+number);
			}
			void input(){
				
				System.out.println("this is method input");
			}
	}
	/*class C extends B{
		C(){
			System.out.println("this is class c");
		}
		
		
	}*/
	
class finalkeyword{
	public static void main(String  arg[])
		{
			B obj=new B();
			obj.input(6);
			obj.input();
		}
}