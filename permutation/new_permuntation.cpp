#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

std::vector<int> new_permutation(const std::vector<int>& elements) {
    std::vector<int> new_permutation = elements;  // Copy the original elements

    // Use std::next_permutation to generate permutations
    std::next_permutation(new_permutation.begin(), new_permutation.end());

    // Shuffle the elements to get a random permutation
    std::random_shuffle(new_permutation.begin(), new_permutation.end());

    return new_permutation;
}

int main() {
    // Example usage
    std::vector<int> elements = {1, 2, 3};
    
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Get a new permutation
    std::vector<int> result = new_permutation(elements);

    // Print the new permutation
    std::cout << "New Permutation: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}