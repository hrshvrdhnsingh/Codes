#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double EPS = 1e-7;

// Function to calculate the Euclidean distance between two points
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// Function to check if the path from O to P can be covered with a given radius
bool canCoverPath(double radius, int Px, int Py, int Ax, int Ay, int Bx, int By) {
    double dist_PA = distance(Px, Py, Ax, Ay);
    double dist_PB = distance(Px, Py, Bx, By);
    double dist_AB = distance(Ax, Ay, Bx, By);

    // Calculate the distances from P to the line segment AB
    double dist_PAB = abs((Ax - By) * (Px - Ax) - (Ay - By) * (Py - Ay)) / dist_AB;

    return (dist_PA <= radius && dist_PB <= radius) || (dist_PAB <= radius);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int Px, Py, Ax, Ay, Bx, By;
        cin >> Px >> Py >> Ax >> Ay >> Bx >> By;

        double left = 0.0;
        double right = 1e10; // Maximum possible radius

        while (right - left > EPS) {
            double mid = (left + right) / 2.0;

            if (canCoverPath(mid, Px, Py, Ax, Ay, Bx, By)) {
                right = mid;
            } else {
                left = mid;
            }
        }

        cout << fixed << setprecision(10) << left << endl;
    }

    return 0;
}