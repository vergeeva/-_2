#include "Header.h"
using namespace System::Threading;

Bool_Matrix::Bool_Matrix(int i, int j)
{
    Random^ rand = gcnew Random();
    this->i = i;
    this->j = j;
    matr = new int*[this->i];
    for (int a; a < this->i; a++)
    {
        matr[a] = new int[j];
    }
    for (int a=0; a < this->i; a++)
    {
        for (int b=0; b < this->j; b++)
        {
            Threading::Thread::Sleep(5);
            matr[a][b] = rand->Next(0, 2);
        }
    }
}

Bool_Matrix::Bool_Matrix(Bool_Matrix^ ot)
{
    Random^ rand = gcnew Random();
    this->i = ot->i;
    this->j = ot->j;
    matr = new int* [this->i];
    for (int a; a < this->i; a++)
    {
        matr[a] = new int[j];
    }
    for (int a = 0; a < this->i; a++)
    {
        for (int b = 0; b < this->j; b++)
        {
            Threading::Thread::Sleep(5);
            matr[a][b] = ot->m[a][b];
        }
    }
}

void Bool_Matrix::Add_Row()
{
    Random^ rand = gcnew Random();
    i++;
    matr[i-1] = new int[j];

    for (int b = 0; b < this->j; b++)
    {
        Threading::Thread::Sleep(5);
        matr[i-1][b] = rand->Next(0, 2);
    }
}
void Bool_Matrix::Add_Column(Bool_Matrix^ ot)
{
    Random^ rand = gcnew Random();
    this->i = ot->i+1;
    this->j = ot->j+1;
    this->matr = new int* [this->i];
    for (int a; a < this->i; a++)
    {
        matr[a] = new int[j];
    }
    for (int a = 0; a < ot->i; a++)
    {
        for (int b = 0; b < ot->j; b++)
        {
            matr[a][b] = ot->m[a][b];
        }
    }

    for (int b = 0; b < this->i; b++)
    {
        Threading::Thread::Sleep(5);
        matr[b][j-1] = rand->Next(0, 2);
    }
}
void Bool_Matrix::Del_Row()
{
    i--;
}

void Bool_Matrix::Del_Column()
{
    j--;
}


