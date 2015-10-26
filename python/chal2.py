#!/usr/bin/python

a=input("number 1 : ")
b=input("number 2 : ")
if a>b:
	temp=a
	a=b
	b=temp

for i in range(a,b+1):
	print
	for j in range(1,9+1):
		print i,'*',j,'=',i*j
