cadena = str(input("Ingrese el posible palindromo: "))
cadena2 = ""
# cadena de reversa
for i in range(len(cadena)):
    cadena2 += cadena[len(cadena) - i - 1]

if cadena == cadena2:
    print("Es un palindromo! :)")
else:
    print("No es un palindromo! :(")

