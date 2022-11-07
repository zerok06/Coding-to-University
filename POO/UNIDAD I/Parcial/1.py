# Diseña un programa que calcule la menor de cinco palabras dadas; es decir, la primera palabra de las cinco en orden alfabético.
# Aceptaremos que las mayúsculas son alfabéticamente menores que las minúsculas, de acuerdo con la tabla ASCII.

text = ""
letterLow = 122
isCompleted = False
while isCompleted == False:
    text = input("Ingrese un texto de 5 palabras: ")
    if len(text) <= 5:
        isCompleted = not (isCompleted)
    else:
        print("Ingrese valores correctos!!!")

for i in range(len(text)):
    if ord(text[i]) <= letterLow:
        letterLow = ord(text[i])


print(chr(letterLow))
