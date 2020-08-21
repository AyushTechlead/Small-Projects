def count_no(n,e):
	count = 0	
	while n:
		if n%10 == 0:
			count = count + 1
		n = int(n / 10)	
	return count		
f = open("message.txt", "r")
str1 = str(f.read())
p_bit = str1[-2]
str1 = str1[:len(str1)-2]
n = count_no(int(str1),p_bit)
if int(n%2) == int(p_bit):
	print("No Error")
else:
	print("Error Detected !")	