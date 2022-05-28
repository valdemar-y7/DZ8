#include "student.h"

int main()
{
    Student vladimir;
    cin >> vladimir;
    cout << vladimir;
    cout << endl;
    Student andrey;
    cin >> andrey;
    vladimir = andrey;
    cout << vladimir << endl;
}
