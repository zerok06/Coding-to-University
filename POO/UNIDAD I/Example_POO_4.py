class pokemon:
    def __init__(self, name, age, power, defense):
        self.name = name
        self.age = age
        self.power = power
        self.defense = defense

    def atack(self):
        print("Atacando!")

    def defense(self):
        print("Defensa!")

    def printData(self):
        print("My nombre es {} y tengo {} años".format(self.name, self.age))


picachu = pokemon('Picachu', 12, 120, 100)

picachu.printData()
