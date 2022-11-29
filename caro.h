#include <iostream>
#include <istream>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <string.h>

using namespace std;

struct Broad {

    int hang, cot;
    int gird[10][20] = { 0 };
    char player[2][6];
    int cursor;
    int undo;
    int movengu;
   
};

void outputRow(int size, int r, int y, int x, int y1, int x1);
void outputColumn(int size, int r, int y, int x, int y1, int x1);
void printbroad(Broad B);
void xetdong(Broad B, int &winX, int &winO);
void xetcot(Broad B, int& winX, int& winO);
void xet_cheo_tren_chinh(Broad B, int& winX, int& winO);
void xet_cheo_duoi_chinh(Broad B, int& winX, int& winO);
void xet_cheo_tren_phu(Broad B, int& winX, int& winO);
void xet_cheo_duoi_phu(Broad B, int &winX, int &winO);
void xetchinh(Broad B, int& winX, int& winO);
void manhinhdangnhap();
void manhinh();
void manhinhdangnhap1();
void manhinhdangnhap2();
void manhinhchucmungX();
void manhinhchucmungO();
void manhinhTambiet();
void chedochoi();
void huongdan();
void login();
void registr();
void run_game();













