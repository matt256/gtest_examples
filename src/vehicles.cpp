#import "vehicles.h"

Vehicle::~Vehicle(){
    return 0;
}

Vehicle::drive
Vehicle::stop
Vehicle::turnRight(){
    posX++;
}
Vehicle::turnLeft(){
    posX--;
}
Vehicle::moveForward(){
    posY++;
}
Vehicle::moveBack(){
    posY--;
}
class Vehicle {
    public:
        virtual ~Vehicle()
        void drive(float speed);
        void ();
        void turnRight();
        void turnLeft();

    private:
        float posX;
        float posY;
}

class SquadCar: public Vehicle{
    private:
        bool lightsOn = false;
    
    public: 
        void toggleLights();
}