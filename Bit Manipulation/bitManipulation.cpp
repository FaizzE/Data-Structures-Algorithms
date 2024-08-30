#include <iostream>
using namespace std;

void bitManipulation(int num, int i) {
    cout << ((num >> (i - 1)) & 1) << " ";
    cout << ((1 << (i - 1)) | num) << " ";
    cout << ((~(1 << (i - 1))) & num) << endl;
}

int main() {
    int num, i;
    cin >> num >> i;
    bitManipulation(num, i);
    
    return 0;
}
