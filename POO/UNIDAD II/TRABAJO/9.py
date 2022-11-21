ArrayEstacionamiento = []

class car:
    def __init__(self, color, modelo, fabric, combustible, rines, año):
        self.color = color
        self.modelo = modelo
        self.fabric = fabric
        self.combustible = combustible
        self.rines = rines
        self.año = año
    def dic(self, col, mod, fabric, com, rin, año):
        return {col: self.color, mod: self.modelo, fabric: self.fabric, com: self.combustible, rin: self.rines, año : self.año}

carrito =  car("BLACK", "MD-41", "HUINDAY", "Petroleo", True, "2020")

ArrayEstacionamiento.append(carrito.dic("Color", "Modelo","Fabricate", "Combustible", "RInes", "Año de fabricacion"))

print(ArrayEstacionamiento)
