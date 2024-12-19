from numpy import loadtxt
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
# from keras.models import Sequential
# from keras.layers import Dense

import pandas as pd
dataset = pd.read_csv('D:\\playground\\10000-lines-of-code\\AIML\\diabetes.csv')
X = dataset[:,0:8]
y = dataset[:,8]
model = Sequential()
model.add(Dense(12, input_shape=(8,), activation='relu'))
model.add(Dense(8, activation='relu'))
model.add(Dense(1, activation='sigmoid'))
model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])
_, accuracy = model.evaluate(X, y)
print('Accuracy: %.2f' % (accuracy*100))