#include<pthread.h>
#include<iostream>
#include<string>

using namespace std;

void* watek1(void* arg)
{

	string a = "Watek1\n";
	cout << a;

}

int main()
{
	
	pthread_t w1;
	int code = pthread_create(&w1, NULL, watek1, NULL);
	if(code == 0) cout << "sukces\n";
	else cout << "fail\n";
	pthread_join(w1, NULL);
	return 0;
	
}
