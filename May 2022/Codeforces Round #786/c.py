def replacer(s, newstring, index, nofail=False):
    # raise an error if index is outside of the string
    if not nofail and index not in range(len(s)):
        raise ValueError("index outside given string")

    # if not erroring, but the index is still not in the correct range..
    if index < 0:  # add it to the beginning
        return newstring + s
    if index > len(s):  # add it to the end
        return s + newstring

    # insert the new string between "slices" of the original
    return s[:index] + newstring + s[index + 1:]

st = set([])

def solve(s,t):
  st.add(s)
  if 'a' not in s: 
    return
  
  for i in range(len(s)):
    if (s[i]=='a'):
      solve(replacer(s, t, i),t)


for _ in range(int(input())):
  s = input()
  t = input()
  ans = -1
  if(t == "a"):
    ans = 1
  elif ('a' in t):
    ans = -1
  else:
    
    ans = pow(2,s.count('a'))
  print(ans)