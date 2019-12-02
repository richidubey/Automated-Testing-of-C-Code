import os

if __name__ == "__main__":

	i = 1
	for elem in os.listdir():
	
		#print(elem[-2:])
		#print(elem)
		if elem[-2:] == '.c':
			os.rename(elem,str(i) + '.c')
			i += 1
