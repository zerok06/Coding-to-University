ArrayProductos = []
class teclado:
    def __init__(self, modelo, switch, price, color):
        self.modelo = modelo
        self.swithc = switch
        self.price = price
        self.color = color
    def dic(self, mod, sw, pri, col):
        return {mod: self.modelo, sw: self.swithc, pri: self.price, col: self.color}

tdagger = teclado("Tdagger breafer", "RED", 109.99, "White")
ArrayProductos.append(tdagger.dic("Modelo", "Tipo de Switch", "Precio", "Color"))

print(ArrayProductos)
