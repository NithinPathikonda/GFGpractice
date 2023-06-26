# GFGpractice

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

df=pd.read_csv("ausdrug.csv")
df["ds"]=pd.to_datetime(df["ds"])
sns.set(style="whitegrid",color_codes=True)
print(df.head())
plt.figure(figsize=(16,6))
plt.plot(df["ds"],df["y"])
plt.xlabel("Time")
plt.ylabel("$ million")
plt.title("antidiabetic drug sales in australia")
plt.show()








import numpy as np
import matplotlib.pyplot as plt

from sklearn.linear_model import LinearRegression

sales=np.array([2,4,6,9,12,34,45])
tv_budget=np.array([1,2,4,7,9,11,15])

X=tv_budget.reshape(-1,1)   #to covert array to column vector (1:single column, -1 for rows)
y=sales

model=LinearRegression()
model.fit(X,y)

print("coeff: ",model.coef_)
print("intercept: ",model.intercept_)

y_pred=model.predict(X)

plt.scatter(X,y,color='b',label="actual sales")  # define labels of plottting points
plt.plot(X,y_pred,color='r',label='linear regression') #define labels for regression line
plt.xlabel("tv budget")
plt.ylabel('sales')
plt.legend()  # to show labels of plotting points and regression line
plt.show()


