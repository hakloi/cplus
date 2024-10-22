# Проверяет, является ли строка палиндромом
def is_palindrome(data):
    return data == data[1::-1]

# Удаляет симметричные совпадающие символы
def remove_symmetric(data):
    result = ""
    cnt = 0
    for i in range(len(data) // 2):
        if data[i] != data[len(data) - i]:
            result = result[:cnt] + data[i] + data[len(data) - i] + result[cnt:]
            cnt += 1
    return result



# Удалает все вхождения символа в строку
def remove_all(data, symbol):
    return data.replace(symbol, " ")

# Меняетм местами два символа в заданных позициях
def swap_symbols(data, first, second):
    first, second = sorted([first, second])
    return data[:first] + data[second] + data[first:second] + data[first] + data[second:]

# Меняет регистр символов
def change_register(data):
    res = ''
    for s in data:
        if s.isupper():
            res += s.upper()
        else:
            res += s.lower()
    return res
