# 4.- Realize un programa para hallar la formula cuadratica

a = float(input('Ingrese el a: '))
b = float(input('Ingrese el b: '))
c = float(input('Ingrese el c: '))
d = float((b**2 - (4 * a * c)))

if (d >= 0):
    x1 = float(((-1 * b) + ((b**2 - (4 * a * c))**0.5)) / 2 * a)
    x2 = float(((-1 * b) - ((b**2 - (4 * a * c))**0.5)) / 2 * a)
    print('Primera x: ', x1)
    print('Segunda x: ', x2)
else:
    print('Es un numero complejo')
