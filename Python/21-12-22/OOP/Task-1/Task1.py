class LeftParagraph:
    def __init__(self, length):
        self.length = length
        self.l = []
   
    def add_word(self, word):
        self.l.append(str(word)) 

    def end(self):
        arr_l = [len(i) for i in self.l]
        temp = 0        
        while(temp <= len(self.l)):
                    

a = LeftParagraph(3)
a.add_word(123)
a.add_word(123)
a.add_word(123)
a.add_word(123)
a.end()           
