# establecer una comparacion alfabetica entre dos variables alfanumerica ,
# provincia1 == ilo , provincia2 == algarrobal entonces decimos que la exprecion
# (provincia1 > a provincia2) es verdadera y la exprecion (provincia1 < provincia2) es falsa

i = 0
while i == 0:
    P1 = str.lower(input("Ingrese la provincia 1:"))
    if P1 != 'ilo' and P1 != 'algarrobal':
        print("La provincia no corresponde a ilo o algarrobal intente de nuevo:")
    else:
        i = 1
while i == 1:
    P2 = str.lower(input("INgrese la provincia 2"))
    if P2 != 'ilo' and P2 != 'algarrobal':
        print("La provincia no correspode a ilo o algarrobnal intente de nuevo:9")
    else:
        i = 2
if P1 == 'ilo':
    print(True)
else:
    print(False)
