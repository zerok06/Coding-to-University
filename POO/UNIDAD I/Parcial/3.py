arrLetter = ["T", "R", "W", "A", "G", "M", "Y", "F", "P", "D",
             "X", "B", "N", "J", "Z", "S", "Q", "V", "H", "L", "C", "K", "E"]


def letterDni(dni):
    lastNumber = dni
    resto = lastNumber % 23
    return arrLetter[resto]


dni = 0
isCorrect = False
while isCorrect == False:
    dni = int(input("Ingrese el dni: "))
    if len(str(dni)) == 8:
        isCorrect = not (isCorrect)

print(letterDni(dni))
