class Base:
    def __init__(self):
        self.a = "a"
        self.b = "b"
        self.c = "c"

    def A(self):
        print(self.a)

    def B(self):
        print(self.b)

    def C(self):
        print(self.c)


class Derivee(Base):
    def init(self):
        self.a = "aa"
        super().init()
        self.c = "ce"

    def A(self):
        print(self.a)

    def B(self):
        self.b = "bb"
        super().B()
        print(self.b)


base = Base()
derivee = Derivee()

base.A()

derivee.A()
print()

base.B()

derivee.B()

base.C()

derivee.C()

derivee = base
derivee.C()
