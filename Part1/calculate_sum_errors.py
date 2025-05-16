# calculate_sum_errors.py
# Errors introduced: missing colons, bad function call

def calculate_sum(arr)             # SyntaxError: expected ':'
    total = 0
    for num in arr                # SyntaxError: expected ':'
        total += num
    return total

print( calculate sum([1, 2, 3, 4, 5]) )  # SyntaxError or NameError
