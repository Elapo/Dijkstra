//
// Created by Frederik on 26/04/2016.
//

#include "dijkstra.h"
int Dijkstra(NodeStruct* map, int mapSize, int start, int finish){
    int currentNode, smallestDist, i, cnt = 0, neighbour;
    int visited[mapSize];
    for(i = 1; i < mapSize+1; i++){
        visited[i] = 0;
    }
    map[start].dv = 0;//dv van start = 0
    currentNode = start;
    while(cnt <= mapSize){
        //DV van buren berekenen
        for(i=0; i < 4; i++){
            neighbour = map[currentNode].Neighbours[i];
            if(neighbour != -1 && visited[neighbour] == 0){
                int tempdv = map[currentNode].dv + map[currentNode].Distance[i];
                if(map[neighbour].dv == -1 || map[neighbour].dv > tempdv){
                    map[neighbour].dv = tempdv;
                    map[neighbour].previous= currentNode;//previous kunnen we gebruiken later om de kortste route te zoeken
                }
            }
        }
        //Huidige node = bezocht
        visited[currentNode] = 1;
        cnt++;
        //Volgende node zoeken: kleinste DV & nog niet bezocht
        smallestDist = 100;
        for(i=1; i<mapSize+1; i++){
            if(visited[i] == 0 && map[i].dv < smallestDist && map[i].dv != -1){//-1 = infinite
                smallestDist=map[i].dv;
                currentNode = i;
            }
        }
    }

    return map[finish].dv;
}
