'''
words = set()

def check(word):
    return word.lower() in words

def load(dict):
    with open(dict) as file:
        words.update(file.read().splitlines())
    return True

def size():
    return len(words)

def unload():
    return True
'''

import cs50

ans = cs50.get_string("What's your name? ")
# ans = input("What's your name? ")
print("Hello, " + ans)
print("Hello,", ans)
print(f"Hello, {ans}")

# range, list, tuple, dict, set