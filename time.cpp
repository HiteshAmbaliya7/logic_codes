#include <iostream>
using namespace std;
class time
{
    int hours, minutes;

public:
    void getdata(int a=0, int b=0)
    {

        if (a<0)
        {
            cout << "Enter valid hours "<<endl;
            
        }
        else if (b<0)
        {
            cout << "Enter valid minutes"<<endl;
        }
        else
        {
            minutes = b;
            hours = a;
        }
    }
    void disp()
    {

        cout << "hours is : " << hours << endl;
        cout << "minutes is : " << minutes << endl;
    }
    time addtime(time b)
    {
        time d;
        
        d.hours = hours + b.hours;
        d.minutes = minutes + b.minutes;
        if (d.minutes >= 60)
        {
            d.hours += d.minutes/60;
            d.minutes = d.minutes % 60;
        }
        return d;
    }
};
int main()
{
    time t1, t2, t3;
    t1.getdata(5, 90);
    t2.getdata(3, 100);
    t3 = t1.addtime(t2);
    t3.disp();
    return 0;
}