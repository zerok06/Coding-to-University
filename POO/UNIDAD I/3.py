cantidad = float(input('¿Cuantos meses deseas invetir?'))
interes = float(input('¿Interes porcentual mensual?'))
meses = int(input('¿Cuantos meses?'))
total = float(round(cantidad*((interes / 100) + 1) ** meses, 2))
print(total)