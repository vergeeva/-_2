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

	OBJECT();
	bool In(String^ f);//���� �� ����� ������� � ������
	bool Empty(); //�������� �� �������
	bool Full(); //�������� �� ���������������
	bool Add(String^ pr); //��������
	bool Delete(String^ pr); //�������
	String^ Random_Object(); //������������� ��������� ������
	bool Clear(); //������� ���
	bool Upload_to(String^ pr); //��������� � ����
	bool Take_from(String^ pr); //����� �� �����
	bool View(System::Windows::Forms::ListBox^ LB); //�������� � ��������
};

public ref class Bool_Matrix
{
	array <bool^>^ row; //������
	int row_count;
	array<bool^>^ column; //�������
	int column_count;
public:
	Bool_Matrix();
	Bool_Matrix(int, int);
	//property int i
	//{
	//	int get()
	//	{
	//		return Count;
	//	}
	//}
	Bool_Matrix^ Delete_Row();
	Bool_Matrix^ Delete_Column();
	array <bool^>^ get_d(String^, OBJECT^);
};

