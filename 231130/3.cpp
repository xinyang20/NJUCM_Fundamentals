#include <iostream>
using namespace std;

/********* Begin *********/
//�ڴ˴�ʵ��һ��������
class Car
{
	private:
		bool door;
		bool light;
		int speed;
    public:
    	void set(){
    		door=0;
    		light=0;
    		speed=0;
		}
		
    	void ups(){
    		speed+=10;
		}
		
		void downs(){
			speed-=10;
		}
		
		void dop(){
			door=1;
		}
		
		void dcl(){
			door=0;
		}
		
		void lop(){
			light=1;
		}
		
		void lcl(){
			light=0;
		}
		
		void print(){
			cout<<"���� ";
			if(door)cout<<"ON"<<endl;
			else cout<<"OFF"<<endl;
			cout<<"���� ";
			if(light)cout<<"ON"<<endl;
			else cout<<"OFF"<<endl;
			cout<<"�ٶ� "<<speed<<endl;
		}
    
    
}car;
/********* End *********/

int main()
{
    /********* Begin *********/
    //�ڴ˴�����ִ���������������״̬
	char cmds[25];
    cin>>cmds;
    car.set();
    for(int i=0;cmds[i]!='\0';i++){
    	switch(cmds[i]){
    		case '1':
    			car.dop();
    			break;
    		case '2':
    			car.dcl();
    			break;
    		case '3':
    			car.lop();
    			break;
    		case '4':
    			car.lcl();
    			break;
    		case '5':
    			car.ups();
    			break;
    		case '6':
    			car.downs();
    			break;
		}
	}
    car.print();
    
    
    /********* End *********/
}
