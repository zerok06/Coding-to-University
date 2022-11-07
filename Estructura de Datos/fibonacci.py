nDatos = int(input('Ingrese la cantidad de valores: '))
matriz = [0, 1]
for i in range(2, nDatos):
    matriz.append(matriz[i - 1] + matriz[i - 2])
print(matriz, len(matriz))
