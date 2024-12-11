# Проверяет, является ли строка палиндромом
def is_palindrome(data):
    return data == data[::-1]

# Удаляет симметричные совпадающие символы
def remove_symmetric(data):
    result = []
    n = len(data)
    for i in range(n // 2):
        if data[i] != data[n - 1 - i]:  
            result.append(data[i])  
            result.append(data[n - 1 - i])  
    if n % 2 != 0:
        result.append(data[n // 2])  
    return ''.join(result) 


# Удалает все вхождения символа в строку
def remove_all(data, symbol):
    return data.replace(symbol, "")  

# Меняет местами два символа в заданных позициях
def swap_symbols(data, first, second):
    if first > second: 
        first, second = second, first
    return data[:first] + data[second] + data[first + 1:second] + data[first] + data[second + 1:]

# Меняет регистр символов
def change_register(data):
    res = ''
    for s in data:
        if s.isupper():
            res += s.lower()  
        else:
            res += s.upper() 
    return res