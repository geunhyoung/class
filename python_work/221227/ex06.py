import matplotlib.pyplot as plt
import random

# plt.plot(random.randint(0,10)random.randint(0,100))
for i in range(5):
    a= random.randint(0,10)
    b= random.randint(0,100)

    plt.plot((0,a),(1,b))
    plt.savefig(f"a{i}.png")
