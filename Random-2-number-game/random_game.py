#the player which make 100 runs first win's
import random as rd 
import time 
import os
score1 = 0
score2 = 0
def score():
	rnd = rd.randint(0,10)
	print("You got ",rnd)
	return rnd 
while 1:
	x = input("Player 1 chance\n Enter any key")
	score1 += score()
	print("\n\n\nPlayer1 score is ",score1)
	time.sleep(2)
	os.system('clear')
	y = input("Player 2 chance\n Enter any key")
	score2 += score()
	print("\n\n\nPlayer1 score is ",score2)
	time.sleep(2)
	os.system('clear')
	if score1 >= 100:
		print("Player1 win")
		break
	elif score2 >= 100:
		print("Player2 win")	
		break		