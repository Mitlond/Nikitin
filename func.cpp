class human
{
 // свойства (переменные) класса
public:
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
