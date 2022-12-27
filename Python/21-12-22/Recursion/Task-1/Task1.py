def recursive_len(l, length=0):
    for i in l:
        if type(i) == list:
            length = recursive_len(i, length)
        else:
            length += 1
    return length
