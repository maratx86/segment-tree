#include <iostream>
#include "../includes/Root.h"

int sum(int a, int b) { return a + b; }
int min(int a, int b) { return (a < b) ? a : b; }
int max(int a, int b) { return (a > b) ? a : b; }

int main() {
    Root *root;

    std::cout << "Starting..." << std::endl;
    root = new Root(sum, std::vector<int> {0, 5, 9, 4});
    std::cout << "# Root(sum, {0, 5, 9, 4})" << std::endl;
    std::cout << "- (1, 4) -> " << root->segment_value(1, 4) << std::endl;
    std::cout << "- (1, 2) -> " << root->segment_value(1, 2) << std::endl;
    std::cout << "- (1, 3) -> " << root->segment_value(1, 3) << std::endl;
    std::cout << "- (2, 3) -> " << root->segment_value(2, 3) << std::endl;
    std::cout << "- (3, 4) -> " << root->segment_value(3, 4) << std::endl;
    delete root;

    std::cout << std::endl;
    root = new Root(min, std::vector<int> {0, 5, 9, 4});
    std::cout << "# Root(min, {0, 5, 9, 4})" << std::endl;
    std::cout << "- (1, 4) -> " << root->segment_value(1, 4) << std::endl;
    std::cout << "- (1, 2) -> " << root->segment_value(1, 2) << std::endl;
    std::cout << "- (1, 3) -> " << root->segment_value(1, 3) << std::endl;
    std::cout << "- (2, 3) -> " << root->segment_value(2, 3) << std::endl;
    std::cout << "- (3, 4) -> " << root->segment_value(3,4) << std::endl;
    delete root;

    std::cout << std::endl;
    root = new Root(max, std::vector<int> {0, 5, 9, 4});
    std::cout << "# Root(max, {0, 5, 9, 4})" << std::endl;
    std::cout << "- (1, 4) -> " << root->segment_value(1, 4) << std::endl;
    std::cout << "- (1, 1) -> " << root->segment_value(1, 1) << std::endl;
    std::cout << "- (1, 2) -> " << root->segment_value(1, 2) << std::endl;
    std::cout << "- (1, 3) -> " << root->segment_value(1, 3) << std::endl;
    std::cout << "- (2, 3) -> " << root->segment_value(2, 3) << std::endl;
    std::cout << "- (3, 4) -> " << root->segment_value(3, 4) << std::endl;
    delete root;

    std::cout << std::endl;
    root = new Root(min, std::vector<int> {5, 3, 0, 6, 2, 4, 9, 5});
    std::cout << "# Root(min, {5, 3, 0, 6, 2, 4, 9, 5})" << std::endl;
    std::cout << "- (1, 4) -> " << root->segment_value(1, 4) << std::endl;
    std::cout << "- (1, 2) -> " << root->segment_value(1, 2) << std::endl;
    std::cout << "- (1, 3) -> " << root->segment_value(1, 3) << std::endl;
    std::cout << "- (2, 3) -> " << root->segment_value(2, 3) << std::endl;
    std::cout << "- (3, 4) -> " << root->segment_value(3,4) << std::endl;
    std::cout << std::endl;
    std::cout << "- (4, 6) -> " << root->segment_value(4, 6) << std::endl;
    std::cout << "- (4, 5) -> " << root->segment_value(4, 5) << std::endl;
    std::cout << "- (3, 5) -> " << root->segment_value(3, 5) << std::endl;
    std::cout << "- (5, 8) -> " << root->segment_value(5, 8) << std::endl;
    std::cout << "- (6, 8) -> " << root->segment_value(6, 8) << std::endl;
    std::cout << "- (7, 8) -> " << root->segment_value(7, 8) << std::endl;
    std::cout << "- (4, 8) -> " << root->segment_value(4, 8) << std::endl;
    delete root;

    root = new Root(min, std::vector<int> {5, 3, 6, 2, 4, 9, 5});
    std::cout << "# Root(min, {5, 3, 6, 2, 4, 9, 5})" << std::endl;
    std::cout << "- (1, 4) -> " << root->segment_value(1, 4) << std::endl;
    std::cout << "- (1, 2) -> " << root->segment_value(1, 2) << std::endl;
    std::cout << "- (1, 1) -> " << root->segment_value(1, 1) << std::endl;
    std::cout << "- (6, 6) -> " << root->segment_value(6, 6) << std::endl;
    std::cout << "- (6, 7) -> " << root->segment_value(6, 7) << std::endl;
    delete root;
    return 0;
}
