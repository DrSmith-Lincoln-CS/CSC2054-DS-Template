#include<iostream>

using namespace std;

void func1(int n) {
    for (int i = 0; i < n; i++)
        std::cout << i << std::endl;
}

void func2(int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cout << i << j << std::endl;
}
