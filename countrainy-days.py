print("Number of days without rain: ", np.sum(inches == 0))
print("Number of days with rain: ", np.sum(inches != 0))
print("Number of days with rain more than 0.5 inches: ", np.sum(inches>0.5))
print("Number of days with rain < 0.2 inches: ", np.sum((inches > 0)& (inches < 0.2)))
