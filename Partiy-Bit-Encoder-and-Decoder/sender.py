def count_no(n):
	count = 0
	while n:
		if n%10 == 0:
			count = count + 1
		n/=10	
	return count 	
n = int(input("Enter the number"))
get_bin = lambda x, n: format(x, 'b').zfill(n)
n = int(get_bin(n,6))
p_methord = int(input("Enter the parity methord"))		
cpy = p_methord
if p_methord == 0:
	if count_no(n)%2 != 0:
		p_methord = 1
else:
	if count_no(n)%2 == 0:
		p_methord = 1			
temp = ""
temp += str(n)
temp += str(p_methord)
f = open("message.txt", "w")
f.write(temp)
f.write(" ")
f.write(str(cpy))
f.close()