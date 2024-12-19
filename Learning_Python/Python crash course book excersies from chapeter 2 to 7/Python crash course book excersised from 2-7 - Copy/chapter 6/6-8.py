buush = {
	'owner':'anton ben',
	'animal':'cat'
	}

blacky = {
	'owner':'jeromel',
	'animal':'dog'
	}

brouwny = {
	'owner':'thomus',
	'animal':'dog'
	}

pets = [buush, blacky, brouwny]

for pet in pets:
	print ("\nHe like his pets so much")
	for name,kind in pet.items():
		print (f"{name.title()}:{kind.title()}")
	
