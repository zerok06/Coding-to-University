# Realizar un programa que nos permita ingresar numeros y que nos indique el valor maximo y el minimo

n = int(input("Ingrese n:"))

numbers = []

for i in range(n):
    numbers.append(int(input("Ingrese el numero #{}: ".format(i + 1))))

print("Numero maximo: ", max(numbers))
print("Numero minimo: ", min(numbers))
