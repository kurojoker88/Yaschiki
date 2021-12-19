#include <iostream>
using namespace std;

class Yaschik{
    //
public:    
    int dl;
    int shir;
    int vys;
    
    int V();
    int S();
    
    Yaschik(int a=1, int b=1, int h=1){
        dl = a;
        shir = b;
        vys = h;
    }
    
    
    ~Yaschik(){cout <<"Ящик разрушен\n";}
};

int Yaschik::V(){
    return dl*shir*vys;
    }
int Yaschik::S(){
    return dl*shir;
    }

int main()
{
    Yaschik corob1(3,12,9);
    cout << "New Yaschik" << '\n';
    cout << "Volume: " <<corob1.V()<< '\n';
    cout << "Area: "<< corob1.S()<< '\n';
    Yaschik corob2(12,1,5);
    cout << "New Yaschik" << '\n';
    cout << "Volume: "<< corob2.V()<< '\n';
    cout << "Area: "<< corob2.S()<< '\n';
    Yaschik corob3(7,6,5);
    cout << "New Yaschik" << '\n';
    cout << "Volume: "<< corob3.V()<< '\n';
    cout << "Area: "<< corob3.S()<< '\n';

    return 0;
}

