glossary = {
	'tuple':'list of an item cannot change',
	'variable':'it store a value',
	'string':'it is an value that store inside the ""',
	'boolean_expersion':'conditional test is also called boolean expersion',
	'list':'it is a simple data type'
	}

glossary['sorted()'] = 'used order your list or dictionary'
glossary['key()'] = "it's help you to print only key from your dictionary"

for word, meaning in glossary.items():
	print (f"\n{word.title()}:{meaning.title()}")