struct Data
{
    int a;
    int b;
    int c;
    int d;
    int e;
}

class Abc
{
public:
    Abc(){}
    ~Abc(){}
    void setBcaPtr(){
        Bca* bca = new Bca();
        for(/* какое-то условие */)
            QList<Data*>  listDataPtr= /* далее код запроса указателей на Data из бд */;
        bca->setData(listDataPtr);
    }
    
    void setBcaPtr(){
        Bca* bca = new Bca();
        for(/* какое-то условие */)
            QList<Data>  listData= /* далее код запроса объектов Data из бд */;
        bca->setData(listData);
    }
};

class Bca
{
public:
    Bca(){};    //constructor
    ~Bca(){};   //destructor
    setData(QList<Data*> &data);    // setter ptr
    setData(QList<Data> &data);     // setter obj
    /* далее не важно */
}

int main()
{

    return 0;
}
