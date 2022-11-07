class Clase:
    atributo_clase = "Hola"
    __atributo_clase = "Hola"

    def __mi_metodo(self):
        print("Haz algo")
        self.__variable = 0

    def metodo_normal(self):
        self.__mi_metodo()
