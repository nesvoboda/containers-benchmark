import random

INPUT_N = 50000
DELETE_N = 5000
SEARCH_N = 5000

random.seed()

# Insert
print(INPUT_N)
acc = 0
for i in range(INPUT_N):
    acc += random.randint(0, 10)
    print(str(acc) + ' ' + str(random.randint(-42, 42)))

# Delete
print(DELETE_N)
for i in range(DELETE_N):
    print(random.randint(0, acc))

# Search
print(SEARCH_N)
for i in range(SEARCH_N):
    print(random.randint(0, acc))
