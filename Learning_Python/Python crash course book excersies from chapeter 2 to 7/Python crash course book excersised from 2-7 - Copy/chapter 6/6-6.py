favorite_language = {
	'jeswin':'c',
	'jefferson':'java',
	'jeromel':'python',
	'jothi':'ruby',
	'jebaraj':'kotlin'
	}
take = ['jeswin','vishwa','jothi','abi']



for names in take:

	print (f"Hi {names.title()}") 
	if names not in favorite_language.keys():
		print ("You should take a poll request from jeromel")
	else:
		print ("Thank you for taking a poll")