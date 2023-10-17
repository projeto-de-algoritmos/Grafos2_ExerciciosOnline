# Countries at War


In the year 2050, after several attempting of **ONU** to maintain the peace in world, exploded the third world war. Industrial secrets, commercials and military forced all countries to utilize extremely sophisticated espionage services, in order to have one spy of each country in each city in the world. These spies need to communicate with others spies, informants and even with both centrals during their actions. Unfortunately, there’s no safe way for a spy to communicate within a war building, therefore the messages are always sent in code so that only the receiver is able to read and understand it.

The spies use the only service available in war time, the post offices. Each city has one post office where letters can be sent. Letters can be sent directly to its destination or to other post offices, until it arrives to the post office of the intended city, if possible.

A post office in city **A** can send a printed letter directly to a post office in city B if there’s a letter sending agreement, which determines the time, measured in hours, that a letter takes to travel from city **A** to city **B** (and not necessarily the opposite). If there’s no agreement between the cities, then post office A can try to send the letter to as many other post offices as necessary, until it is delivered to its destination, if possible.
Some post offices are electronically interconnected with satellites and optical fiber. Before war, these connections could reach all offices, making a letter to be sent instantly, but during hostilities period, each country began to control the electronic communication, and one office can only send a letter electronically to other, if both offices are in the same country. Two post offices, **A** and **B**, are in the same country if there’s any way that a printed letter sent from one office is delivered in the other one.

The espionage service of your country was able to obtain all letter sending agreements in the world e wishes to find out the minimum time for sending a letter between various pairs of cities. Would you be able to help it?

## Input
The input contains several test cases. The first line of each case contains two integers separated by a White space, **N** (1 ≤ **N** ≤ 500) and **E** (0 ≤ **E** ≤ **N²**), indicating the number of cities (enumerated from 1 to **N**) and of letter sending agreements, respectively. Follow, then, **E** lines, each one with three integers separated by a White space, **X**, **Y** and **H** (1 ≤ **X**, **Y** ≤ **N**, 1 ≤ **H** ≤ 1000), indicating that there is an agreement to sending a printed letter from city **X** to city **Y**, and that this letter will be delivered in **H** hours.

Next, there will be a line with an integer **K** (0 ≤ **K** ≤ 100), the number of queries. Finally, **K** lines of input, each one representing a query that contains two integers separated by a white space, **O** and **D** (1 ≤ **O**, **D** ≤ **N**). You should determine the minimum time for sending a letter from city **O** to city **D**. The end of input is determined by **N = E = 0**. 

## Output
For each test case, your program must output **K** lines. The **N**-th line should contain an integer **M**, the minimum time in hours, for sending a letter in the **N**-th query. If there’s no communication way between the cities of the query, you should print: "Nao e possivel entregar a carta" ( 'The letter could not be delivered' in portuguese).

Print a blank line after each case.

### Example  
#### Input:  
4 5  
1 2 5  
2 1 10  
3 4 8  
4 3 7  
2 3 6  
5  
1 2  
1 3  
1 4  
4 3  
4 1  
3 3  
1 2 10  
2 3 1  
3 2 1  
3  
1 3  
3 1  
3 2  
0 0  
#### Output:  
0  
6  
6  
0  
Nao e possivel entregar a carta  

10  
Nao e possivel entregar a carta  
0  
## Resultado
![](../assets/exercicioGuerra/accepted.png)
## Explicação do codigo

A explicação pode ser encontrada clicando [Aqui!](https://youtu.be/bUN6E2yo_j0)  
O vídeo também pode ser encontrado na pasta "Assets" do repositório!


## Referência

O exercício se encontra no link abaixo:
- [Beecrowd](https://www.beecrowd.com.br/judge/en/problems/view/1148)
