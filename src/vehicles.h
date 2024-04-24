
class Vehicle {
    public:
        virtual ~Vehicle()
        void drive(float speed);
        void stop();
        void turnRight();
        void turnLeft();

    private:
        float posX=0;
        float posY=0;
}

class SquadCar: public Vehicle{
    private:
        bool lightsOn = false;
    
    public: 
        void toggleLights();
}