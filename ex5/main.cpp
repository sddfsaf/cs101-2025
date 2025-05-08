#include <iostream>

using namespace std;


class Car{
    protected:
    string m_DriveMode;
    private:
    int m_MaxSeating;
    int m_price;
    void m_UpdataPrice(int base = 500000){
        m_price = m_MaxSeating* base;
    }
    public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x, string y, int z, int s){
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        m_UpdataPrice();
        m_DriveMode = "No-Wheel";
    }
    int get_m_MaxSeating(){
        return m_MaxSeating;
    }
    int get_Price(){
        return m_price;
    }
    string get_DriveMode() {
        return m_DriveMode;
    }
};

class BMW_Car : public Car{
    
    public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s) {
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Reer-Wheel";
    }
};

class AUDI_Car : public Car{
    
    public:
    AUDI_Car(string y, int z, int s) : Car("ADUI", y, z, s) {
        cout << "Constructing ADUI_Car\n";
        m_DriveMode = "Front-Wheel";
    }
};

class BENZ_Car : public Car{
    
    public:
    BENZ_Car(string y, int z, int s) : Car("BENZ", y, z, s) {
        cout << "Constructing BENZ_Car\n";
        m_DriveMode = "Front-Wheel";
    }
};

int main()
{
    BMW_Car car_1("X5", 2023, 6);
    cout << car_1.m_brand;
    cout <<" :Drive Mode = " << car_1.get_DriveMode() <<endl;
    AUDI_Car car_2("X5", 2023, 7);
    cout << car_2.m_brand; 
    cout <<" :Drive Mode = " << car_2.get_DriveMode() <<endl;
    BENZ_Car car_3("X5", 2022, 10);
    cout << car_3.m_brand;
    cout <<" :Drive Mode = " << car_3.get_DriveMode() <<endl;

    return 0;
}
