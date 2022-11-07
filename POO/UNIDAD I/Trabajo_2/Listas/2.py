#Realizar un programa el cual permita ingresar numeros y luego nos de la sumatoria y el promedio
n = int(input("Numero de elementos: "))
numbers = []

for i in range(n):
    numbers.append(int(input("Ingrese el numero #{}: ".format(i + 1))))

suma = 0
prom = 0

for i in range(n):
    suma += numbers[i]

print("Suma: ", suma)
print("Promedio: ", suma / n)