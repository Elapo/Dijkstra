//
// Created by Frederik on 26/04/2016.
//

#ifndef DIJKSTRA_NODEMAP_H
#define DIJKSTRA_NODEMAP_H
#include "dijkstra.h"

int Data[11][8] = { //Tabel van mapdata
        {-1, 4,-1,-1,-1, 5,-1,-1},//Eerste 4 waarden zijn de buren, N, O, Z, W, respectievelijk
        {-1, 3,-1,-1,-1, 2,-1,-1},//Laatste 4 zijn de afstanden tot de buren, wederom N, O, Z, W
        {-1, 4, 7, 2,-1, 1, 2, 2},
        { 1, 5,-1, 3, 5, 1,-1, 1},
        {11, 9, 7, 4, 3, 1, 8, 1},
        {-1, 7,-1,-1,-1, 2,-1,-1},
        { 3, 5,-1, 6, 2, 8,-1, 2},
        { 9,-1,-1,-1, 2,-1,-1,-1},
        {11,-1, 8, 5, 1,-1, 2, 1},
        {11,-1,-1,-1, 5,-1,-1,-1},
        {-1,10, 9, 5,-1, 5, 1, 3}
};
#endif //DIJKSTRA_NODEMAP_H
