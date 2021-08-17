import random

INPUT_N = 10000000

random.seed()

# Insert
print(INPUT_N)
for i in range(INPUT_N):
    print(f"{random.randint(0, 42000)}")