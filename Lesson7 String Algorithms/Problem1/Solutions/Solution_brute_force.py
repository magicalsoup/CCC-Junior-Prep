s = str(raw_input())
found = False

for i in range (len(s) - 2):
    if s[i] == 'C' and s[i + 1] == 'C' and s[i + 2] == 'C':
        found = True
        break
    
if found == True:
    print "NO"
else:
    print "YES"
