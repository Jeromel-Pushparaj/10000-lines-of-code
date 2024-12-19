rivers = {
	'niel':'egypt',
	'thamrabarani':'tamil nadu',
	'kaveri':'karnataka'
	}

for river, country in rivers.items():
	print (f"The {river.title()} runs through {country.title()}.")



print ("\nThe three rivers are:")

for river in rivers.keys():
	print (f"\n{river.title()}")

print ("The above three rivers are runs through:")

for country in rivers.values():

	print (f"\n{country.title()}")

