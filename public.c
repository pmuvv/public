//структура 
     
typedef struct
{
    int         NA;     //Номер суток данных альманаха
    int         N4;     //Номер четырехлетнего периода
    int       Trcv;     //Время приема альманаха по ШВ АРН
    int         KP;     //Признак ожидаемой секундной коррекции,б/р.
    double    TAUc;     //Поправка к шкале времени системы ГЛОНАСС относительно UTC(SU),с.
    double  TAUgps;     //Поправка на расхождение системных шкал времени GPS(T_GPS) и ГЛОНАСС (Т_GLN),c
    double      B1;     //Коэффициент для определения DUT1,c
    double      B2;     //Коэффициент для определения DUT1,c/сутки
    gln_alm_nka_t NKA[GLN_N];//Альманахи НКА
} gln_alm_t;

class param_box             // абстрактный класс
{
public:
    virtual void get() = 0; // виртуальный метод получения информации
    virtual void put() = 0; // виртуальный метод добавления информации
private:
    bool flag = 0;
};

// реализация класса gln_alm_box
class gln_alm_box : public param_box
{
public:
    void get();                     //данный метод, должен возвращать данные типа gln_alm_t
    void put(gln_alm_t *inp_alm);   //этот должен возвращать какой-то флаг.
private:
    gln_alm_t alm_gln;
};

gln_alm_t gln_alm_box::get()
{
    if(flag == 0)
    {
        //flag = true;
        return alm_gln;
    }
}

gln_alm_box::put(gln_alm_t *inp_alm)
{
    if(flag == 0)
    {
        flag = true;
        alm_gln = inp_alm;
        flag = false;
    }
}
