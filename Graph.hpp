#pragma once
#include <iostream>
#include "ArraySequence.hpp"
#include "Sequence.hpp"
#include "my_sorts.hpp"

using namespace std;


class Graph {
private:
    Sequence<int>* graph; // our Graph
    int n;

public:
    Graph(int* arr, int n);

    ~Graph() {
        delete graph;
    }

    void print_matrix();

private:
    int min_path(Sequence<int>* short_dist, Sequence<bool>* visited_vertexes);

    Sequence<int>* find_path(Sequence<int>* past_vertexes_path,
        Sequence<int>* short_dist,
        int start_vertex, int end_vertex);

public:
    Sequence<int>* Dijkstra(int start_vertex, int end_vertex);

    Sequence<int>* Ranges(int start_vertex);

    int path_distance(Sequence<int>* path);
};