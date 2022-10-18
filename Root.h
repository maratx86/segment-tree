//
// Created by Marat on 2022-10-18.
//

#ifndef SEGMENT_TREE_ROOT_H
#define SEGMENT_TREE_ROOT_H

#include "Node.h"

class Root: protected Node {
public:
    Root(int (*func)(int, int), std::vector<int> values);
    ~Root();
    int segment_value(int start, int end);
};


#endif //SEGMENT_TREE_ROOT_H
