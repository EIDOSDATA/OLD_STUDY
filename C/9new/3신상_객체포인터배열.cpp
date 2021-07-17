/**3신상_객체포인터배열  3명의 기본자료를 입력하여 아래처럼!
#1)
    이름? 홍 길 동
    나이? 20
    체중? 75.5
#2)
    이름? 이이
    ...
       *신상보고서*
이름       나이     체중
xxx      ...
...
*/
#include<iostream>
#include<iomanip>
#include<cstring>
#define SI 20
#define CN 3
using namespace std;
class Sinsang{
   char name[SI];
   int age;
   double weight;
   public:
    Sinsang(const char * name="no_name",int age=0,
            double weight=0.0){
        strcpy(this->name,name);///strcpy(멤버변수,매개변수);
        this->age=age;//멤버변수=매개변수;
        this->weight=weight;
    }
    ~Sinsang(){ cout<<"소멸자!!\n";     }
    void disp(){
        cout<<setw(12)<<left<<name<<"\t"<<
        setw(3)<<right<<age;
        printf("\t%5.1f\n",weight);
    }
};
int main()
{
    Sinsang *p[CN];
   // cout<<"객체포인터 배열p의 byte수 : "<<sizeof(p)<<endl;//8byte*3
    char name[SI];
    int age;
    double weight;
    for(int i=0;i<CN;i++){
        cout<<"#"<<i+1<<")\n";
        cout<<"   이름? ";fflush(stdin);
        gets(name);
        cout<<"   나이? ";cin>>age;
        cout<<"   체중? ";cin>>weight;
        p[i]=new Sinsang(name,age,weight);
    }
    cout<<"\n         *신상보고서*\n";
    cout<<"이름\t\t나이\t 체중\n";
    for(int i=0;i<CN;i++){
        p[i]->disp();
    }
    for(int i=0;i<CN;i++){
        delete p[i];
    }
    return 0;
}
 //Sinsang p[CN];
 //cout<<"객체배열 p의 byte수 : "<<sizeof(p)<<endl;//32byte*3
