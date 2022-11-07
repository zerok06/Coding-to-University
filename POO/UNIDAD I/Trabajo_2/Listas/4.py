#Realizar un programa el cual permita ingresar nombres y luego realizes un busqueda en dicha lista

n = int(input("Ingrese n: "))
names = []
for i in range(n):
    names.append(str(input("Ingrese el nombres del elemento #{}: ".format(i + 1))))


nameSearch = str(input("Ingrese un nombre para buscar: "))
existName = False
for i in range(n):
    if names[i] == nameSearch:
        existName = True

print("El nombre existe: ", existName)
