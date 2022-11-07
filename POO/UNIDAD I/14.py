# diseña un programa que muestre el producto de los 10 primeros numeros inpares
i = 1
p = 1
produto = 1
while p <= 10:
    produto *= i
    i += 2
    p+=1

print("Producto: ", produto)
