#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;

    vector <vector<int>> vector2D {};
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    cout << vector2D.at(0).at(0) << endl;
    cout << vector2D.at(1).at(0) << endl;  // must have two indices or exception will be raised

    vector1.at(0) = 1000;
    cout << vector2D.at(0).at(0) << endl;  // notice vector1 does not have influence on vector2D
    // we make copies of what we're putting into the vectors, no references or pointers, yet.
    cout << vector2D.at(1).at(0) << endl;
    cout << vector1.at(0) << endl;

    return 0;
}
