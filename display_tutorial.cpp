#include "caro.h"


void manhinhdangnhap() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||             TicTacToe              ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**  Nhan phim 1 de dang ki tai khoan||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**  Nhan phim 2 de dang nhap        ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}

void manhinh() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||             TicTacToe              ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**  Nhan Phim SPACE de bat dau choi ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**  Nhan phim ESC de thoat game     ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||                                    ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void manhinhdangnhap1() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||             TicTacToe              ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**  Nhap ten dang nhap va mat khau  ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||    ma ban muon dang ki             ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}

void manhinhdangnhap2() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||             TicTacToe              ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**       Dang nhap tai khoan        ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||                                    ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}

void manhinhchucmungX() {


    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||              X WINNER !!!          ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||   CHUC MUNG X DA GIANH CHIEN THANG ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||                                    ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);



}

void manhinhchucmungO() {


    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||              O WINNER !!!          ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||   CHUC MUNG O DA GIANH CHIEN THANG ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||                                    ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);



}

void manhinhTambiet() {


    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||                                    ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||           SEE YOU AGAIN            ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||                                    ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);



}

void chedochoi() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||             TicTacToe              ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**        Nhan phim 1 PvsP          ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||**      Nhan phim 2 PvsComputer     ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "||                                    ||" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "========================================" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}

void huongdan() {
   
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "========================================" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "||             HUONG DAN              ||" << endl;
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "|| *NEU BAN CHON SIZE 5x5 TRO XUONG   ||" << endl;
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "|| THI DANH 3 NUOC CO DE CHIEN THANG  ||" << endl;
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "|| CON 5X5 TRO LEN THI DANH 5 QUAN    ||" << endl;
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "|| DE CHIEN THANG.                    ||" << endl;
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "|| BAM PHIM Z DE DANH LAI             ||" << endl;
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << "|| BAM PHIM 3 DE GOI Y NUOC CO        ||" << endl;      
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
        cout << "========================================" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

    }
