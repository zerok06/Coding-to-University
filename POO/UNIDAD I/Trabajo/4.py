class teclado:
    def __init__(self, isMecanico, perfil, numTeclas):
        self.isMecanic = isMecanico
        self.perfil = perfil
        self.numTeclas = numTeclas


class kumara(teclado):
    def __init__(self, isMecanico, perfil, numTeclas, marca, modelo, isWireless):
        self.marca = marca
        self.modelo = modelo
        self.isWireless = isWireless
        super().__init__(isMecanico, perfil, numTeclas)

    def toString(self):
        return "Marca: {}\nMecanico: {}\nPerfil: {}\nModelo: {}\nEs Inalambrico: {}".format(self.marca, self.isMecanic, self.perfil, self.modelo, self.isWireless)

kurumaKeyBoard = kumara(True,"High",61, "ReDragon","KM-1402S",True)
print(kurumaKeyBoard.toString())