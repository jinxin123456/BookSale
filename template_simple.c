#include <iostream>

using namespace std;

	template <typename T>//T will repalce the global T
T& compare(T &v1,T &v2)
{
	return v1>v2?v1:v2;
}

//inline func
//template <typename T> inline T & return_T(const T &v1)
//{
//	return v1;
//}
int main()
{
	compare(1,2);
	compare(2.1,3.2);
	reeurn 0;
}
