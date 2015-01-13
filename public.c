class Abc
{
private:
    int* x;
    int size;
public:
    Abc(int num){x = new int[num]; size = num;}
    ~Abc(){delete[] x;}
    void take(int *a, int num);
    void put();
};

void Abc::take(int *a, int num)
{
    if(num >= 0 && num <= size)
    {
        x[num] = a;
    }
}
void Abc::put()
{
    for(int i=0;i<size;i++)
    {
        std::cout << "x[" << i << "] = " << x[i] << std::endl;
    }
}

double scal_vect(double *x, double *y);

int main()
{
    Abc *t = new Abc(5);
    int inp = 10;
    t->take(&inp, 0);
    t->take(&inp, 1);
    t->take(&inp, 2);
    t->take(&inp, 3);
    t->put();

    return 0;
}
