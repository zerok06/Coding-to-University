
# Clase
class Mamifero:

    # Constructor
    def __init__(self, name, edad, genero):
        # Atributos
        self.name = name
        self.edad = edad
        self.genero = genero

    # Metodos
    def grito(self):
        print("Guau guau")


# Instanciación
perro = Mamifero('perro', 3, 'Macho')

# Ejecución del metodo gritar
perro.grito()

# Al finalizar la ejecuccion se limpia la memoria.
