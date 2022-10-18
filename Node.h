//
// Created by Marat on 2022-10-17.
//

#ifndef SEGMENT_TREE_NODE_H
#define SEGMENT_TREE_NODE_H

#include <vector>

class Node {
protected:
    Node *left;
    Node *right;
    int index_start;
    int index_end;
    int value;
    int (*func)(int, int);
public:
    Node(int index, int value);
    Node(std::vector<int> values, int start, int end, int (*func)(int, int));
    ~Node();
    bool is_leaf();
    int get_value();
    bool is_index_inside(int index);
    int get_from(int start, int end);
};


#endif //SEGMENT_TREE_NODE_H
