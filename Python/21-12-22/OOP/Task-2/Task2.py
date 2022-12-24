class Parent:
    def __init__(self, year, month, day):
        self.year = str(year).rjust(2, '0')
        self.month= str(month).rjust(2, '0')
        self.day = str(day)
    
    def set_year(self, n_year):
        self.year = n_year

    def set_month(self, n_month):
        self.month = n_month
    
    def set_day(self, n_day):
        self.day = n_day
   
    def get_year(self):
        return self.year

    def get_month(self):
        return self.month
    
    def get_day(self):
        return self.day

class AmericanDate(Parent):
    def __init__(self, year, month, day):
        super().__init__(year, month, day)

    def format(self):
        return self.month + '.' + self.day + '.' + self.year


class EuropeanDate(Parent):
    def __init__(self, year, month, day):
        super().__init__(year, month, day)

    def format(self):
        return self.day + '.' + self.month + '.' + self.year


american = AmericanDate(2000, 4, 10)
european = EuropeanDate(2000, 4, 10)
print(american.format())
print(european.format())
    
