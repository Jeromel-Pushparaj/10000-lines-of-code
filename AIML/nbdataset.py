import pandas as pd 
import numpy as np 
import matplotlib.pyplot as plt


dataset = pd.read_csv('D:\\playground\\10000-lines-of-code\\AIML\\PlayTennis.csv')
dataset.shape
#machine learning algorithms can only learn from numbers (int, float, doubles .. )
#so let us encode it to int
from sklearn import preprocessing
string_to_int= preprocessing.LabelEncoder()                     #encode your data
dataset=dataset.apply(string_to_int.fit_transform) #fit and transform it
X = dataset.iloc[:, :-1].values 
y = dataset.iloc[:, 1].values


from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)


from sklearn.naive_bayes import BernoulliNB
bnb = BernoulliNB(binarize=0.0)
model = bnb.fit(X_train, y_train)
y_pred = bnb.predict(X_test)


from sklearn.metrics import classification_report
print(classification_report(y_test, y_pred))
data_p=pd.DataFrame({'Actual':y_test, 'Predicted':y_pred})  


from sklearn.metrics import confusion_matrix
print(confusion_matrix(y_test,y_pred))