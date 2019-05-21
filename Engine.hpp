
#include <string>

class Engine{
private:
    // Engine Label
    //Maximum force in kNewtons
    double maxForce;
    double forceLevel;
    bool switchedOn;
public:
    Engine();
    Engine(double force);
    double getCurrentForce();
    bool isEngineOn();
    // По-хорошему если это была бы полноценная симуляция, то здесь должен быть idle vector (направление тяги)
}