class figura:
    def perimetro(self):
        pass

    def area(self):
        pass


class cuadrado(figura):
    def __init__(self, lado, color):
        self.lado = lado
        self.color = color

    def perimetro(self):
        return self.lado * 4


cuadradoVerde = cuadrado(10, "Verde")
print(cuadradoVerde.perimetro())
