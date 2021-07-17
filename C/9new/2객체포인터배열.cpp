/**2객체포인터배열
x : 0    y : 0
x : 2    y : 5
x : 4    y : 10
x : 6    y : 15
x : 8    y : 20
*/
#include<iostream>
#include<iomanip>
#define SI 5
using namespace std;
class Point{
    int x;
    int y;
public:
    void disp(){
cout<<"x : "<<setw(2)<<x<<"\ty : "<<setw(2)<<y<<endl;
    }
    Point(int x=0,int y=0){ this->x=x;   this->y=y;  }
    ~Point() {  cout<<"소멸자!!\n";    }
};
int main()
{
    //Point p[SI];//객체배열선언
    //cout<<"p의 byte수 : "<<sizeof(p)<<endl;//8byte*5
    Point *pa[SI];//객체포인터배열선언
    cout<<"pa의 byte수 : "<<sizeof(pa)<<endl;//8byte*5
    for(int i=0;i<SI;i++){
        pa[i]=new Point(i*2,i*5);
 /**객체의 동적생성 : new 연산자는 생성자함수로 heap에 Point객체를
      생성후, 그 객체의 주소를 반환함  */
    }
    for(int i=0;i<SI;i++){
        pa[i]->disp();
    }
   /** heap에 동적생성된 객체는 소멸자를 자동호출하지 x
   pg가 객체를 삭제하도록!
   */
   for(int i=0;i<SI;i++){
       delete pa[i];///소멸자 호출!!
  /** pa[i]에는 heap에 생성된 객체의 주소가 들어있음.
   그 주소로 접근하여 heap에 생성된 Point객체를 삭제하라는 뜻 */
   }
    return 0;
}

