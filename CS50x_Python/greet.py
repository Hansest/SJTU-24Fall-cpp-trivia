import sys

if len(sys.argv) == 2:
    print(f"Hello, {sys.argv[1]}")
    sys.exit(0)
else:
    print("Missing command-line argument")
    sys.exit(1)