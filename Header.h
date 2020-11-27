#pragma once
#include<cstdlib>
#include<ctime>
using namespace System;


public ref class OBJECT
{
private:
	array <String^>^ Object; //Объекты или свойства
	int Count;//Количество объектов или свойств
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
	bool In(String^ f);//Есть ли такой элемент в списке
	bool Empty(); //Проверка на пустоту
	bool Full(); //Проверка на переполненность
	bool Add(String^ pr); //Добавить
	bool Delete(String^ pr); //Удалить
	int find(String^ p);
	String^ Random_Object(); //Сгенерировать рандомный объект
	bool Clear(); //Удалить все
	bool Upload_to(String^ pr); //Загрузить в файл
	bool Take_from(String^ pr); //Взять из файла
	bool View(System::Windows::Forms::ListBox^ LB); //Показать в ЛистБокс
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

