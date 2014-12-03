//структура 
typedef struct
{
    double P;           
    double fL;          
    double (*DN)[2];   //указатели на указатели
} param_nka_t;

void init_trans_sign(int SRNS, int nf, param_nka_t *paramNKA)
{
    switch( SRNS )
    {
    case 1:     //данные GLONASS
    {
        paramNKA->fL = GLN_f01 + nf*GLN_df1; //[Gz]
        paramNKA->P  = 18.0618;              //[dB]
        //инициализация ДН
        paramNKA->DN[0][0]  = 0;  paramNKA->DN[0][1]  = 10.7;
        paramNKA->DN[1][0]  = 9;  paramNKA->DN[1][1]  = 11.763636;
        paramNKA->DN[2][0]  = 10; paramNKA->DN[2][1]  = 11.881818;
        paramNKA->DN[3][0]  = 11; paramNKA->DN[3][1]  = 12;
        paramNKA->DN[4][0]  = 12; paramNKA->DN[4][1]  = 12;
        paramNKA->DN[5][0]  = 15; paramNKA->DN[5][1]  = 12;
        paramNKA->DN[6][0]  = 19; paramNKA->DN[6][1]  = 9;
        paramNKA->DN[7][0]  = 20; paramNKA->DN[7][1]  = 7;
        paramNKA->DN[8][0]  = 21; paramNKA->DN[8][1]  = 5.5;
        paramNKA->DN[9][0]  = 22; paramNKA->DN[9][1]  = 4;
        paramNKA->DN[10][0] = 23; paramNKA->DN[10][1] = 2.7;
        paramNKA->DN[11][0] = 24; paramNKA->DN[11][1] = 1.5;
        paramNKA->DN[12][0] = 25; paramNKA->DN[12][1] = 0;
        paramNKA->DN[13][0] = 30; paramNKA->DN[13][1] = -5;
        paramNKA->DN[14][0] = 35; paramNKA->DN[14][1] = -4.375;
        paramNKA->DN[15][0] = 40; paramNKA->DN[15][1] = -5.875;
        paramNKA->DN[16][0] = 45; paramNKA->DN[16][1] = -7.875;
        paramNKA->DN[17][0] = 50; paramNKA->DN[17][1] = -8.25;
        paramNKA->DN[18][0] = 55; paramNKA->DN[18][1] = -10.875;
        paramNKA->DN[19][0] = 60; paramNKA->DN[19][1] = -12.75;

        break;
    }
    case 2:     //данные GPS
    {
        paramNKA->fL = 1575420000;           //[Gz]
        paramNKA->P  = 18.4967;              //[dB]

        paramNKA->DN[0][0]  = 0;  paramNKA->DN[0][1]  = 13;
        paramNKA->DN[1][0]  = 5;  paramNKA->DN[1][1]  = 13.8;
        paramNKA->DN[2][0]  = 6;  paramNKA->DN[2][1]  = 14;
        paramNKA->DN[3][0]  = 8;  paramNKA->DN[3][1]  = 14.7;
        paramNKA->DN[4][0]  = 9;  paramNKA->DN[4][1]  = 14.9;
        paramNKA->DN[5][0]  = 10; paramNKA->DN[5][1]  = 15;
        paramNKA->DN[6][0]  = 19; paramNKA->DN[6][1]  = 14.9;
        paramNKA->DN[7][0]  = 20; paramNKA->DN[7][1]  = 14.7;
        paramNKA->DN[8][0]  = 21; paramNKA->DN[8][1]  = 13.7;
        paramNKA->DN[9][0]  = 22; paramNKA->DN[9][1]  = 6;
        paramNKA->DN[10][0] = 23; paramNKA->DN[10][1] = 0;
        paramNKA->DN[11][0] = 24; paramNKA->DN[11][1] = -10;
        paramNKA->DN[12][0] = 25; paramNKA->DN[12][1] = -8;
        paramNKA->DN[13][0] = 30; paramNKA->DN[13][1] = -5;
        paramNKA->DN[14][0] = 35; paramNKA->DN[14][1] = -3;
        paramNKA->DN[15][0] = 40; paramNKA->DN[15][1] = -2;
        paramNKA->DN[16][0] = 45; paramNKA->DN[16][1] = -3;
        paramNKA->DN[17][0] = 50; paramNKA->DN[17][1] = -5;
        paramNKA->DN[18][0] = 55; paramNKA->DN[18][1] = -10;
        paramNKA->DN[19][0] = 60; paramNKA->DN[19][1] = -15;
        break;
    }
    case 3:     //данные GALILEO
    {
        paramNKA->fL = 1575420000;           //[Gz]
        paramNKA->P  = 19.7077;              //[dB]

        paramNKA->DN[0][0]  = 0;       paramNKA->DN[0][1]  = 13;
        paramNKA->DN[1][0]  = 4.3601;  paramNKA->DN[1][1]  = 13.8;
        paramNKA->DN[2][0]  = 5.2321;  paramNKA->DN[2][1]  = 14;
        paramNKA->DN[3][0]  = 6.9761;  paramNKA->DN[3][1]  = 14.7;
        paramNKA->DN[4][0]  = 7.8481;  paramNKA->DN[4][1]  = 14.9;
        paramNKA->DN[5][0]  = 8.7201;  paramNKA->DN[5][1]  = 15;
        paramNKA->DN[6][0]  = 9.5921;  paramNKA->DN[6][1]  = 14.9;
        paramNKA->DN[7][0]  = 10.4641; paramNKA->DN[7][1]  = 14.7;
        paramNKA->DN[8][0]  = 12.2081; paramNKA->DN[8][1]  = 13.7;
        paramNKA->DN[9][0]  = 15.6962; paramNKA->DN[9][1]  = 6;
        paramNKA->DN[10][0] = 17.4402; paramNKA->DN[10][1] = 0;
        paramNKA->DN[11][0] = 19.1842; paramNKA->DN[11][1] = -10;
        paramNKA->DN[12][0] = 20.0562; paramNKA->DN[12][1] = -8;
        paramNKA->DN[13][0] = 20.9283; paramNKA->DN[13][1] = -5;
        paramNKA->DN[14][0] = 22.6723; paramNKA->DN[14][1] = -3;
        paramNKA->DN[15][0] = 26.1603; paramNKA->DN[15][1] = -2;
        paramNKA->DN[16][0] = 29.6484; paramNKA->DN[16][1] = -3;
        paramNKA->DN[17][0] = 31.3924; paramNKA->DN[17][1] = -5;
        paramNKA->DN[18][0] = 33.1364; paramNKA->DN[18][1] = -10;
        paramNKA->DN[19][0] = 34.8804; paramNKA->DN[19][1] = -15;
        break;
    }
    case 4:     //данные COMPASS
    {
        paramNKA->fL = 1561098000;           //[Gz]
        paramNKA->P  = 19.7077;              //[dB]

        paramNKA->DN[0][0]  = 0;       paramNKA->DN[0][1]  = 13;
        paramNKA->DN[1][0]  = 4.6972;  paramNKA->DN[1][1]  = 13.8;
        paramNKA->DN[2][0]  = 5.6367;  paramNKA->DN[2][1]  = 14;
        paramNKA->DN[3][0]  = 7.5156;  paramNKA->DN[3][1]  = 14.7;
        paramNKA->DN[4][0]  = 8.4550;  paramNKA->DN[4][1]  = 14.9;
        paramNKA->DN[5][0]  = 9.3945;  paramNKA->DN[5][1]  = 15;
        paramNKA->DN[6][0]  = 10.3339; paramNKA->DN[6][1]  = 14.9;
        paramNKA->DN[7][0]  = 11.2734; paramNKA->DN[7][1]  = 14.7;
        paramNKA->DN[8][0]  = 13.1523; paramNKA->DN[8][1]  = 13.7;
        paramNKA->DN[9][0]  = 16.9101; paramNKA->DN[9][1]  = 6;
        paramNKA->DN[10][0] = 18.789;  paramNKA->DN[10][1] = 0;
        paramNKA->DN[11][0] = 20.6678; paramNKA->DN[11][1] = -10;
        paramNKA->DN[12][0] = 21.6073; paramNKA->DN[12][1] = -8;
        paramNKA->DN[13][0] = 22.5467; paramNKA->DN[13][1] = -5;
        paramNKA->DN[14][0] = 24.4256; paramNKA->DN[14][1] = -3;
        paramNKA->DN[15][0] = 28.1834; paramNKA->DN[15][1] = -2;
        paramNKA->DN[16][0] = 31.9412; paramNKA->DN[16][1] = -3;
        paramNKA->DN[17][0] = 33.8201; paramNKA->DN[17][1] = -5;
        paramNKA->DN[18][0] = 35.699;  paramNKA->DN[18][1] = -10;
        paramNKA->DN[19][0] = 37.5779; paramNKA->DN[19][1] = -15;
        break;
    }
    }
}
