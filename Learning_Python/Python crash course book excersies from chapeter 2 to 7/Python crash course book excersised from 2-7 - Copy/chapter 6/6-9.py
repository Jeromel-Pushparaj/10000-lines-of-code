favorite_places = {
	'jeromel': {
		'place_1':'canada',
		'place_2':'usa',
		'place_3':'dubai'
		},
	'jeswin': {
		'place_1':'canada',
		'place_2':'egyppt',
		'place_3':'jappen'
		}
	}
for person, place in favorite_places.items():
	print (f"\n{person.title()} please name a few of your favoite palces in the world")
	pplace = favorite_places[person]
	place_1 = pplace['place_1']
	place_2 = pplace['place_2']
	place_3 = pplace['place_3']
	favplace = f"{place_1.title()} {place_2.title()} {place_3.title()}" 
	print (favplace)