pizzas = ['chicken pizza','hot and spicy pizza','vegitable pizza']

friends_pizzas = pizzas[:]

pizzas.append('mexican pizza')
friends_pizzas.append('shawarma pizza')

print ("My favorite pizzas are:")
for pizza in pizzas:
	print (pizza)


print ("My friends favorite pizzas are:")
for f_pizzas in friends_pizzas:
	print (f_pizzas)



