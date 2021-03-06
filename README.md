# Machine-Learning-Algorithms-Toolkit
An implementation of various machine Learning Algorithms


ADALINE
GENETIC ALGORITHM
DECISION TREE
K MEANS
SELF ORGANISING MAPS
REINFORCEMENT LEARNING

ADALINE
1. Initialise weights (W1...Wn) and threshold (W0)
2.  	Set all weights and threshold to small random bipolar random values
3. Present new input and desired output
a. present input vector x1,x2,...xn along with the desired output d(t)
4. Calculate the actual output[y(t)]
a. y(t) = Fh[Σwi(t)*xi(t) ]
5. Adapt weights 
Wit+1()=Wi(t)+ηd(t)−{i=1n}∑Wi(t)Xi(t)Xi(t)
0 < i < n and η is the learning rate and usually is a small number ranging from 0 to 1.
6.Repeat step 2 to 4
Repeat until the desired outputs and the actual network outputs are all equal for all the input vectors of the training set.


GENETIC ALGORITHM.

STEPS
At the beginning of a run of a genetic algorithm a large population of random chromosomes is created. Each one, when decoded will represent a different solution to the problem at hand. Let's say there are N chromosomes in the initial population. Then, the following steps are repeated until a solution is found
Test each chromosome to see how good it is at solving the problem at hand and assign a fitness score accordingly. The fitness score is a measure of how good that chromosome is at solving the problem to hand.
Select two members from the current population. The chance of being selected is proportional to the chromosomes fitness. Roulette wheel selection is a commonly used method.
Dependent on the crossover rate crossover the bits from each chosen chromosome at a randomly chosen point.
Step through the chosen chromosomes bits and flip dependent on the mutation rate.
Repeat step 2, 3, 4 until a new population of N members has been created.


BACKPROPAGATION

Pseudo code
Initialize all weights with small random numbers, typically between -1 and 1 
repeat 
	for every pattern in the training set 
    	Present the pattern to the network 
//    	Propagated the input forward through the network: 
        	for each layer in the network 
            	for every node in the layer 
                	1. Calculate the weight sum of the inputs to the node 
                	2. Add the threshold to the sum 
                	3. Calculate the activation for the node 
            	end 
        	end 
//    	Propagate the errors backward through the network 
         	for every node in the output layer 
            	calculate the error signal 
        	end 
        	for all hidden layers 
            	for every node in the layer 
                	1. Calculate the node's signal error 
                	2. Update each node's weight in the network 
            	end 
        	end 
//    	Calculate Global Error 
        	Calculate the Error Function 
	end 
while ((maximum  number of iterations < than specified) AND 
      	(Error Function is > than specified))




DECISION TREE

Pseudo code
1. Check for base cases
2. For each attribute a
1. Find the normalized information gain ratio from splitting on a
3. Let a_best be the attribute with the highest normalized information gain
4. Create a decision node that splits on a_best
5. Recurse on the sublists obtained by splitting on a_best, and add those nodes as children of node
K MEANS
Flow chart

Pseudo code
Make initial guesses for the means m1, m2, ..., mk
Until there are no changes in any mean
Use the estimated means to classify the samples into clusters
For i from 1 to k
Replace mi with the mean of all of the samples for cluster i
end_for

SELF ORGANISING MAPS

Pseudo code
Initialize weights
          For 0 to N number of training epochs
                   Select a sample from the input data set
                    Find the "winning" neuron for the sample input
                    Adjust the weights of nearby neurons

End for loop

The stages of the SOM algorithm that achieves this can be summarised as follows:
1. Initialization – Choose random values for the initial weight vectors wj
2. Sampling – Draw a sample training input vector x from the input space.
3. Matching – Find the winning neuron I(x) that has weight vector closest to the input vector
4. Updating – Apply the weight update equation 
5. Continuation – keep returning to step 2 until the feature map stops changing.




REINFORCEMENT LEARNING
Pseudocode
For each s, a, initialize table entry Q(s,a) <- 0
Observe current state s
Do forever:
    Select an action a and execute it
    Receive immediate reward r
    Observe the new state s'
    Update the table entry for Q(s, a) a
This procedural approach can be translated into steps as follows:
1. Initialize the Q-values table, Q(s, a).
2. Observe the current state, s.
3. Choose an action, a, for that state 
4. Take the action, and observe the reward, r, as well as the new state, s'.
5. Update the Q-value for the state using the observed reward and the maximum reward possible for the next state. The updating is done according to the formula and parameters described above.
6. Set the state to the new state, and repeat the process until a terminal state is reached.




 
