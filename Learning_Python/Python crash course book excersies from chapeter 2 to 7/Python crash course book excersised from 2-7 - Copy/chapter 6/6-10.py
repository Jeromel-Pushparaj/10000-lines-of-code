favorite_number = {
	'jeswin': {
		'no.1':4,
		'no.2':3
		},
	'jefferson': {
		'no.1':6,                                       
		'no.2':12
		},
	'jeromel': {
		'no.1':5,
		'no.2':25
		},
	'jothi': {
		'no.1':24,
		'no.2':12
		},
	'jebaraj': {
		'no.1':23,
		'no.2':11
		}
	}



for name, num in favorite_number.items():
	print (f"{name.title()} favorite number is:")
	for roll,no in num.items():
		for nums in roll:
			fav_no = num[roll]
		print (f'\t\t\t\t{fav_no}')

# print (f"{message}\n\t\t\t{fav_no}")