# Relaize un programa el cual permita guardar numberos y luego los muestre

n =  int(input("Ingrese un numero: "))
number = []

for i in range(n):
    number.append(int(input("Ingrese un numero #{}: ".format(i + 1))))

print("Lista: ", number)