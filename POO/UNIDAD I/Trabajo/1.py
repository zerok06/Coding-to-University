# Ejercico 1
class persona:
    def __init__(self, name, age):
        self.name = name
        self.age = age


class alumno(persona):
    def __init__(self, name, age, seccion, grado):
        self.seccion = seccion
        self.grado = grado
        super().__init__(name, age)

    def toString(self):
        print("Mi nombre es {} tengo {} y me encuentro en {}to \"{}\"".format(
            self.name, self.age, self.grado, self.seccion))


lucas = alumno("Luis", 12, "A", 4)
lucas.toString()
