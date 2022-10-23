//
// Created by Marat on 2022-10-18.
//

#include "../includes/Root.h"

Root::Root(int (*func)(int, int), const std::vector<int> &values)
           : Node(values, 1, values.size(), func) {

}

Root::~Root() {
    if (left) {
        delete left;
        left = nullptr;
    }
    if (right) {
        delete right;
        right = nullptr;
    }
}

int Root::segment_value(int start, int end) {
    return this->get_from(start, end);
}
