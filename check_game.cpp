#include "caro.h"


void xetdong(Broad B, int &winX, int &winO) {
    
    int codewin;
    if (B.hang * B.cot < 25) {
        codewin = 3;
    }
    else
        codewin = 5;

    int demO, demX;
    for (int i = 0; i < B.hang; i++) {
        demO = 0;
        demX = 0;
        for (int j = 0; j < B.cot; j++) {
            if (B.gird[i][j] == 1)
                demX++;
            else {
                if (B.gird[i][j] == 2) {
                    if (demX >= codewin && B.gird[i][j - (demX + 1)] != 2)
                        demX = codewin;
                    else
                        demX = 0;
                }
                if (B.gird[i][j] == 0) {
                    if (demX >= codewin)
                        demX = codewin;
                    else
                        demX = 0;
                }
            }
            if (B.gird[i][j] == 2)
                demO++;
            else {
                if (B.gird[i][j] == 1) {
                    if (demO >= codewin && B.gird[i][j - (demO + 1)] != 1)
                        demO = codewin;
                    else
                        demO = 0;
                }
                if (B.gird[i][j] == 0) {
                    if (demO >= 3)
                        demO = 3;
                    else
                        demO = 0;
                }
            }
        }

        if (demO >= codewin) {
            winO = 1;
        }
        if (demX >= codewin) {
            winX = 1;
        }
    }



}

void xetcot(Broad B, int& winX, int& winO) {

    int codewin;
    if (B.hang * B.cot < 25) {
        codewin = 3;
    }
    else
        codewin = 5;
    int demO, demX;
    for (int j = 0; j < B.cot; j++) {
        demO = 0;
        demX = 0;
        for (int i = 0; i < B.hang; i++) {
            if (B.gird[i][j] == 1)
                demX++;
            else {
                if (B.gird[i][j] == 2) {
                    if (demX >= codewin && B.gird[i - (demX + 1)][j] != 2)
                        demX = codewin;
                    else
                        demX = 0;
                }
                if (B.gird[i][j] == 0) {
                    if (demX >= codewin)
                        demX = codewin;
                    else
                        demX = 0;
                }
            }
            if (B.gird[i][j] == 2)
                demO++;
            else {
                if (B.gird[i][j] == 1) {
                    if (demO >= codewin && B.gird[i - (demO + 1)][j] != 1)
                        demO = codewin;
                    else
                        demO = 0;
                }
                if (B.gird[i][j] == 0) {
                    if (demO >= codewin)
                        demO = codewin;
                    else
                        demO = 0;
                }
            }
        }

        if (demO >= codewin) {
            
            winO = 1;
        }
        if (demX >= codewin) {
            
            winX = 1;
        }
    }
}

void xet_cheo_tren_chinh(Broad B, int& winX, int& winO) {

    int codewin;
    if (B.hang * B.cot < 25) {
        codewin = 3;
    }
    else
        codewin = 5;

    int demO, demX;
    int i, k;
    for (int j = 0; j < B.cot; j++) {
        demO = 0;
        demX = 0;
        k = j;
        i = 0;
        while (k < B.cot) {

            if (B.gird[i][k] == 1)
                demX++;
            else {
                if (B.gird[i][k] == 2) {
                    if (demX >= codewin && B.gird[i - demX + 1][j - demX + 1] != 2)
                        demX = codewin;
                    else
                        demX = 0;
                }
                if (B.gird[i][k] == 0) {
                    if (demX >= codewin)
                        demX = codewin;
                    else
                        demX = 0;
                }
            }

            if (B.gird[i][k] == 2)
                demO++;
            else {
                if (B.gird[i][k] == 1) {
                    if (demO >= codewin && B.gird[i - demO + 1][j - demO + 1] != 1)
                        demO = codewin;
                    else
                        demO = 0;
                }
                if (B.gird[i][k] == 0) {
                    if (demO >= codewin)
                        demO = codewin;
                    else
                        demO = 0;
                }
            }
            i++;
            k++;
        }
        if (demO >= codewin) {
            
            winO = 1;
          
        }
        if (demX >= codewin) {
            
            winX = 1;

        }
    }
}

void xet_cheo_duoi_chinh(Broad B, int& winX, int& winO) {
    
    int codewin;
    if (B.hang * B.cot < 25) {
        codewin = 3;
    }
    else
        codewin = 5;
    
    int demO, demX;
    int j, k;
    for (int i = 1; i < B.hang; i++) {
        demO = 0;
        demX = 0;

        k = i;
        j = 0;

        while (k < B.hang)
        {
            if (B.gird[k][j] == 1)
                demX++;
            else {
                if (B.gird[k][j] == 2) {
                    if (demX >= codewin && B.gird[k - demX + 1][j - demX + 1] != 2)
                        demX = codewin;
                    else
                        demX = 0;
                }
                if (B.gird[k][j] == 0) {
                    if (demX >= codewin)
                        demX = codewin;
                    else
                        demX = 0;
                }
            }
            if (B.gird[k][j] == 2)
                demO++;
            else {
                if (B.gird[k][j] == 1) {
                    if (demO >= codewin && B.gird[k - demO + 1][j - demO + 1] != 1)
                        demO = codewin;
                    else
                        demO = 0;
                }
                if (B.gird[k][j] == 0) {
                    if (demO >= codewin)
                        demO = codewin;
                    else
                        demO = 0;
                }
            }
            k++;
            j++;
        }
        if (demO >= codewin) {
            
            winO = 1;
        }
        if (demX >= codewin) {
            
            winX = 1;
        }
    }
}

