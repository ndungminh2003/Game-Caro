#include "caro.h"


void outputRow(int size, int r, int y, int x, int y1, int x1) {

    for (int i = 0; i < size; i++) {
        if ((x == i && (r == y || r == y + 1 )) || (x1 == i && (r == y1 || r == y1 + 1))) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << " -------";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }

    else
        cout << " -------";
    }
    cout << endl;
}

void outputColumn(int size, int r, int y, int x, int y1, int x1) {
    for (int i = 0; i < size; i++) {
        if ((r == y && (x == i || i == x -1)) || (r == y1 && (x1 == i || i == x1 - 1))) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "       |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
        else
            cout << "       |";
    }
    cout << endl;
}

void printbroad(Broad B) {
    int i;
    int space;
    int y = B.cursor / B.cot;
    int x = B.cursor % B.cot;
    int y1 = B.movengu / B.cot;
    int x1 = B.movengu % B.cot;
   
    for (i = 0; i < B.hang; i++) {
        outputRow(B.cot, i, y, x, y1, x1);

        if ((i == y && x == 0) || (i == y1 && x1 == 0)) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "|";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
        else
            cout << "|";
        outputColumn(B.cot, i, y, x, y1, x1);
        
        if ((i == y && x == 0) || (i == y1 && x1 == 0)) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "|";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
        else
            cout << "|";

        for (int j = 0; j < B.cot; j++) {
            if (B.gird[i][j]) {
                space = (7 - strlen(B.player[B.gird[i][j] - 1])) / 2;
                for (int k = 0; k < space; k++) {
                    cout << " ";
                }
                
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
                cout << B.player[B.gird[i][j] - 1];
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

                for (int k = 0; k < space; k++) {
                    cout << " ";
                    
                }
                if ((i == y && (x ==  j || j == x - 1)) || (i == y1 && (x1 == j || j == x1 - 1))) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
                    cout << "|";
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
                else
                    cout << "|";
            }
            else {
                if ((i == y && (x == j || j == x - 1)) || (i == y1 && (x1 == j || j == x1 - 1))) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
                    cout << "       |";
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
                else
                    cout << "       |";
            }
        }
        cout << endl;
        if ((i == y && x == 0) || (i == y1 && x1 == 0)) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "|";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
        else
            cout << "|";
        outputColumn(B.cot, i, y, x, y1, x1);
    }
        outputRow(B.cot, i, y, x, y1, x1);


}

void login()
{
    int count = 0;

    char user[100], pass[100], u[100], p[100];
    do {
        system("cls");
        manhinhdangnhap2();
        cout << "Ten dang nhap :";
        cin >> user;
        cout << "Mat khau :";
        cin >> pass;

        ifstream input("database.txt");
        while (input >> u >> p)
        {
            if (strcmp(u, user) == 0 && strcmp(p, pass) == 0)

            {
                count = 1;
                system("cls");
            }
        }
        input.close();
        if (count == 1)
        {
            cout << endl;
            cout << "Xin chao " << user;
            cout << endl;
            cout << "Ban da dang nhap thanh cong " << endl;

        }
        else

        {
            cout << "Dang nhap that bai vui long kiem tra lai mat khau va tai khoan " << endl;
        }
        Sleep(1000);
    } while (count == 0);
}

void registr()
{

    char reguser[100], regpass[100], ru[100], rp[100];
    system("cls");
    manhinhdangnhap1();
    cout << "User :";
    cin >> reguser;
    cout << endl;
    cout << "Password :";
    cin >> regpass;

    ofstream reg("database.txt", ios::app);
    reg << reguser << ' ' << regpass << endl;
    system("cls");
    cout << "\nRegister Successfully\n";
    Sleep(1000);
    
}

