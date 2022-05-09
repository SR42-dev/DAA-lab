#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h> 

// number of vertices in graph
#define V 5

int main() 
{

	// a 2d array of size 5x5 as adjacency matrix to represent undirected graph
	int G[V][V] = 
	{
	
		{0, 9, 75, 0, 0},
		{9, 0, 95, 19, 42},
	 	{75, 95, 0, 51, 66},
		{0, 19, 51, 0, 31},
	 	{0, 42, 66, 31, 0}
	  
	};
	
	int no_edge;  // number of edges

	// create a array to track selected vertex
	int selected[V];

	// set all values in selected to be false initially
	memset(selected, false, sizeof(selected));
	  
	// set the number of edges to 0
	no_edge = 0;

	// initialize 0th vertex to true
	selected[0] = true;

	int x;  //  row number
	int y;  //  column number

	// print edge and weight
	printf("edge : weight\n");

	while (no_edge < V - 1) 
	{

		int min = INT_MAX;
		x = 0;
		y = 0;

		for (int i = 0; i < V; i++) if (selected[i]) for (int j = 0; j < V; j++) if (!selected[j] && G[i][j]) if (min > G[i][j]) 
		{
			  min = G[i][j];
			  x = i;
			  y = j;
		}
			  
		printf("%d, %d : %d\n", x, y, G[x][y]);
		selected[y] = true;
		no_edge++;
	
	}

	return 0;
	
}





