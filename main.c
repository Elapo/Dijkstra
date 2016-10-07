#include <stdio.h>
#include "dijkstra.h"
#include "nodeMap.h"
int main(void)
{
    int p, i, j, start = 6, stop = 10, ret;
    NodeStruct nodes[12];
    for(i = 1; i < 12; i++){
            for(j = 0; j < 4; j++){
                nodes[i].Neighbours[j] = Data[i-1][j];
                nodes[i].Distance[j] = Data[i-1][j+4]; //vul de data in de nodes in
            }
        nodes[i].dv = -1; //zet dv en vorige node op "oneindig"
        nodes[i].previous = -1;
    }
    printf("Loaded Map.\n");
    ret = Dijkstra(nodes, 11, start, stop);
    printf("Shortest distance: %d\r\n", ret);
    printf("route, from end to start: \r\n %d", stop);
    p=stop;
    while(p != start){
        p = nodes[p].previous;//print route achterstevoren uit
        printf(" - %d", p);
    }
    return 0;
}