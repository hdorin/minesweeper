#ifndef GLOBALE_H_INCLUDED
#define GLOBALE_H_INCLUDED
//SE INCLUDE IN FIECARE FISIER CPP
//PENTRU A PUTEA ACCESARE VARIABILELE (DEFINITE DE definire-globale.h)


extern bool IsFirstMove;//PT A PREVENI SITUATIILE DE GASIT BOMBA DIN PRIMA
extern bool GameOver;
extern bool Victory;

extern short mat1[100][100];//ce se foloseste pentru joc
extern int NoL,NoC;//NoL - number of  lines   NoC - nunber of columns
extern int NoBo;//NoBo - number of bombe
extern int NoPU,NoT;//NoPU - number of power-ups   NoT - number of traps

extern bool WaitOneMore;//BUG: Cand fac combo si pierd, imediat se duce la meniu
extern bool Menu;//1 - Meniu principal  0-jocul e in desfasurare
extern short Difficulty;// 1-4

extern short mat2[100][100];//ce vede jucatorul
extern int mat3[100][100];//CASUTE MARCATE CU STEGULETE


//DIMENSIUNILE FERESTREI (CONSOLA)
extern int CmdWidth;
extern int CmdHeight;


extern bool RButtonIsPressed;
extern bool LButtonIsPressed;


struct dmost{
    const int addx=252,addy=105;
    const int addbx=30,addby=30;//add between options
    const int sx=35,sy=165;//overall add
    const int addx2=124,addy2=60;
    const int colr=LIGHTGRAY;
};
//Display Menu Options*/



#endif // GLOBALE_H_INCLUDED