void run_game(){
   
    manhinhdangnhap();
    
    int choice;

    choice = _getch();

    switch (choice) {
        case '1': {
            registr();
        }
        case '2': {
            login();
        }
    }
           
    int winX, winO;

    Broad B;
  
    memcpy(B.player[0], "X", 6);

    memcpy(B.player[1], "O", 6);
 
    manhinh();

    srand(time(0));  

    B.cursor = 0;
    char c = ' ';
    char n = ' ';
    n = _getch();

    int wX = 0, wO = 0;
    int demcoX = 0;
    int demcoO = 0;
    char u = 'y';
           
        system("cls");
        switch (n) {

        case 32: {
            char k;
            chedochoi();
            huongdan();
            k = _getch();

            switch (k) {

            case '1': {
                        
                    int count = 0;
                    cout << "Moi ban chon kich thuoc ban co m X n" << endl;
                    cin >> B.hang;
                    cin >> B.cot;
                    int hoa = B.hang * B.cot;
                    cout << "Kich thuong ban chon la: " << B.hang << "X" << B.cot << endl;
                  
                    while (c != 'x' && count < hoa) {


                        system("cls");
                        xetdong(B, winX, winO);
                        xetcot(B, winX, winO);
                        xet_cheo_tren_chinh(B, winX, winO);
                        xet_cheo_duoi_chinh(B, winX, winO);
                        xet_cheo_tren_phu(B, winX, winO);
                        xet_cheo_duoi_phu(B, winX, winO);
                        xetchinh(B, winX, winO);
                        if (winX == 1) {
                            manhinhchucmungX();
                            manhinhTambiet();
                            cout << "Ban co muon choi lai khong neu co bam phim y ";
                            u = _getch();
                            if (u == 'y') {
                                for (int i = 0; i < 10; i++) {
                                    for (int j = 0; j < 20; j++) {
                                        B.gird[i][j] = { 0 };
                                    }

                                }
                                winX = 0;
                                hoa = hoa + count;
                                wX++;
                                B.movengu = -1;
                                continue;
                            }
                            else
                                wX++;
                            break;
                        }
                        if (winO == 1) {
                            manhinhchucmungO();
                            manhinhTambiet();
                            cout << "Ban co muon choi lai khong neu co bam phim y ";
                            u = _getch();
                            if (u == 'y') {
                                for (int i = 0; i < 10; i++) {
                                    for (int j = 0; j < 20; j++) {
                                        B.gird[i][j] = { 0 };
                                    }

                                }
                                winO = 0;
                                hoa = hoa + count;
                                wO++;
                                B.movengu = -1;
                                continue;
                            }
                            else
                                wO++;
                            break;
                        }

                        printbroad(B);

                        c = _getch();
                        switch (c) {
                        case 'w': {
                            if (B.cursor > B.cot) {
                                B.cursor -= B.cot;
                            }
                            break;
                        }
                        case 's': {
                            if (B.cursor < B.cot * (B.hang - 1)) {
                                B.cursor += B.cot;
                            }
                            break;
                        }
                        case 'a': {
                            if (B.cursor > 0) {
                                B.cursor -= 1;
                            }
                            break;
                        }
                        case 'd': {
                            if (B.cursor < B.cot * B.hang - 1) {
                                B.cursor += 1;
                            }
                            break;
                        }
                        case 13: {

                            if (B.gird[B.cursor / B.cot][B.cursor % B.cot] == 0) {
                                if (count % 2 == 0) {

                                    B.gird[B.cursor / B.cot][B.cursor % B.cot] = 1;
                                    demcoX++;
                                    demcoO++;
                                }
                                else 
                                    B.gird[B.cursor / B.cot][B.cursor % B.cot] = 2;

                                count++;
                               
                            }


                            B.undo = B.cursor;

                            break;
                        }
                        case 'z': {
                            B.gird[B.undo / B.cot][B.undo % B.cot] = 0;
                            count++;
                            hoa++;
                            break;
                        }
                        case '3': {
                            int movengoc = rand() % (B.cot * B.hang) - 1;
                            if (B.gird[movengoc / B.cot][movengoc % B.cot] == 0)
                                B.movengu = movengoc;                                                                                                                   
                            break;
                        }
                        }
                    }
                    cout << endl;
                    if (count == hoa) {
                        cout << "2 ban da hoa nhau" << endl;        
                       
                        Sleep(1000);
                    }                  
                    break;
                
                    
            }
 //----------------------------------------------------------------------------------------------------------------
            case '2': {
                int count = 0;
                cout << "Moi ban chon kich thuoc ban co m X n" << endl;
                cin >> B.hang;
                cin >> B.cot;
                int hoa = B.hang * B.cot;
                cout << "Kich thuong ban chon la: " << B.hang << "X" << B.cot << endl;
                while (c != 'x') {
                    int move = rand() % (B.cot * B.hang) - 1;

                    system("cls");
                    xetdong(B, winX, winO);
                    xetcot(B, winX, winO);
                    xet_cheo_tren_chinh(B, winX, winO);
                    xet_cheo_duoi_chinh(B, winX, winO);
                    xet_cheo_tren_phu(B, winX, winO);
                    xet_cheo_duoi_phu(B, winX, winO);
                    xetchinh(B, winX, winO);
                    if (winX == 1) {
                        manhinhchucmungX();
                        manhinhTambiet();
                        cout << "Ban co muon choi lai khong neu co bam phim y ";
                        u = _getch();
                        if (u == 'y') {
                            for (int i = 0; i < 10; i++) {
                                for (int j = 0; j < 20; j++) {
                                    B.gird[i][j] = { 0 };
                                }

                            }
                            winX = 0;
                            hoa = hoa + count;
                            wX++;
                           
                            continue;
                        }
                        else
                            wX++;
                        break;
                    }
                    if (winO == 1) {
                        manhinhchucmungO();
                        manhinhTambiet();
                        cout << "Ban co muon choi lai khong neu co bam phim y ";
                        u = _getch();
                        if (u == 'y') {
                            for (int i = 0; i < 10; i++) {
                                for (int j = 0; j < 20; j++) {
                                    B.gird[i][j] = { 0 };
                                }

                            }
                            winO = 0;
                            hoa = hoa + count;
                            wO++;
                            
                            continue;
                        }
                        else
                            wO++;
                        break;
                    }

                    printbroad(B);

                    c = _getch();
                    switch (c) {
                    case 'w': {
                        if (B.cursor > B.cot) {
                            B.cursor -= B.cot;
                        }
                        break;
                    }
                    case 's': {
                        if (B.cursor < B.cot * (B.hang - 1)) {
                            B.cursor += B.cot;
                        }
                        break;
                    }
                    case 'a': {
                        if (B.cursor > 0) {
                            B.cursor -= 1;
                        }
                        break;
                    }
                    case 'd': {
                        if (B.cursor < B.cot * B.hang - 1) {
                            B.cursor += 1;
                        }
                        break;
                    }
                    case 13: {

                        if (B.gird[B.cursor / B.cot][B.cursor % B.cot] == 0) {
                            if (count % 2 == 0) {
                                
                                B.gird[B.cursor / B.cot][B.cursor % B.cot] = 1;
                                
                                count++;                              

                            }

                        }
                        break;
                    }

                    }
                    if (B.gird[move / B.cot][move % B.cot] == 0) {
                        if (count % 2 != 0) {
                           
                            B.gird[move / B.cot][move % B.cot] = 2;
                            
                            count++;
                        }
                    }
                }
               

            }
            }
            break;

        }
            case 27: {
                manhinhTambiet();
                break;
            }

        }
        ofstream quanlidulieu("database.txt", ios::app);
        
        quanlidulieu << " X win " << wX << "|| O win " << wO << endl;
        quanlidulieu << "So luot di cua X: " << demcoX << endl;
        quanlidulieu << "So luot di cua O: " << demcoO << endl;
        quanlidulieu.close();


}

