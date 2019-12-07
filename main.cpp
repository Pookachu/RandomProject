#include <iostream>

class nothing
{
  public:
    void PrintName()
    {
        std::cout << "PrintName: ";
        std::cout << "|" << name1 << name2 << "| " << std::endl;
    }

    void SetName(int a, int b)
    {
        name1 = a;
        name2 = b;
        std::cout << "SetName: ";
        std::cout << "| Fed: " << a << " " << b << " | Result: " << name1 << " " << name2 << " | " << std::endl;
        PrintName();
    }

  private:
    int name1;
    int name2;
};

nothing blank[4][4];

void NameAll()
{
    int x = 0;
    int y = 0;
    while(x < 5)
    {
        y=0;
        while(y < 5)
        {
            std::cout << "LoopName values: x: " << x << " y: " << y << std::endl;
            blank[x][y].SetName(x, y);
            y++;
        }
        std::cout << std::endl;
        x++;
    }
    /*
        for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            std::cout << "LoopName values: x: " << x << " y: " << y << std::endl;
            blank[x][y].SetName(x, y);
        }
        std::cout << std::endl;
    }
    */
}

void PrintAll()
{
    int a = 0;
    int b = 0;
    while (a < 5)
    {
        b=0;
        while (b < 5)
        {
            std::cout << "LoopPrint values: x: " << a << " b: " << b << std::endl;
            blank[a][b].PrintName();
            b++;
        }
        std::cout << std::endl;
        a++;
    }
    /*
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            std::cout << "LoopPrint values: a: " << a << " b: " << b << std::endl;
            blank[a][b].PrintName();
        }
        std::cout << std::endl;
    }
    */
}

int main()
{
    std::cout << "Assigning" << std::endl;
    NameAll();
    std::cout << "Printing" << std::endl;
    //PrintAll();
    std::cout << "Testing" << std::endl;
    test();
    PrintAll();
    return 0;
}