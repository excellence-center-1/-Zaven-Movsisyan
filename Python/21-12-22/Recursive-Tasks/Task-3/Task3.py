def tribonacci(n):
    if n > 3:
        return tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1)
    elif n == 3:
        return 1
    else:
        return 0


