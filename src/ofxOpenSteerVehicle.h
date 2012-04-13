#pragma once

#include "ofxOpenSteer.h"

using namespace OpenSteer;
using namespace ofxOpenSteer;

class ofxOpenSteerVehicle: public OpenSteer::SimpleVehicle{

    public:
        ofxOpenSteerVehicle();
        ~ofxOpenSteerVehicle();
        
        virtual void reset();
        virtual void update();
        virtual void update(float curTime, float elapsedTime);
        virtual void draw();    
        virtual Vec3 getSteeringDirection(const float elapsedTime);
    
        virtual void setPosition(ofPoint position);
        virtual void setPosition(float x, float y, float z=0);    
        virtual ofPoint getPosition();
        
        virtual void setProximityDatabase(ProximityDatabase* db);
        virtual ProximityDatabase* getProximityDatabase();
        virtual ProximityToken* getProximityToken();
        
        virtual void setPath(ofxOpenSteerPath* path);
        virtual ofxOpenSteerPath* getPath();
        virtual void unsetPath();
            
        virtual void addObstacle(ofxOpenSteerObstacle* o);
        virtual void removeObstacle(ofxOpenSteerObstacle* o);
        virtual ObstacleGroup getObstacles();
        
    protected:
        static AVGroup neighbors;
        ProximityDatabase* proximityDB;
        ProximityToken* proximityToken;
        ofxOpenSteerPath* path;
        ObstacleGroup obstacles;
};