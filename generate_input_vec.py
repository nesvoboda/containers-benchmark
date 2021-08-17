import random

INPUT_N = 400000

random.seed()

# Insert
print(INPUT_N)
for i in range(INPUT_N):
    print(f"{random.randint(0, 42000)}")

# Delete
DELETE_N = INPUT_N // 2
print(DELETE_N)
for i in range(DELETE_N):
    print(f"{random.randint(0, (INPUT_N - i) - 1 )}")