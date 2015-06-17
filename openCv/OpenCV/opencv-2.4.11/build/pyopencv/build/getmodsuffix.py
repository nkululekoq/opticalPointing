import imp
for s in imp.get_suffixes():
    if s[1] == 'rb' and s[0][0] == '.':
        break
print s[0],
