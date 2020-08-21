import java.io.*;
class process{
	public static int var1;
	public static int var2;
	public static int ans;
	public static void get_input() throws IOException{
		InputStreamReader ir = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ir);
		var1 = Integer.parseInt(br.readLine());
		var2 = Integer.parseInt(br.readLine());	
	}
	public static int calc_sum(){
		ans = var1 + var2;
		return ans;
	}
	
	public static void put_output(){
		ans = calc_sum();
		System.out.println("The answer is "+ans);
		}	
}
class inputInJava{
	public static void main(String[] args) throws IOException{
		process ob1 = new process();
		ob1.get_input();
		ob1.calc_sum();
		ob1.put_output();
	}
}