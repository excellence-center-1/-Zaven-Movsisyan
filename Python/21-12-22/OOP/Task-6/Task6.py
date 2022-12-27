class MinStat:
    def __init__(self):
        self.l = []

    def add_number(self, num):
        self.l.append(num)

    def result(self):
        if len(self.l) == 0:
            return None
        return min(self.l)

class MaxStat:
    def __init__(self):
        self.l = []

    def add_number(self, num):
        self.l.append(num)

    def result(self):
        if len(self.l) == 0:
            return None
        return max(self.l)

class AverageStat:
    def __init__(self):
        self.l = []

    def add_number(self, num):
        self.l.append(num)

    def result(self):
        if len(self.l) == 0:
            return None
        return float(sum(self.l)) / float(len(self.l))



values = [1, 2, 4, 5]
mins = MinStat()
maxs = MaxStat()
average = AverageStat()
for v in values:
    mins.add_number(v)
    maxs.add_number(v)
    average.add_number(v)

print(mins.result(), maxs.result(), '{:<05.3}'.format(average.result()))
