//
// Created by Marat on 2022-10-17.
//

#include "Node.h"

Node::Node(int index, int value) {
    this->value = value;
    this->left = nullptr;
    this->right = nullptr;
    this->index_start = index;
    this->index_end = index;
}

Node::Node(std::vector<int> values, int start, int end, int (*func)(int, int)) {
    this->func = func;
    this->index_start = start;
    this->index_end = end;
    int count = end - start + 1;
    if (count == 1)
    {
        this->value = values[start - 1];
        this->left = nullptr;
        this->right = nullptr;
        return;
    }
    else if (count == 2)
    {
        this->left = new Node(start, values[start - 1]);
        this->right = new Node(end, values[end - 1]);
        this->value = func(values[start - 1], values[end - 1]);
    }
    else
    {
        this->left = new Node(values, start, start + count / 2 - 1, func);
        this->right = new Node(values, start + count / 2, end, func);
        this->value = this->func(this->left->get_value(), this->right->get_value());
    }
}

Node::~Node() {
    if (left) {
        delete left;
        left = nullptr;
    }
    if (right) {
        delete right;
        right = nullptr;
    }
}

bool Node::is_leaf() {
    return (!this->right && !this->left);
}

int Node::get_value() {
    return this->value;
}

bool Node::is_index_inside(int index) {
    return this->index_start <= index && index <= this->index_end;
}

int Node::get_from(int start, int end) {
    if (start == 0) start = this->index_start;
    if (end == 0) end = this->index_end;
    if (this->index_start == start && this->index_end == end)
        return this->value;
    if (this->left->is_index_inside(start))
    {
        if (this->left->is_index_inside(end))
            return this->left->get_from(start, end);
        else
        {
            return this->func(
                    this->left->get_value(),
                    this->right->get_from(0, end)
                    );
        }
    }
    return this->right->get_from(start, end);
}
