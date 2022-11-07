class camara:
    def __init__(self, megapixeles, color):
        self.megapixeles = megapixeles
        self.color = color

    def toString(self):
        pass


class nikon(camara):
    def __init__(self, megapixeles, color, marca, modelo):
        self.marca = marca
        self.modelo = modelo
        super().__init__(megapixeles, color)

    def toString(self):
        return "Marca: {}\nModelo: {}\nMegapixeles: {}mpx\nColor: {}".format(self.marca, self.modelo, self. megapixeles, self.color)


nikonProfessional = nikon(105, "Blanco", "Nikon", "FLC-782F")
print(nikonProfessional.toString())
