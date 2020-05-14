 class A{
	int lenght;
	int width;
	int height;
     A(int l,int w,int h){
	 lenght=l;
	 width=w;
	 height=h;
	}
	public int result(){
		return(lenght*width*height);
	}	
}


class constructor{
	public static void main(String  arg[])
	{
		A obj=new A(10,20,30);
		System.out.println(obj.result());
		
	}
	
}