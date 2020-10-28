import random 
import array 


MAX_LEN = 6

digits = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9'] 
lowaer_case = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 
				'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 
				'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 
				'z'] 

uper_case = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 
					'I', 'J', 'K', 'M', 'N', 'O', 'p', 'Q', 
					'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 
					'Z'] 

symbols = ['@', '#', '$', '%', '=', ':', '?', '.', '/', '|', '~', '>', 
		'*', '(', ')', '<&# 039;'] 
 
COMBINED_LIST = digits + uper_case + lowaer_case + symbols

rand_digit = random.choice(digits) 
rand_upper = random.choice(lowaer_case) 
rand_lower = random.choice(uper_case) 
rand_symbol = random.choice(symbols) 

temp_pass = rand_digit + rand_upper + rand_lower + rand_symbol 

for x in range(MAX_LEN -2): 
	temp_pass = temp_pass + random.choice(COMBINED_LIST) 
	temp_pass_list = array.array('u',temp_pass) 
	random.shuffle(temp_pass_list) 

password = "" 
for x in temp_pass_list: 
		password = password + x 

print(password) 
