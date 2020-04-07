/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 5 APRIL 2020
STUDI KASUS 2 - PRAKTIKUM DESAIN DAN ANALISIS ALGORITMA
*/

#include "graph.hpp"
#include <iostream>

void print(int data) { std::cout << data << ' '; }

int main(int argc, char const **argv)
{
    const size_t graph_size = 8;
    Analgo::Graph<int> g(graph_size);

    g.add_edge(1, 2);
    g.add_edge(1, 3);
    g.add_edge(2, 3);
    g.add_edge(2, 4);
    g.add_edge(2, 5);
    g.add_edge(3, 5);
    g.add_edge(3, 7);
    g.add_edge(3, 8);
    g.add_edge(4, 5);
    g.add_edge(5, 6);
    g.add_edge(7, 8);

    try
    {
        std::cout << "Adjacency List dari Graf tersebut:\n";
        for (const auto &node1 : g)
        {
            std::cout << node1.first << "\t";
            for (const auto &node2 : g)
            {
                if (g.is_edge(node1.first, node2.first))
                {
                    std::cout << node2.first << " -> ";
                }
            }
            std::cout << '\n';
        }
    }

    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}