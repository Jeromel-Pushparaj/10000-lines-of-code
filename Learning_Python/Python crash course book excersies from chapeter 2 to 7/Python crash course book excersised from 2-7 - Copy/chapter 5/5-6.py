age = 100

if age < 2:
	stage = 'baby'
	article = 'a'
elif age == 2 or age < 4:
	stage = 'toddler'
	article = 'a'
elif age == 4 or age < 13:
	stage = 'kid'
	article = 'a'
elif age == 13 or age < 20:
	stage = 'teenager'
	article = 'a'
elif age == 20 or age < 65:
	stage = 'adult'
	article = 'an'
else:
	stage = 'elder'
	article = 'an'

print (f"Person is {article} {stage.title()}.")