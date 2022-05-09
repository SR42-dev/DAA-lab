#include <stdio.h>

int main()
{
	int n = 6; // number of vertices, elements are represented by number
	int graphadj[][] = {{0, 1, 0, 0, 0, 0}}; // row major ordering, boolean, in degree -> columns, out degree -> rows
	int result[n];
	int indegree0[n];
	
	int status = 0;
	int indegreeIndex= 0;
	for(int i = 0; i < n; i++) 
	{
		for(int j = 0; j < n; j++) if(graphadj[j][i] == 1) status++;
		if (status != 0) indegree0[indegreeIndex++] = i;
	}
	
	while(i < indegreeIndex) // carry on from here
	
	return 0;
}
