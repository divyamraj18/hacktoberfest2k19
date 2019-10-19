import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
dataset=pd.read_csv('Salary_Data.csv')
df1 = dataset.iloc[:20]
df2 = dataset.iloc[20:]
x_train=df1.iloc[:,:-1]
x_test=df2.iloc[:,:-1]
y_train=df1.iloc[:,1]
y_test=df2.iloc[:,1]
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
regressor=LinearRegression();
regressor.fit(x_train,y_train)
y_pred=regressor.predict(x_test)
