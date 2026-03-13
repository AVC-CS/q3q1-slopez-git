#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;


    double root1, root2;


    cin >> a >> b >> c;


    double discriminant = b * b - 4 * a * c;

    root1 = (-b + sqrt(discriminant)) / (2 * a);


    root2 = (-b - sqrt(discriminant)) / (2 * a);
    

    if (root2 > root1) {
        swap(root1, root2);
    }

    cout << setprecision(2) << fixed;
    cout << "Roots: " << root1 << " " << root2 << endl;
        return 0;
}
