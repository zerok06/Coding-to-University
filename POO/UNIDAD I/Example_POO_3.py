class Mascota():
    def __init__(self, nombre, edad, genero, color):
        self.nombre = nombre
        self.edad = edad
        self.genero = genero
        self.color = color

    def printData(self):
        print("Guau guau guau {} guau guau, guau {} gua guau {}".format(
            self.nombre, self.edad, self.genero))


perra = Mascota('Persa', 4, 'Hembra', 'Crema')

perra.printData()
