ArrayPerifericos = []

class mouse:
    def __init__(self, modelo, color, price, marca, dpi):
        self.modelo = modelo
        self.color = color
        self.price = price
        self.marca = marca
        self.dpi = dpi

    def dic(self, mod, col, pri, mar, dpi):
        return {mod: self.modelo, col: self.color, pri: self.price, mar:  self.marca, dpi: self.dpi}

TerosMouse = mouse("MD-1320", "BLACK", 25.00, "Teros", 7200)
ArrayPerifericos.append(TerosMouse.dic("Modelo", "Color", "Precio", "Marca", "DPI"))

print(ArrayPerifericos)
