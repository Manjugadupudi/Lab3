import matplotlib.pyplot as plt
num=[]
absolute_err=[]

file=open("outputData.dat","r")
lines =file.readlines()
file.close()


for line in lines:

	numv=float(line.strip().split(" ")[0])
	num.append(numv)
	absolute_errv=float(line.strip().split(" ")[1])
	absolute_err.append(absolute_errv)


plt.ylim([0,0.6])
plt.title("Number vs Absolute Error")
plt.xlabel("Number")
plt.ylabel("Absolute Error")
plt.plot(num,absolute_err)
plt.savefig("output.jpeg")

