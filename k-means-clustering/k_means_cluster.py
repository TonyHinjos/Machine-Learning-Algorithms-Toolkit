#!/usr/bin/python3
# Filename: k_means_cluster.py
"""
A Machine learning algorithm for K mean clustering.
Date: 24th March, 2015 pm
"""
__author__ = "Anthony Wanjohi"
__version__ = "1.0.0"

import random, fractions

def euclidean_distance(point, centroid):
	'''Returns the euclidean distance between two points'''
	assert type(point) is tuple
	assert type(centroid) is tuple

	#x and y values for the point and the centroid
	point_x, point_y = point
	centroid_x, centroid_y = centroid

	#get euclidean distance
	distance = ( (point_x - centroid_x) ** 2 ) + ( (point_y - centroid_y) ** 2 ) 
	distance = distance ** (0.5)

	return round(distance, 4)

def get_coordinates(points):
	#get coordinates for the points given in tuple form
	print("Please provide coordinates for the {} points. (x, y)".format(points))
	coordinates = []

	for coords in range(points):
		#read as a tuple i.e (x, y)
		user_coords = input()
		user_coords = user_coords.split(',')
		x, y = int(user_coords[0]), int(user_coords[1])

		coordinates.append((x, y))

	return coordinates

def get_coords(file_name):
	'''Get coordinates from a file.'''
	file_handle = open(file_name, "r")
	file_coords = []
	for content in file_handle:
		content = content.replace(' ', "").replace("\n", "").replace('"', "").split(',')
		coord = int(content[0]), int(content[1])

		file_coords.append(coord)

	return file_coords

def get_group_matrix(coords, centroid_one, centroid_two):
	'''Returns a group matrix'''
	euclid_distance = []
	grp_matrix = []

	for y in coords:
		#get distance for each point in regard to centroid one
		distance_one = euclidean_distance(y, centroid_one)

		#get distance for each point in regard to centroid two
		distance_two = euclidean_distance(y, centroid_two)

		euclid_distance.append((distance_one, distance_two))

		#group matrix condtions
		if distance_one > distance_two:
			grp_matrix.append((0, 1))
		elif distance_one < distance_two:
			grp_matrix.append((1, 0))

	return grp_matrix

def get_avg_centroid(x_y_index, coords):
	'''Returns new centroid coordinates if more than 1 point eppears in any cluster'''
	x_coords, y_coords = [], []
	for index in x_y_index:
		#new_points.append(coords[index])
		x, y = coords[index]
		x_coords.append(x)
		y_coords.append(y)

	#get average of both x and y coords
	x_coords = round(sum(x_coords) / (len(x_coords) * 1.0), 4)
	y_coords = round(sum(y_coords) / (len(y_coords) * 1.0), 4)

	centroid = (x_coords, y_coords)

	return centroid

def k_means_clustering(points):
	'''Return the group matrix given coordinates'''
	coords = get_coordinates(points)
	centroids = []
	euclid_distance = []
	group_distance = []
	grp_matrix = []

	#create an alphabet number mapping
	alphabets = dict(A = 1,B = 2,C = 3,D = 4,E = 5,F = 6,G = 7,H = 8,I = 9,J = 10,K = 11,L = 12,M = 13,
		N = 14,O = 15,P = 16,Q = 17,R = 18,S = 19,T = 20,U = 21,V = 22,W = 23,X = 24,Y = 25,Z = 26)

	#get two random centroids
	i = 0
	limit = 2
	#ensure that the points are not similar
	while i <= limit:
		k = random.randint(0, (points-1))
		if k not in centroids:
			centroids.append(k)
		
		if len(centroids) is not 2:
			limit *= 2
		else:
			break
		

	#get the centroids as per the above rand positions
	centroids = tuple(centroids)
	i, j = centroids
	centroid_one = coords[i]
	centroid_two = coords[j]

	print("\nRandom Centroids->",centroid_one, centroid_two)

	#get the group matrix
	grp_matrix = get_group_matrix(coords, centroid_one, centroid_two)

	while True:
		#iterate till group matrix is stable

		#get the number of points in each cluster
		a, b, m_index_values, n_index_values = [], [], [], []
		for index, x_y_values in enumerate(grp_matrix):
			m, n = x_y_values
			a.append(m)
			b.append(n)

			if m == 1:
				m_index_values.append(index)
			elif n == 1:
				n_index_values.append(index)

		cluster_one_elems = sum(a)
		cluster_two_elems = sum(b)

		if cluster_one_elems == 1:
			#use the same centroid from the previous one
			centroid_one = centroid_one

		elif cluster_one_elems > 1:
			#new centroid is the average of the elements
			centroid_one = get_avg_centroid(m_index_values, coords)

		if cluster_two_elems == 1:
			#use the same centroid used in the last iteration
			centroid_two = centroid_two

		elif cluster_two_elems > 1:
			#new centroid is the average of the elements
			centroid_two= get_avg_centroid(n_index_values, coords)
		
		print("New Centroids->",centroid_one, centroid_two)

		#get new group matrix
		new_grp_matrix = get_group_matrix(coords, centroid_one, centroid_two)

		#when no more change happens, stop iteration
		if new_grp_matrix == grp_matrix:
			return grp_matrix

		grp_matrix = new_grp_matrix



if __name__ == "__main__":
        guess = int(input('Enter the number of coordinates to input : '))
        print(k_means_clustering(guess))
	
