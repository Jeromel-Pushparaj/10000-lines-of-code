name = ['bennani', 'Dishon ben', 'Anton ben']

name[0] = 'sam'

name.insert(0, 'Livingston')
name.insert(3, 'Deva')
name.append('Abish')



message = "I can invite only two people for my dinner"

name_1 = name.pop(0) 

print (f"I am so sorry, {message} {name_1}")

name_2 = name.pop(0)

print (f"I am so sorry, {message} {name_2}")

name_3 = name.pop(1)

print (f"I am so sorry, {message} {name_3}")

name_4 = name.pop(1)

print (f"I am so sorry, {message} {name_4}")



#name_in_1 = name[0]
#name_in_2 = name[1]

print (f"\nHi buddy , you are still in this dinner {name[0].title()}.")
print (f"\nHi buddy , you are still in this dinner {name[1].title()}.")

del name[0]
del name[0]

print (name)