void xet_cheo_tren_phu(Broad B, int& winX, int& winO) {
    
    int codewin;
    if (B.hang * B.cot < 25) {
        codewin = 3;
    }
    else
        codewin = 5;
    
    int demO, demX;
    int i, k;
    for (int j = 1; j < B.cot; j++)
    {
        demO = 0;
        demX = 0;

        k = j;
        i = 0;
        while (k >= 0)
        {
            if (B.gird[i][k] == 1)
                demX++;
            else
            {
                if (B.gird[i][k] == 2)
                {
                    if (demX >= codewin && B.gird[i - demX + 1][k + demX + 1] != 2)
                        demX = codewin;
                    else
                        demX = 0;
                }
                if (B.gird[i][k] == 0)
                    if (demX >= codewin)
                        demX = codewin;
                    else
                        demX = 0;
            }
            if (B.gird[i][k] == 2)
                demO++;
            else
            {
                if (B.gird[i][k] == 1)
                {
                    if (demO >= codewin && B.gird[i - demO + 1][k + demO + 1] != 1)
                        demO = codewin;
                    else
                        demO = 0;
                }
                if (B.gird[i][k] == 0)
                    if (demO >= codewin)
                        demO = codewin;
                    else
                        demO = 0;
            }
            k--;
            i++;
        }

        if (demO >= codewin) {
            
            winO = 1;
        }
        if (demX >= codewin) {
            
            winX = 1;
        }


    }

}

void xet_cheo_duoi_phu(Broad B, int &winX, int &winO) {
    
     int codewin;
    if (B.hang * B.cot < 25) {
        codewin = 3;
    }
    else
        codewin = 5;
    
    int demO = 0, demX = 0;
    int j = 0, k = 0;
    for (int i = 1; i < B.cot; i++)
    {
        demX = 0;
        demO = 0;

        k = i;
        j = B.cot - 1;
        while (k < B.cot)
        {

            if (B.gird[k][j] == 1)
            {
                demX++;

            }
            else
            {
                if (B.gird[k][j] == 2)
                {
                    if (demX >= codewin && B.gird[k - demX + 1][j + demX + 1] != 2)
                        demX = codewin;
                    else
                        demX = 0;
                }
                if (B.gird[k][j] == 0)
                    if (demX >= codewin)
                        demX = codewin;
                    else
                        demX = 0;
            }
            if (B.gird[k][j] == 2)
            {
                demO++;

            }
            else
            {
                if (B.gird[k][j] == 1)
                {
                    if (demO >= codewin && B.gird[k - demO + 1][j + demO + 1] != 1)
                        demO = codewin;
                    else
                        demO = 0;
                }
                if (B.gird[k][j] == 0)
                    if (demO >= codewin)
                        demO = codewin;
                    else
                        demO = 0;
            }
            k++;
            j--;

        }
        if (demO >= codewin) {
            
            winO = 1;
        }
        if (demX >= codewin) {
            
            winX = 1;
        }
    }
}

void xetchinh(Broad B, int& winX, int& winO) {
   
    int codewin;
    if (B.hang * B.cot < 25) {
        codewin = 3;
    }
    else
        codewin = 5;
    
    
    int demO = 0, demX = 0;
    for (int i = 0; i < B.cot; i++)
    {
        if (B.gird[i][i] == 1)
            demX++;
        else
        {
            if (B.gird[i][i] == 2)
            {
                if (demX >= codewin && B.gird[i - demX + 1][i - demX + 1] != 2)
                    demX = codewin;
                else
                    demX = 0;
            }
            if (B.gird[i][i] == 0)
                if (demX >= codewin)
                    demX = codewin;
                else
                    demX = 0;
        }
        if (B.gird[i][i] == 2)
            demO++;
        else
        {
            if (B.gird[i][i] == 1)
            {
                if (demO >= codewin && B.gird[i - demO + 1][i - demO + 1] != 1)
                    demO = codewin;
                else
                    demO = 0;
            }
            if (B.gird[i][i] == 0)
                if (demO >= codewin)
                    demO = codewin;
                else
                    demO = 0;
        }
        if (demO >= codewin) {
            
            winO = 1;
        }
        if (demX >= codewin) {
            
            winX = 1;
        }
    }
}