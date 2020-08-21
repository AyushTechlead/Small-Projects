class sortarray{
	public static void main(String Args[]){
		int len = Args.length;
		int[] Array = new int[len];
		for(int i=0;i<len;i++){
			Array[i] = Integer.parseInt(Args[i]);
		}
		Arrays.sort(Array);
	for(int i=0;i<len;i++)
		System.out.print(Array[i]+" ");
	}
}