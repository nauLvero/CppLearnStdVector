#include <iostream>
#include <vector>
using namespace std;

void showVector(vector<int> p_vector)
{
    auto itVec = p_vector.begin(); // auto - zastepczy typ zmiennej begin()zwraca pierwszy iterator
    for (itVec; itVec != p_vector.end(); itVec++)
    {
        cout << "|" << *itVec;
    };
    cout << "|" << endl;
};

int main()
{
    vector<int> vector1{2, 3, 4, 5, 6, 18};
    vector<int> vector2{1, 5, 7, 3, 5, 3, 21, 31};
    showVector(vector1);
    showVector(vector2);
    return 0;
};