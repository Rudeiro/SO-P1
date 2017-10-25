#include<pthread.h>
#include<iostream>
#include<string>

using namespace std;

void* watek1(void* arg)
{

	string a = "Watek1\n";
	cout << a;

}
void* watek2(void* arg)
{

	string a = "Watek2\n";
	cout << a;

}

int main()
{
	
	pthread_t w1, w2;
	int code = pthread_create(&w1, NULL, watek1, NULL);
	int code2 = pthread_create(&w2, NULL, watek2, NULL);
	if(code == 0) cout << "sukces\n";
	else cout << "fail\n";
	if(code2 == 0) cout << "sukces\n";
	else cout << "fail\n";
	pthread_join(w1, NULL);
	pthread_join(w2, NULL);
	cout << "koniec Watkow\n";
	return 0;

}
