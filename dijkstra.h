//
// Created by Frederik on 26/04/2016.
//

#ifndef DIJKSTRA_DIJKSTRA_H
#define DIJKSTRA_DIJKSTRA_H
typedef struct {
    int Neighbours[4];
    int Distance[4];

    int dv;
    int previous;
}NodeStruct;

int Dijkstra(NodeStruct* map, int mapSize, int start, int finish);



#endif //DIJKSTRA_DIJKSTRA_H
