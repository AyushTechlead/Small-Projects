class CommandLineArgs{       //Sample class for hello world..
    public static void main(String args[]){
    	int a;
    	int b;
    	int c;
    	a = Integer.parseInt(args[0]);
    	b = Integer.parseInt(args[1]);
    	c = Integer.parseInt(args[2]);
    	if(a > b){
    		if(a > c){
    			System.out.println("greater"+a);
    		}
  			else{
  				System.out.println("greater"+c);	
  			}
    	}
    	else{
    		if(b > c)
    			System.out.println("greater"+b);
    		else
    			System.out.println("greater"+c);
    	}
    }
}