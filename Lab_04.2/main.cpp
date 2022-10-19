#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double x, xp, xk, dx, A, B, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
         << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 3*(abs(x)*abs(x)*abs(x));
        if (x<=-0.1)
            B = 5*cos(18*x);
        else
            if (x>=1.2)
                B = (1/tan(x))+18;
            else
                B = atan2(x+2, 5);
        y = A - B;
        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    
    return 0;
}
