usernames = []

if usernames:
	for username in usernames:
		if username == 'admin':
			print (f"\nHello {username.title()}, would you like to see a atatus repout?")
		else:
			print (f"\nHello {username.title()}, Thank you for logging in again.")
else:
	print ("We need to find users")

# 'jaden', 'will smith', 'admin', 'jothi', 'jebaraj'