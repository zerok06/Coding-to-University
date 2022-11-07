import random
# Realizar un código para averiguar
# cuantos números se repiten

# Variables globales
matriz = []
matrizFiltered = []
lengthMatriz = int(input('Ingrese la cantidad de numeros a generar: '))
maxValue = int(input('Ingrese el valor maximo:'))
minValue = int(input('Ingrese el valor minimo:'))

for i in range(lengthMatriz):
    matriz.append(random.randint(minValue, maxValue))
print('Matriz llenada!')
print(matriz)

for i in range(len(matriz)):
    currentValue = int(matriz[i])
    currentCounter = 0
    if (matrizFiltered.count(currentValue) != 1):
        for f in range(len(matriz)):
            currentCounter += (0, 1)[matriz[f] == currentValue]
        matrizFiltered.append(currentValue)
        print('[', currentValue, '] tiene ', currentCounter, ' coincidencias.')
