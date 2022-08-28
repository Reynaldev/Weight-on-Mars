#include<iostream>

int main()
{
    double weight;
    double totalWeight;

    std::cout << "Input item weight: ";
    std::cin >> weight;

    totalWeight = weight * 3.711;

    std::cout << "This item weighted: " << totalWeight << "Kg on Mars!";

    return 0;
}