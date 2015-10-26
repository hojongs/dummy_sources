#!/usr/bin/python

from os import system

print 'start!'
for i in range(0xbffffb00, 0xbffffa00, -0x4):
	system('./test.py '+str(i))
print 'end!'
