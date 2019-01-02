﻿#ifndef FLOYD_H
#define FLOYD_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Graph_DG {
public:
    int vexnum; //图的顶点个数
    int edge; //图的边数
    double **arc; //邻接矩阵
    double ** dis; //记录各个顶点最短路径的信息
    int ** path; //记录各个最短路径的信息
    std::vector<int> routeId;
    Graph_DG(int vexnum, int edge);
    ~Graph_DG();
    void printMatrix(); //打印邻接矩阵
    void Floyd(); //求最短路径
    void generateRoute(int start=13,int end=14); //生成最短路径
    void printRoute();
};

#endif // FLOYD_H
