#include<iostream>
using namespace std;
class cal{
	int x,y;
	public:
	cal(){
		x=0;y=0;
	}
	int add(int,int);
};
int cal::add(int x,int y){
	return x+y;
}
int main(){
	cal obj;
	cout<<obj.add(4,8);
	return 0;
}
