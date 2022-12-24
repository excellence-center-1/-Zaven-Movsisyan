class Parent:
    def __init__(self, length):
        self.length = length
        self.l = []

    def add_word(self, word):
        self.l.append(str(word))   

    def make(self):
        self.resulst = []
        temp = []
        temp.append(self.l[0])
        for i in range(1, len(self.l)):
            if (len(' '.join(temp) + self.l[i]) + 1) > self.length:
                self.resulst.append(' '.join(temp))
                temp = [self.l[i]] 
            else:
                temp.append(self.l[i]) 
            if i == len(self.l) - 1:
                self.resulst.append(' '.join(temp))


class LeftParagraph(Parent):
    def __init__(self, length):
        super().__init__(length)

    def end(self):
        self.make()
        [print(i.ljust(self.length)) for i in self.resulst]


class RightParagraph(Parent):
    def __init__(self, length):
        super().__init__(length)

    def end(self):
        self.make()
        [print(i.rjust(self.length)) for i in self.resulst]


lp = LeftParagraph(8)
lp.add_word('abc')
lp.add_word('defg')
lp.add_word('hi')
lp.add_word('jklmnopq')
lp.add_word('r')
lp.add_word('stuv')
lp.end()
print()
rp = RightParagraph(8)
rp.add_word('abc')
rp.add_word('defg')
rp.add_word('hi')
rp.add_word('jklmnopq')
rp.add_word('r')
rp.add_word('stuv')
rp.end()
print() 
