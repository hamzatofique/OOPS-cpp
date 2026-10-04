#include<iostream>
using namespace std;
class Vehicle{
    private:
    bool running =false;
    public:
    void start(){
        running=true;
        cout<<"Vehicle Started : "<<endl;
    }
 void stop(){
        running=false;
        cout<<"Vehicle Stopped "<<endl;
    }
};
class Car : public Vehicle{
    public:
    void drive(){
        start();
        cout<<"Car driving" <<endl;
    }
};
class ElectricCar : public Car{
    private:
    int battery=100;
    public:
    void chargeAndDrive(){
        cout<<"Battery is : "<<battery<<endl;
        drive();
    }
        void distancecovered(int distance){
        if(distance>5 && distance<10 && battery>=15){
            battery-=15;
        }
         else if(distance>10 && distance <15 && battery>=15){
            battery-=30;
        }
         else if(distance>15 && distance <20 && battery>=15){
            battery-=45;
        }
         else if(distance>20 && distance <25 && battery>=15){
            battery-=60;
        }
       else  if(distance>25 && distance <30 && battery>=15){
            battery-=75;
        }
        else{
            cout<<"Battery Low!!!! Can't drive "<<endl;
            battery=0;

        }
    }
    void BatteryHealth(){
        cout<<"Battery Health is : "<<battery<<endl;
    }
};
int main(){
    ElectricCar e;
    e.chargeAndDrive();
    e.stop();
    e.distancecovered(30);
    e.BatteryHealth();
    return 0;

}