ArrayBotellas = []

class gaseosa: 
    def __init__(self, price, marca, embase):
        self.price = price
        self.marca = marca
        self.embas = embase

    def dic(self, price, mar, em):
        return {price: self.price, mar: self.marca, em: self.embas}

cocacola = gaseosa(12.2, "CocaCola", "Plastico")
ArrayBotellas.append(cocacola.dic("Precio", "Marca", "Embase"))

print(ArrayBotellas)
