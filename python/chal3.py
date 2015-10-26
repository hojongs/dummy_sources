#!/usr/bin/python

def eu_func(m, n):
	if n==0:
		return m
	else:
		return eu_func(n, m%n)

m=input("number 1 : ")
n=input("number 2 : ")

if m<n:
	temp=m
	m=n
	n=temp

print 'output :',eu_func(m,n)
