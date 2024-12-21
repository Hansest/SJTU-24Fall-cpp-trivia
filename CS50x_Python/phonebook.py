people = {
    "Carter": "+1-234-567-8910",
    "David": "+1-234-567-8910",
    "John": "+1-234-567-8910",
}

name = input("Name: ")

if name in people:
    number = people[name]
    print(f"Found {number}")
else:
    print("Not found")