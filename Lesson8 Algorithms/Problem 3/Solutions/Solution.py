# Credits to dmoj user minecraftyugi

def solve(k, word):
    length = len(word)
    count = [0]*26
    s = ""
    for i in xrange(min(k, length)):
        ch = word[i]
        count[ord(ch)-97] += 1
        s += ch

    for i in xrange(k, length):
        ch = word[i]
        shift = count.index(max(count)) + 1
        s += chr(((ord(ch)-97+shift)%26)+97)
        count[ord(ch)-97] += 1
        count[ord(word[i-k])-97] -= 1

    print s

solve(input(), raw_input())
