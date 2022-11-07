# realize un programa para capturar la longitud o perimeto de una circunferecia y su area

from math import pi

radio = float(input('Ingrese el valor de radio:'))
perimetro = float(2*pi*radio)
area = float(pi * (radio**2))

print('Perimetro: ', perimetro)
print('Area: ', area)
