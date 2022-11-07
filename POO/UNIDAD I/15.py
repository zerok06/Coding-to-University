# pedir un numero y calcular su factorial no utilize la formula
number = int(input("Ingrese un numero:"))
i = 1
factorial = 1
while i <= number:
    factorial *= i
    i += 1
print("Resultado: ", factorial)
