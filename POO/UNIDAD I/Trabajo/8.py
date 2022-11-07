class Palindrom:
    def estPalindrome(s):
        if len(s) <= 1:
            return True
        return s[0] == s[-1] and Palindrom.estPalindrome(s[1:-1])


print(Palindrom.estPalindrome('kayak'))


# 1.6.2
class Palindrom:
    def __init__(self, chaine):
        self.chaine = chaine

    def estPalindrome(s):
        if len(s) <= 1:
            return True
        return s[0] == s[-1] and Palindrom.estPalindrome(s[1:-1])

    def test(self):
        return Palindrom.estPalindrome(self.chaine)


mot = Palindrom("kayak")
print(mot.test())