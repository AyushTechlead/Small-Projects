import java.io.*;
class noofvovels{
	public static void main(String args[]){
	operations op1 = new operations();
	op1.get_input();
	op1.process();
	op1.put_results();
	}
}
class operations{
	public static String str;
	public static int vovels = 0;
	public static int len;
	public static int count = 0;
	public static void get_input() throws IOException{
		InputStreamReader ir = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ir);
		System.out.println("Enter the Name :");
		str = br.readLine(); 
	}
	public static void process(){
		len = str.length();
		char ch = str.charAt(i);
         if(ch == 'a'|| ch == 'e'|| ch == 'i' ||ch == 'o' ||ch == 'u'){
            count ++;
         }
	}
	public static void put_results(){
		System.out.println(vovels);
	}
}