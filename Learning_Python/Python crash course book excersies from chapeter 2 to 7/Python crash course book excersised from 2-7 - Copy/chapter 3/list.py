#Changing element in list

car = ['lamborgani', 'rolls royals', 'Honda city', 'Tesla']
print (car)

car[2] = 'BMW'
print (car)

#Adding element to list

#1.Appending element to end of the list 

bike = []

bike.append('R15 v3')
bike.append('royal enfield')
bike.append('Duke')


print (bike)

#2.Inserting element into list

bike.insert(2, 'KTM')

print (bike)

#Removing element from list

#Removing an item Using a del statement 

del bike[3]
print (bike)

#Removing on item Using the pop() method and in any position in a list

popboike = bike.pop()
print (bike)
print (popboike)
#print (pop_bike)

#last_owned = bike.pop(0)
#print (f"Hi buddy My last owned bike is -{last_owned.title()}")

#Removing an item by value

too_cost = 'R15 v3'
popped_bike = bike.remove(too_cost)
print (bike)
print (f"\n{too_cost} is too expensive")



