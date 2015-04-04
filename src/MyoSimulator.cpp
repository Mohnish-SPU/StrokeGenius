 /*
  *Author:Mohnish SPU
  *Project: StrokeGenius
  *Date : 4 March, 2015
  * A program to simulate the data generated by the myo device
  * ##Not to be mistaken for the driver program for the actual Myo##
  */

#include <iostream>
#include <fstream>
#include <string> 
#include <ctime>
//The libraries required for the parsing of the obtained sensor data
#include "StrokeGeniusProto/MyoDeviceListener.pb.h"

using namespace std;

string logName(){
	//
	time_t now = time(0);
	char* dt = ctime(&now);	
	string name(dt);

	//Getting rid of all spaces
	for(int i = 0; i < name.length(); i++)
    {
        if(name[i] == ' ')
            name[i] = '_';
    }

	name = name + ".log";   

	return name;
}

StrokeGeniusProto::Vector3* toVector3(float* vectorArray){
	StrokeGeniusProto::Vector3* vector3 = new StrokeGeniusProto::Vector3();
	vector3->set_x(*vectorArray);
	vector3->set_y(*(vectorArray + 1));
	vector3->set_z(*(vectorArray + 2));
	vector3->set_magnitude(*(vectorArray + 3));
}

//Creates and initializes a protobuf packet
StrokeGeniusProto::MyoDeviceListener* setPacket(
												int	timeStamp,
												float *pose,
												float *orientationData,
												float *acceleromaterData,
												float *gyroscopeData,
												int rssi,
												float* emgData){

	StrokeGeniusProto::MyoDeviceListener myoState = new StrokeGeniusProto::MyoDeviceListener();

	//Adding the values to the myoState obj
	myoState->set_timestamp(timeStamp);
	myoState->
}

int main(int argc, char const *argv[])
{
	//The generated log file will have the name as a time stamp
	//
		
	return 0;
}