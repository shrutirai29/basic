//C++ Program to show access to Private Public and Protected using inheritance
#include<iostream>
using namespace std;

class abc{
    private:
        int i = 20;
    protected:
        int j = 30;
    public: 
        int k = 40;
        int otherWay(){
            return i;
        }
};

class def : public abc{
    public:
    void putx(){
        //cout << "Public element = " << i;  i cannot be accesed
        cout << "\npublic element (from base class only): " << otherWay();
        cout << "\nprotected element: " << j;
        cout << "\npublic element: " << k;
    }
};

int main(){
    def f;
    f.putx();
}