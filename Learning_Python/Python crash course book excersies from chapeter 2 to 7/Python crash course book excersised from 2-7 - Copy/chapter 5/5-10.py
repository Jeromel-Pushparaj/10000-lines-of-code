current_users = ['jaden', 'will smith', 'jefferson', 'jothi', 'jebaraj']

new_users = ['jaden', 'will smith', 'jeswin', 'viswha','abi']

for new_user in new_users:
	if new_user in current_users:
		print ("\nYou will need to enter a new user name.")
	else:
		print ("\nUser name is available")
