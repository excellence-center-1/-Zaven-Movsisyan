def rec_linear_sum(some_list, summ=0):
    for i in some_list:
        if type(i) == int:
            summ += i
        else:
            summ = rec_linear_sum(i)
    return summ


print(rec_linear_sum([1, 2, [1, 2, 3, [1, 2, 3, 4, 5, 6]]]))
