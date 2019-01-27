def pairStar(string):
    if len(string) < 2:
        return string
    if string[0] == string[1]:
        return string[0] + "*" + pairStar(string[1:])
    return string[0] + pairStar(string[1:])
