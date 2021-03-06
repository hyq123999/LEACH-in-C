/*
 *  Implementation of Mohammad Hossein Homaei's LEACH simulator, in C.
 *  Joseph Finnegan
 *  joseph.finnegan@cs.nuim.ie
 *  2017
 */

#include "netArchitecture.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef NODEARCHITECTURE_H
#define NODEARCHITECTURE_H

#define MAX_NODES 300

typedef struct Node {
	int x;
	int y;
	char type;
	float G;
	float energy;
	int clusterHead;
	int dead;
} Node;

typedef struct NodeArch {
	int numNode;
	int numDead;
	Node node[MAX_NODES];
} NodeArch;

struct NodeArch* newNodes(NetArch* netA, int numNodes);

#endif /* NODEARCHITECTURE_H */

