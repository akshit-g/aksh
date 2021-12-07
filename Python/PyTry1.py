#Write a program to calculate SI
Name=input("Enter your name ")
Age=int(input("Enter your age "))

P=float(input("Enter the principal amount "))
R=float(input("Enter the rate of interest "))
T=float(input("Enter the Time period "))

SI=P*R*T/100
AT=Age+T

print(Name ,"The SI for the above details is-", SI, "and you will get it \
when you will be" , AT ,"years old.")
