class Selector:
    def __init__(self, arr):
        self.arr = arr
    
    def get_odds(self):
        res =  [i for i in self.arr if i % 2]
        return res

    def get_evens(self):
        res = [i for i in self.arr if not i % 2]
        return res


print("Version 1")
values = [11, 12, 13, 14, 15, 16, 22, 44, 66]
selector = Selector(values)
odds = selector.get_odds()
evens = selector.get_evens()
print(' '.join(map(str, odds)))
print(' '.join(map(str, evens)))
print('-----------------------')
print("Version 2")
values = [6, 6, 0, 4, 8, 7, 6, 4, 7, 5]
selector = Selector(values)
odds = selector.get_odds()
evens = selector.get_evens()
print(' '.join(map(str, odds)))
print(' '.join(map(str, evens)))
print('-----------------------')


