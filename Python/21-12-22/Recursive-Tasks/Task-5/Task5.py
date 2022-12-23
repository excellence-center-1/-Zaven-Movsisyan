def linear(some_list):
    for i in some_list:
        if type(i) == list:
            some_list.extend(linear(i))
    return some_list

print(linear([1, 2, [3, 4, [4, 5, 54, [3, 4]]], [1, 2]]))
