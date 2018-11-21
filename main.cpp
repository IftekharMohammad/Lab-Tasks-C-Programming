/*#include <iostream>

using namespace std;

class base{
    int x;
public:
    void setx(int n){x=n;}
    void showx(){cout<<x<<endl;}
};
class derived:public base{
    int y;
public:
    void sety(int n){y=n;}
    void showy(){cout<<y<<endl;}
};
int main()
{
    derived ob;
    ob.setx(10);
    ob.sety(20);
    ob.showx();
    ob.showy();
    return 0;
}
*/

/*#include <iostream>

using namespace std;

class base{
    int x;
public:
    void setx(int n){x=n;}
    void showx(){cout<<x<<endl;}
};
class derived:public base{
    int y;
public:
    void setxy(int n, int m){setx(n);y=m;}
    void showxy(){showx();cout<<y<<endl;}
};
int main()
{
    derived ob;
    ob.setxy(10,20);
    ob.showxy();
    return 0;
}
*/

/*#include <iostream>
i=n;j=m;
using namespace std;

class base{
protected:
    int a,b;
public:
    void setab(int n, int m){a=n;b=m;}
};
class derived:public base{
    int c;
public:
    void setc(int n){c=n;}
    void showabc(){cout<<a<<b<<c<<endl;}
};
int main()
{
    derived ob;
    ob.setab(1,2);
    ob.setc(3);
    ob.showabc();
    return 0;
}
*/

/*#include <iostream>

using namespace std;

class base{
protected:
    int i,j;
public:
    void setij(int n, int m){i=n;j=m;}
    void showij(){cout<<i<<" "<<j<<endl;}
};
class derived:public basi=n;j=m;e{
    int k;
public:
    void setk(){k=i*j;}
    void showk(){cout<<k<<endl;}
};
int main()
{
    derived ob;
    ob.setij(4,5);
    ob.setk();
    ob.showij();
    ob.showk();
    return 0;
}
*/


/*#include <iostream>

using namespace std;

class base{
protected:
    int i, j;
public:
    void setij(int n,int m){i=n;j=m;}
    void showij(){cout<<i<<" "<<j<<endl;}
};
class derived:private base{
    int k;
public:
    void setVal(int n, int m){setij(n,m);}
    void setk(){k=i*j;}
    void showVal(){
        showij();
        cout<<k<<endl;
    }
};
int main()
{
    derived ob;
    ob.setVal(4,5);
    ob.setk();
    ob.showVal();
    return 0;
}
*/

/*#include <iostream>

using namespace std;

class base{
    int i;
protected:
    int j;
public:
    void setij(int n,int m){i=n;j=m;}
    int returnI(){return i;}
    void showij(){cout<<i<<" "<<j<<endl;}
};
class derived:private base{
    int k;
public:
    void setVal(int n, int m){setij(n,m);}
    void setk(){k=returnI()*j;}
    void showVal(){
        showij();
        cout<<k<<endl;
    }
};
int main()
{
    derived ob;
    ob.setVal(6,6);
    ob.setk();
    ob.showVal();
    return 0;
}
*/

/*#include <iostream>

using namespace std;

class base{
protected:
    int i, j;
public:
    //void setij(int n,int m){i=n;j=m;}
    void showij(){cout<<i<<" "<<j<<endl;}
};
class derived:protected base{
    int k;
public:
    void setVal(int n, int m){i=n;j=m;}
    void setk(){k=i*j;}
    void showVal(){
        showij();
        cout<<k<<endl;
    }
};
int main()
{
    derived ob;
    ob.setVal(4,5);
    ob.setk();
    ob.showVal();
    return 0;
}
*/

/*#include <iostream>

using namespace std;

class base{
    int i;
protected:
    int j;
public:
    void seti(int n){i=n;}
    int return_i(){return i;}
    void showij(){cout<<i<<" "<<j<<endl;}
};
class derived:protected base{
    int k;
public:
    void setVal(int n, int m){seti(n);j=m;}
    void setk(){k=return_i()*j;}
    void showVal(){
        showij();
        cout<<k<<endl;
    }
};
int main()
{
    derived ob;
    ob.setVal(6,7);
    ob.setk();
    ob.showVal();
    return 0;
}
*/

/*#include <iostream>

using namespace std;

class Base{
    int length,height;
protected:
    int width;
public:
    void set_length(int n){length=n;}
    void set_width(int n){width=n;}
    void set_height(int n){height=n;}
    void show_all(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
    }
    int get_length(){
        return length;
    }
    int get_height(){
        return height;
    }
};
class rect:public Base{
    int area;
public:
    void calc_area(){area = get_length()*width;
    }
    void show_area(){
        cout<<"Area: "<<area<<endl;
    }
};
class Dimension:private Base{
    int volume;
public:
    void setVal(int x, int y, int z){
        set_length(x);
        set_width(y);
        set_height(z);
    }
    void calc_volume(){volume = get_length()*width*get_height();}
    void show_volume(){
        cout<<"Volume: "<<volume<<endl;
    }
};
int main()
{
    Base Base1;

    Base1.set_length(12);
    Base1.set_width(14);
    Base1.set_height(16);
    Base1.show_all();

    rect rect1;

    rect1.set_length(12);
    rect1.set_width(14);
    rect1.set_height(16);
    rect1.calc_area();
    rect1.show_area();


    Dimension vol1;

    vol1.setVal(12,14,16);
    vol1.calc_volume();
    vol1.show_volume();

    return 0;
}
*/
#include <iostream>

using namespace std;

class Vehicle{
    int wheels;
protected:
    int weight;
public:
    void set_wheels(int n){wheels=n;}
    void set_weight(int n){weight=n;}
    void show_all(){
        cout<<"Wheels: "<<wheels<<endl;
        cout<<"Weight: "<<weight<<endl;
    }
};
class Car:public Vehicle{
    int number_passenger,passenger_load;
    string brand;
public:
    void set_number_passenger(int n){number_passenger=n;}
    void set_passenger_load(int n){passenger_load=n;}
    void set_brand(string n){brand=n;}
    void showInfo(){
        show_all();
        cout<<"Number Of Passenger: "<<number_passenger<<endl;
        cout<<"Passenger Load: "<<passenger_load<<endl;
        cout<<"Brand: "<<brand<<endl;
    }
};
class Truck:private Vehicle{
    int number_passenger,payload;
    string brand;
public:
    void setVal(int x, int y){set_wheels(x);set_weight(y);}
    void set_number_passenger(int n){number_passenger=n;}
    void set_payload(int n){payload=n;}
    void set_brand(string n){brand=n;};
    void showInfo(){
        show_all();
        cout<<"Number Of Passenger: "<<number_passenger<<endl;
        cout<<"Payload: "<<payload<<endl;
        cout<<"Brand: "<<brand<<endl;
    }
};
int main()
{
    Car car1;

    car1.set_wheels(3);
    car1.set_weight(300);
    car1.set_number_passenger(3);
    car1.set_passenger_load(300);
    car1.set_brand("BMW");
    car1.showInfo();


    cout<<endl;
    cout<<endl;

    Truck truck1;

    truck1.setVal(4,400);
    truck1.set_number_passenger(4);
    truck1.set_payload(400);
    truck1.set_brand("TATA");
    truck1.showInfo();
    return 0;
}
