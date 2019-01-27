string pairStar(String str) {
  if(str.length() < 2)
      return str;
  if(str[0] == str[1])
      return str[0] + "*" + pairStar(str.substr(1))  
  return str[0] + pairStar(str.substr(1))
}
