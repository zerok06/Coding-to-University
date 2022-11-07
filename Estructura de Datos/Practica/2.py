
class studient:
    def __init__(self, name, dni, nota):
        self.dni = dni
        self.name = name
        self.nota = nota

    def toString(self):
        print("{\n\tname: {},\n\tdni: {},\n\tnota: {},\n}".format(
            self.name, self.dni, self.nota))


alumnos = []

for i in range(10):
    currentAlumn =  studient()