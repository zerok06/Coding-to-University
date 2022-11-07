# Escriba un programa que permita crear dos listas de palabras y que, a continuación, elimine de la primera lista los nombres de la segunda lista.

n1 = int(input("Ingrese n1: "))
n2 = int(input("Ingrese n2: "))

list_1 = []
list_2 = []

for i in range(n1):
    list_1.append(str(input("Digame la palabra #{}".format(i + 1))))
for i in range(n2):
    list_2.append(str(input("Digame la palabra #{}".format(i + 1))))

print("ELiminar la lista 1 en la ista 2")

for i in range(n1):
    for j in range(n2):
        if list_1[i] == list_2[j]:
            list_2[j].pop()


print(list_2)