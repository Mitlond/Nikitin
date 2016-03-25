#include<iostream>
#include<clocale>

using namespace std;
class human
{

int age;
private: 
int weight;

    int height;
 
    
public: 
 void set_weight(int a)
    {
        weight = a;
    }
 
    void get_weight()
    {
        cout << weight << endl;
    }
 
    void set_height(int b)
    {
        height = b;
    }
 
    void get_height()
    {
        cout << height << endl;
    }
};
 
int main(){
 
    human Sonia;
 
    Sonia.age = 30;
    cout << Sonia.age << endl;
    
    Sonia.set_weight(50); 
    Sonia.get_weight(); 
    Sonia.set_height(168);
    Sonia.get_height();  
 
    system("pause > nul");
    return 0;
}
