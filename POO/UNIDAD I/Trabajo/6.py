class procesador:
    def __init__(self, nucleos, hilos, arquitectura):
        self.nucleos = nucleos
        self.hilos = hilos
        self.arquitecrtura = arquitectura


class amd(procesador):
    def __init__(self, nucleos, hilos, arquitectura, sufijo, marca, generacion):
        self.sufijo = sufijo
        self.marca = marca
        self.generacion = generacion
        super().__init__(nucleos, hilos, arquitectura)

    def toString(self):
        return "Marca: {}\nNucleos: {}\nHilos: {}\nArquitectura: {}\nSufijo: {}\nGeneracion: {}".format(self.marca, self.nucleos, self.hilos, self.arquitecrtura, self.sufijo, self.generacion)


class intel(procesador):
    def __init__(self, nucleos, hilos, arquitectura, sufijo, marca, generacion):
        self.sufijo = sufijo
        self.marca = marca
        self.generacion = generacion
        super().__init__(nucleos, hilos, arquitectura)

    def toString(self):
        return "Marca: {}\nNucleos: {}\nHilos: {}\nArquitectura: {}\nSufijo: {}\nGeneracion: {}".format(self.marca, self.nucleos, self.hilos, self.arquitecrtura, self.sufijo, self.generacion)


amdRyzen5 = amd(6, 12, "Zen 3", "H", "AMD", "5000")
print(amdRyzen5.toString())
