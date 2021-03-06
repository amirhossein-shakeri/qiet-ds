#include <iostream>
#include <stdexcept>

using namespace std;

void permutation(string, int, int);
void print(string);

int main()
{
    permutation("ABC", 0, 3);
    return 0;
}

void permutation(string a, int start, int len)
{
    if (a == "" || start < 0 || len < 1 || start > len)
        return throw invalid_argument("Invalid Args");

    if (start == len - 1) 
        return print(a);

    for (int i = start; i < len; i++) {
        swap(a[start], a[i]);
        permutation(a, start + 1, len);
        swap(a[start], a[i]);
    }
}

void print(string a) {
    cout << a << endl;
}
