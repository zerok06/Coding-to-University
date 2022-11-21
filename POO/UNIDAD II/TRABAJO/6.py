ArrayArmas = []

class arma: 
    def __init__(self, calibre, cartuclo, modelo, marca, importado):
        self.calibre = calibre
        self.cartucho = cartuclo
        self.modelo = modelo
        self.marca = marca
        self.importado = importado
    def dic(self, ca, car, mod, mar, imp):
        return {ca: self.calibre, car: self.cartucho, mod: self.modelo, mar: self.marca, imp: self.importado}

    
Tomsom = arma("32", "mini", "TM-34", "ARMON", "US")

ArrayArmas.append(Tomsom.dic("Calibre", "Cartucho", "Modelo", "Marca", "Importador"))

print(ArrayArmas)