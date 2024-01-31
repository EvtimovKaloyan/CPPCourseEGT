#include <iostream>
#include <string>

class Car
{
public:
    void setModel(std::string model)
    {
        this->model = model;
    }

    std::string getModel()
    {
        return this->model;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    int getYear()
    {
        return this->year;
    }

    void setColor(std::string color)
    {
        this->color = color;
    }

    std::string getColor()
    {
        return this->color;
    }

    void setFuel(std::string fuel)
    {
        this->fuel = fuel;
    }

    std::string getFuel()
    {
        return this->fuel;
    }

    void setVIN(std::string vin)
    {
        this->vin = vin;
    }

    std::string getVIN()
    {
        return this->vin;
    }

    void setTransmission(std::string transmission)
    {
        this->transmission = transmission;
    }

    std::string getTransmission()
    {
        return this->transmission;
    }

    void setPlate(std::string plate)
    {
        this->plate = plate;
    }

    std::string getPlate()
    {
        return this->plate;
    }

    void displayMessages()
    {
        std::cout << "Car model: " << model << std::endl << '\t'
            << "year: " << year << std::endl << '\t'
            << "color: " << color << std::endl << '\t'
            << "fuel: " << fuel << std::endl << '\t'
            << "VIN: " << vin << std::endl << '\t'
            << "transmission: " << transmission << std::endl << '\t'
            << "plate: " << plate << std::endl;
    }

    void displayMessages2()
    {
        std::cout << "Car model: " << getModel() << std::endl << '\t'
            << "year: " << getYear() << std::endl << '\t'
            << "color: " << getColor() << std::endl << '\t'
            << "fuel: " << getFuel() << std::endl << '\t'
            << "VIN: " << getVIN() << std::endl << '\t'
            << "transmission: " << getTransmission() << std::endl << '\t'
            << "plate: " << getPlate() << std::endl;
    }

private:
    std::string model;
    int year;
    std::string color;
    std::string fuel;
    std::string vin;
    std::string transmission;
    std::string plate;

};

int main()
{
    Car firstCar;

    std::string model;
    std::cout << "Enter car model: ";
    std::cin >> model;
    firstCar.setModel(model);

    int year;
    std::cout << "Enter year: ";
    std::cin >> year;
    firstCar.setYear(year);

    std::string color;
    std::cout << "Enter color: ";
    std::cin >> color;
    firstCar.setColor(color);

    std::string fuel;
    std::cout << "Enter fuel: ";
    std::cin >> fuel;
    firstCar.setFuel(fuel);

    std::string vin;
    std::cout << "Enter VIN: ";
    std::cin >> vin;
    firstCar.setVIN(vin);

    std::string transmission;
    std::cout << "Enter transmission: ";
    std::cin >> transmission;
    firstCar.setTransmission(transmission);

    std::string plate;
    std::cout << "Enter plate: ";
    std::cin >> plate;
    firstCar.setPlate(plate);

    firstCar.displayMessages();

    std::cout << std::endl << "***************************************" << std::endl;

    firstCar.displayMessages2();

    std::cout << std::endl << "***************************************" << std::endl;

    firstCar.setModel("Mercedes");

    firstCar.displayMessages2();

    std::cout << std::endl << "***************************************" << std::endl;

    std::string carModel = firstCar.getModel();
    std::cout << "Car model: " << carModel << std::endl;

    carModel = "Citroen";
    std::cout << "Car model: " << carModel << std::endl;
    std::cout << "Car model: " << firstCar.getModel() << std::endl;

    return 0;
}