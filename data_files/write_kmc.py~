#!/usr/bin/python3
"""
Code to generate coordinates int the form(x, y)

Time: 1:21:43 (AM)
"""
__author__ = "Denis Karanja"
__version__ = "1.0.0"

import random

def generate_coordinates(limit, file_name):
	'''Generates Coordinates and writes to file'''
	file_handle = open(file_name, "a")

	for i in range(limit+1):
		x = random.randint(0, limit)
		y = random.randint(x, limit*2)
		value = str(x) + ',' + str(y)
		
		if i < limit:
			file_handle.write('"'+ value + '"' + '\n')
		elif i == limit:
			file_handle.write('"'+ value + '"')



if __name__ == '__main__':
	print(generate_coordinates(200, "kmc.txt"))