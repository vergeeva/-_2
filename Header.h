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
	String^ element(int i);
	OBJECT();
	bool In(String^ f);//Есть ли такой элемент в списке
	bool Empty(); //Проверка на пустоту
	bool Full(); //Проверка на переполненность
	bool Add(String^ pr); //Добавить
	bool Delete(String^ pr); //Удалить
	String^ Random_Object(); //Сгенерировать рандомный объект
	bool Clear(); //Удалить все
	bool Upload_to(String^ pr); //Загрузить в файл
	bool Take_from(String^ pr); //Взять из файла
	bool View(System::Windows::Forms::ListBox^ LB); //Показать в ЛистБокс
};

public ref class Bool_Matrix
{
	bool** matr;
	int i;
	int j;
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
	Bool_Matrix^ Delete_Row(int i);
	Bool_Matrix^ Delete_Column(int i);
	array <bool^>^ get_d(String^, OBJECT^);
	String^ get_row(int i);
};

