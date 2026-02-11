#include <iostream>

class QuadrantChooser
{
private:
    int xPoint;
    int yPoint;
public:
    QuadrantChooser() : xPoint(0), yPoint(0) {}
    QuadrantChooser(int inputX, int inputY) : xPoint(inputX), yPoint(inputY){}
    
    void Discriminator()
    {
        if(xPoint > 0 && yPoint > 0)
        {
            std::cout << "1" <<std::endl;
        }
        else if (xPoint < 0 && yPoint > 0)
        {
            std::cout << "2" <<std::endl;
        }
        else if (xPoint < 0 && yPoint < 0)
        {
            std::cout << "3" <<std::endl;
        }
        else if (xPoint > 0 && yPoint < 0)
        {
            std::cout << "4" <<std::endl;
        }
    }
};


int main(int argc, char* argv[])
{
    int numX;
    int numY;
    
    std:: cin >> numX;
    std::cin >> numY;
    
    QuadrantChooser myQc(numX, numY);
    myQc.Discriminator();
    
    return 0;
}
