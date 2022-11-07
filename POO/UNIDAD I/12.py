# promedio de numeros


prom = float(0.0)
i = 0
while i != -1:
    inputValue = float(input("Ingrese el numero # {}:".format(i+1)))
    if (inputValue == -1):
        break
    prom += inputValue
    i += 1

prom = prom / (i)

print("Promedio: ", prom)
