#include <iostream>

using namespace std;

int x, y, count;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> x >> y;

    for (int i = 1; i < x; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            count += 31;
        else if (i == 2)
            count += 28;
        else
            count += 30;
    }
    count += y;
    
    int fin = count % 7;

    switch (fin) {
        case 0:
            cout << "SUN";
            break;
        case 1:
            cout << "MON";
            break;
        case 2:
            cout << "TUE";
            break;
        case 3:
            cout << "WED";
            break;
        case 4:
            cout << "THU";
            break;
        case 5:
            cout << "FRI";
            break;
        case 6:
            cout << "SAT";
            break;
        default:
            break;
    }
}