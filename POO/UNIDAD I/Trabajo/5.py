class mouse:
    def __init__(self, color, isGamer, numBotones):
        self.color = color
        self.isGamer = isGamer
        self.numBotones = numBotones


class tDaggerMouse(mouse):
    def __init__(self, color, isGamer, numBotones, marca):
        self.marca = marca
        super().__init__(color, isGamer, numBotones)

    def toString(self):
        return "Marca: {}\nColor: {}\nNumero de botones: {}\nGamer: {}".format(self.marca, self.color, self.numBotones, self.isGamer)


imperial = tDaggerMouse("Negro", True, 7, "T-Dagger")
print(imperial.toString())
