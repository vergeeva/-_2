#pragma once
#include<cstdlib>
#include<ctime>
using namespace System;


public ref class OBJECT
{
private:
	array <String^>^ Object; //������� ��� ��������
	int Count;//���������� �������� ��� �������
public:
	property int Len
	{
		int get()
		{
			return Count;
		}
	}

	property array <String^>^ O
	{
		array <String^>^ get()
		{
			return Object;
		}
	}

	String^ element(int i);
	OBJECT();
	bool In(String^ f);//���� �� ����� ������� � ������
	bool Empty(); //�������� �� �������
	bool Full(); //�������� �� ���������������
	bool Add(String^ pr); //��������
	bool Delete(String^ pr); //�������
	int find(String^ p);
	String^ Random_Object(); //������������� ��������� ������
	bool Clear(); //������� ���
	bool Upload_to(String^ pr); //��������� � ����
	bool Take_from(String^ pr); //����� �� �����
	bool View(System::Windows::Forms::ListBox^ LB); //�������� � ��������
};

public ref class Bool_Matrix
{
	int** matr;
	int i;
	int j;
public:
	Bool_Matrix(int, int);
	Bool_Matrix(Bool_Matrix^ ot);

	void Add_Row();
	void Add_Column(Bool_Matrix^ ot);
	void Del_Row();
	void Del_Column();

	property int** m
	{
		int** get()
		{
			return matr;
		}
	}
};

