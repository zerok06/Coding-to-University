class A:
    def __init__(self):
        self._contador = 0  # Este atributo es privado
    def incrementa(self):
        self._contador += 1
    def cuenta(self):
        return self._contador
class B(object):
    def __init__(self):
        self.__contador = 0  # Este atributo es privado
    def incrementa(self):
        self.__contador += 1
    def cuenta(self):
        return self.__contador

a = A()
a.incrementa()
a.incrementa()
a.incrementa()
print(a.cuenta())

print(a._contador)
