#include <iostream>
#include <string>

using namespace std;

class Longboard
{
    double deck_length;

  public:
    Longboard(double d_in) : deck_length(d_in) {}
    double get_deck_length() const
    {
        return deck_length;
    }

    double operator+(const Longboard &l_in1);
};

double Longboard::operator+(const Longboard &l_in1)
{
    return deck_length + l_in1.deck_length;
}
// double operator+(const Longboard &l_in1,
//                  const Longboard &l_in2)
// {
//     return l_in1.get_deck_length() +
//            l_in2.get_deck_length();
// }

int main(int argc, char **argv)
{
    Longboard l1(8);
    Longboard l2(10);
    l1.get_deck_length();
    double d1 = l1 + l2;
    cout << d1 << endl;
    cout << l1 + l2 << endl;

    return 0;
}
