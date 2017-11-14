"""
ID: waz
LANG: PYTHON2
TASK: ride
"""

def read_number(s) :
	ans = 1
	for i in s:
		ans = ans * (ord(i) - ord('A')+1)
 
	return ans % 47

fin = open('ride.in','r')
fout = open('ride.out','w')

if read_number(fin.readline().strip()) == read_number(fin.readline().strip()):
	fout.write("GO\n")
else :
	fout.write("STAY\n")

fin.close()
fout.close()
