questions = ["Ingrese un nombre: ",
             "Ingrese el apellido paterno: ", "Ingrese el apellido materno: "]
person = ["", "", ""]

for i in range(3):
    person[i] = input(questions[i])

print("{} {} {}".format(person[2], person[1], person[0]))
