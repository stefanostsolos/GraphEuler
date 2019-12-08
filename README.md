# GraphEuler
Given an undirected graph of N vertices and M edges, GraphEuler checks if there is an Eulerian cycle or path in the graph.
## Cycle or Path ?
If an Eulerian cycle is found, the program outputs "CYCLE".

In case there's not an Eulerian cycle, but an Eulerian path was found (from vertice u to vertice v, given that u < v), the program outputs "PATH u v".

No Eulerian cycle or path? The program outputs "IMPOSSIBLE"!
## What is an Eulerian Path / Eulerian Cycle?
In graph theory, an Eulerian trail or **Eulerian path** is a trail in a finite graph that visits every edge **exactly once** (allowing for revisiting vertices). Similarly, an Eulerian circuit or **Eulerian cycle** is an Eulerian trail that **starts and ends on the same vertex.**
