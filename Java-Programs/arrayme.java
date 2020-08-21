import java.io.*;
import java.util.*;
class arrayclass{
	int []arr = new int[10];
	void get_values() throws IOException{
		InputStreamReader ir = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ir);
		System.out.println("Enter the no.of values to enter");
		int n = Integer.parseInt(br.readLine());
		for(int i=0;i<n;i++){
			arr[i] = Integer.parseInt(br.readLine());
		}
	}
	void put_values(){
		System.out.println("Printing values-");
		for(int i: arr){
			System.out.println(i);
		}
	}
	int maxvalues(){
		int max = arr[0];
		for(int i=0;i<arr.length;i++){
			if(max < arr[i])
				max = arr[i];
		}
		return max;
	}
	int minvalues(){
		int min = arr[0];
		for(int i=0;i<arr.length;i++){
			if(min > arr[i])
				min = arr[i];
		}
	return min;
	}
}
class arrayme{
	public static void main(String []Args) throws IOException{
		arrayclass arr1 = new arrayclass();
		arr1.get_values();
		arrayclass arr2 = new arrayclass();
		arr2.get_values();
		if(arr1.maxvalues() > arr2.maxvalues())
			System.out.println("Max ="+arr1.maxvalues());
		else
			System.out.println("Max ="+arr2.maxvalues());
	}
}