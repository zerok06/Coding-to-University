class monster():
    def __init__(self,hp):
        self.__hp = hp


    def print_hp(self):
        print(self.__hp)


    def upgrade_hp(self,hp):
        self.__hp = hp

a = monster(10)
a.print_hp () # Llame a este método para imprimir el valor de hp empaquetado

 # El siguiente es el código recién agregado
a.upgrade_hp (20) # Llame a este método para actualizar el valor de hp
a.print_hp()