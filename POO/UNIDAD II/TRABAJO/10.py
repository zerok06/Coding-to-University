ArrayAlberge = []

class gatito: 
    def __init__(self, raza, color, edad):
        self.raza = raza
        self.color = color
        self.edad = edad
    def dic(self, raza, color, edad):
        return {raza: self.raza, color: self.color, edad: self.edad}

luna = gatito("Mestizo", "blanco", 2)

ArrayAlberge.append(luna.dic("Raza", "Color", "Edad"))

print(ArrayAlberge)
