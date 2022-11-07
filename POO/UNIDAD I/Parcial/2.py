def listas(a, b):
    lista_final = []
    for i in a:
        if (i not in lista_final) and (i in b):
            lista_final.append(i)
    return lista_final


lista = []
lista2 = []
numList1 = int(input("Ingrese el numeor de la lista 1:"))
numList2 = int(input("Ingrese el numeor de la lista 2:"))

print("Lista 1:")
for i in range(numList1):
    lista.append(int(input()))
print("Lista 2:")

for i in range(numList2):
    lista2.append(int(input()))

print(listas(lista, lista2))
