/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class ABC
{
private:
    int x, y, z;

public:
    ABC()
    {
        x = y = z = 0;
    }
    ABC(int p, int q, int r)
    {
        x = p;
        y = q;
        z = r;
    }
    void operator++()
    {
        x++;
        y++;
        z++;
    }
    void operator--()
    {
        x--;
        y--;
        z--;
    }
    void display()
    {
        cout << x << "  " << y << "  " << z << endl;
    }
};
int main(void)
{
    ABC ob(1, 2, 3);
    cout<<"\nOriginal => ";
    ob.display();

    cout<<"\nAfter Incrementing by 1 => ";
    ++ob;
    ob.display();
    cout<<"\nAfter Decrementing by 1 => ";
    --ob;
    ob.display();

    return 0;
}
//END OF LINE