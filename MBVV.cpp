// multiplication biggest vector value
// возвращает произведение наибольших элементов вектора.

#include <iostream>
#include <vector>

using namespace std;

void rand_fill(vector<int> & v, const int size)// заполнение вектора случайными числами от 0 до 10 включительно
{
	int i = size;
	while(--i) v.push_back(rand() % 10);
};

void show(vector<int> & v) // для вывода вектора
{
	for(auto & i : v)
		cout<<i<<" ";
	cout<<endl;
};

int MBVV(vector<int> & v) // возвращает произведение наибольших элементов вектора.
{
	// слогаемые
	int big1 = 0; 
	int big2 = 0;
		for(auto & i : v) // обход вектора
		{
			if(i >= big1) // елси найдено самое большое число предыдущее большое число запоминается.
			{
				big2 = big1;
				big1 = i;
			}else if(i > big2) big2 = i; // если найдено число меньшее самого большого но больше предыдущего самого большого числа запоминаем его
		};
	return big1 * big2; // произведение
};

int main()
{
    int i = 11;
    while(--i) 
    {
	    vector<int> vec;
	    rand_fill(vec,11); 
	    show(vec);
	    cout<<"MBVV = "<<MBVV(vec)<<endl<<endl;
    };
	return 0;
};