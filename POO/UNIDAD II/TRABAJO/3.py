ArrayProductos = []


class monitor:
    def __init__(self, resulucion, marca, tecnologia):
        self.resolucion = resulucion
        self.marca = marca
        self.tec = tecnologia

    def dic(self, res, mar, tec):
        return {res: self.resolucion, mar: self.marca, tec: self.tec}


Teros = monitor("1920*1080", "Teros", "IPS")
ArrayProductos.append(Teros.dic("Resolucion", "Marca", "Tecnologia"))

print(ArrayProductos)
