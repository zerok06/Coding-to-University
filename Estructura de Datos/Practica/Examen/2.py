# definiendo la funcion de conversion
def converter(number, base):
    parteEntera = ""
    parteDecimal = ""
    response = ""
    entero = int(number)
    resto = 0
    complete = False
    # Parte entera
    while complete == False:
        if (entero == 0):
            break
        resto = entero % base
        parteEntera += chr(55 + resto) if resto > 9 else str(resto)
        entero = entero // base
    # Parte decimal
    entero = number - int(number)
    complete = False
    for i in range(4):
        resto = entero * base
        entero = resto - int(resto)
        parteDecimal += chr(55 + int(entero * base)) if int(entero *
                                                            base) > 9 else str(int(entero * base))

    for i in range(len(parteEntera)):
        response += parteEntera[len(parteEntera) - i - 1]
    response += "." + parteDecimal if parteDecimal != "0000" else ""
    return response


number = float(input("Ingrese el numero a convertir: "))
base = int(input("Ingrese la base: "))
print("La presicion con de decimales esta limitada a 4.")
print("*******************************************")
print("Resultado:  " + converter(number, base))
print("*******************************************")
