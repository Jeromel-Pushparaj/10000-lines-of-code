my_foods = ['pizza', 'falafel', 'carrot cake']

friends_foods = my_foods[:]

my_foods.append('vegies')
friends_foods.append('milk shake')

print ("My favorite food are:")
for my_food in my_foods:
	print (my_food)

print ("\nMy friend's favorite food are:")
for friends_food in friends_foods:
	print (friends_food)