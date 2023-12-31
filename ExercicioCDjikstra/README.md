# C. Dijkstra?

You are given a weighted undirected graph. The vertices are enumerated from 1 to n. Your task is to find the shortest path between the vertex 1 and the vertex n.

## Input
The first line contains two integers n and m (2 ≤ n ≤ 105, 0 ≤ m ≤ 105), where n is the number of vertices and m is the number of edges. Following m lines contain one edge each in form ai, bi and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai, bi are edge endpoints and wi is the length of the edge.

It is possible that the graph has loops and multiple edges between pair of vertices.

## Output
Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.

### Example  
#### Input:  
5 6  
1 2 2  
2 5 5  
2 3 4  
1 4 1  
4 3 3  
3 5 1  
#### Output:  
1 4 3 5   
## Resultado
![](../assets/exercicioDjikstra/aceito.png)
## Explicação do codigo

A explicação pode ser encontrada clicando [Aqui!](https://youtu.be/JYg526JoQZE)  
O vídeo também pode ser encontrado na pasta "Assets" do repositório!


## Referência

O exercício se encontra no link abaixo:
- [Codeforces](https://codeforces.com/contest/20/problem/C)