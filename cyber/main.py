#"灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸弰㑣〷㘰摽"


string = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸強㕤㐸㤸扽"

for i in range(len(string)):
  print(chr(ord(string[i])>>8), end='')
  print(chr((ord(string[i]))-((ord(string[i])>>8)<<8)), end='')
