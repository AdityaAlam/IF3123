# Moch Aditya Bahrul 'Alam
# 3411191139
# DSEC

n = 1000

i = 1
a = 0

for i in range(0, 1000):
  if i%3 == 0 or i%5 == 0:
    a = i + a
  elif i%3 == 0:
    a = i + a
  elif i%5 == 0:
    a = i + a

print (a)