# python 2 code, credit to WCIPEG user InfinitiEdge
from math import sqrt
    
grav = float(input())
speed = float(input())
time = float(input())
c = speed**2
a = grav / 2
b = -(c + ((time * 2) / speed) * ((grav / 2) * c))
depth = (-b - sqrt(b**2  - (2 * a * c * grav * time**2))) / grav
vel = sqrt(2 * grav * depth)
print depth
print vel
