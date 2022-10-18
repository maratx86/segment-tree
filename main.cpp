#include <iostream>
#include "Root.h"

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
    std::cout << "- (3, 4) -> " << root->segment_value(1,3) << std::endl;
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
    return 0;
}
