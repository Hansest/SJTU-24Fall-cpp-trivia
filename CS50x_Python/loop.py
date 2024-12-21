# i = 0
# while i < 3:
#     print("meow")
#     i += 1

# for _ in range(3):
#     print("Meow")

# while True:
#     print("Meow")

before = input("Before: ")
# print(f"After: {before.upper()}")
print("After: ", end='')
for c in before:
    print(c.upper(), end='')
print()