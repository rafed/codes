#!/usr/bin/env python

import numpy as np
import matplotlib.pyplot as plt

X = np.random.rand(100).astype(np.float32)

a = 50
b = 40
Y = a * X + b

plt.plot(X, Y)
plt.show()