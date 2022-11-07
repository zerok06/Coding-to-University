from random import randint
# Relaizar un juego para adivinar un numero. para ello generar un numero aleatorio entre 0 a 100,
# luego ir pidiendo numero indicando entre conmillas es mayor o es menor segun sea mayor o menor
# con respecto a n el proceeso termina cuando el ususario acierta y mostar el numero de intentos
responses = ["El numero {} es mayor! {}", "El numero {} es menor ! {}"]
pistas = ["pero estas muy cerca.", "pero estas muy lejos."]
numberAleatorio = randint(0, 100)
print(numberAleatorio)
isCorrect = True
numintentos = 0

while isCorrect:
    print("********************************************")
    currentValue = int(input("Ingrese un numero:"))
    numintentos += 1
    if currentValue > numberAleatorio + 10:
            print(responses[0].format(currentValue, pistas[0]))
    else:
        if currentValue > numberAleatorio:
            print(responses[0].format(currentValue, ""))

    if currentValue < numberAleatorio - 10:
        print(responses[1].format(currentValue, pistas[1]))
    else:
        if currentValue < numberAleatorio:
            print(responses[1].format(currentValue, ""))
    if currentValue == numberAleatorio:
        isCorrect = False
        print("Acertaste la respuesta es correcta!")
        print("Numeros de intentos: {}".format(numintentos))