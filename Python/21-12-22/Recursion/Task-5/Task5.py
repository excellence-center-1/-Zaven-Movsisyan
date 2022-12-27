def linear(some_list):
    ints = [1 if type(i) != list else 0 for i in some_list]
    if all(ints):
        print(some_list)
    for i in some_list:
        if type(i) == list:
            temp = i
            some_list.remove(i)
            some_list.extend(i)
            linear(some_list)

linear([[1, 2], 4, [[2, 4, 8, [-4, "er", [0], [{2: "primer"}], []]]]])
