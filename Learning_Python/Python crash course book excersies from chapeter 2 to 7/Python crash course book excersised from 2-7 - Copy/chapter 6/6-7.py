person_0 = {'first_name':'jeromel','last_name':' pushparaj','age':17,'city':'meignanapuram'}
person_1 = {'first_name':'jefferson','last_name':' thangaraj','age':16,'city':'meignanapuram'}
person_2 = {'first_name':'jeswin','last_name':'danial','age':17,'city':'paramankurichi'}

peoples = [person_0, person_1,person_2]

for people in peoples:
	for user, detail in people.items():
		print (f"{detail}")


