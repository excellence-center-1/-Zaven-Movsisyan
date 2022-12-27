class Person:
    def __init__(self, name, surname, f_name,  nums):
        self.name = name
        self.s_name = surname
        self.f_name = f_name
        self.d = nums

    def get_phone(self):
        if 'private' in self.d.keys():
            return self.d['private']
        return None

    def get_name(self):
        return self.name + ' ' + self.f_name

    def get_work_phone(self):
        if 'work' in self.d.keys():
            return self.d['work']
        return None

    def get_sms_text(self):
        return 'Dear ' + self.name + ' ' + self.s_name + '! Take part in our win-win competition for individuals'

class Company:
    def __init__(self, name, type_, nums, *people):
        self.name = name
        self.ty = type_
        self.d = nums
        self.p = people

    def get_phone(self):
        return self.d['contact']
    
    def get_name(self):
        return self.name

    def get_sms_text(self):
        return "For company " + self.name + "there is a super offer! Take part in our win-win competition for " +  self.ty


def send_sms(*classes):
    companies = [i for i in classes if type(i) == Company]
    people = [i for i in classes if type(i) == Person]







