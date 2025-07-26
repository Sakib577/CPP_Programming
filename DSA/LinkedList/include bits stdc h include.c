Tower of Hanoi
#include<bits/stdc++.h>
using namespace std;
// Global stacks representing rods
stack<int> A, B, C;

void moveDisk(char from, char to) {
    int disk;
    if (from == 'A') {
        disk = A.top();
        A.pop();
    } else if (from == 'B') {
        disk = B.top();
        B.pop();
    } else {
        disk = C.top();
        C.pop();
    }
    if (to == 'A') {
        A.push(disk);
    } else if (to == 'B') { 
        B.push(disk);
    } else {
        C.push(disk);
    }
    cout << "Move disk " << disk << " from " << from << " to " << to << endl;
}

void towerOfHanoi(int n, char src, char aux, char dest) {
    if (n == 1) {
        moveDisk(src, dest);
        return;
    }
    towerOfHanoi(n - 1, src, dest, aux);
    moveDisk(src, dest);
    towerOfHanoi(n - 1, aux, src, dest);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    // Push disks into rod A (largest at bottom)
    for (int i = n; i >= 1; i--) {
        A.push(i);
    }
    cout << "Steps to solve Tower of Hanoi with " << n << " disks:\n";
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
