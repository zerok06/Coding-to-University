# Guillermo tiene n dolares. Luis tiene la mitad de quillermo.
# Juan tiene la mitad de luis y quillermo juntos, hacer un program
# que calcule e imprrima la cantidad de dinero que tienen entre los
# 3. si guillermo son ingresador por teclado

dolarGuillermo = float(input("Ingrese la cantidad de dolares de Guillermo:"))
dolarLuis = dolarGuillermo / 2
dolarJuan = (dolarGuillermo + dolarLuis) / 2

print("Dolares de guillermo: ${}".format(dolarGuillermo))
print("Dolares de luis: ${}".format(dolarLuis))
print("Dolares de juan: ${}".format(dolarJuan))
print("-------------------------------------------------")
print("Suma: ${}".format(dolarGuillermo+dolarJuan+dolarLuis))
