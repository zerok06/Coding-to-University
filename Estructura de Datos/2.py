# Ingresar la cantidad de numeros y almacenar en un
#  vector, y determinar la suma de sus elementors
# y el promedio

nData = int(input('Ingrese el numero de valores:'))
matriz = []
for i in range(nData):
    newData = int(input('Ingrese el valor:'))
    matriz.append(newData)

minValue = min(matriz)
maxValue = max(matriz)
print("Min: ", minValue)
print("Max: ", maxValue)
