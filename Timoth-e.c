#pragma config(Sensor, S1,     ButtonLeft,     sensorEV3_Touch)
#pragma config(Sensor, S4,     ButtonRight,    sensorEV3_Touch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
		motor(motorB)= 50;
		motor(motorC)= 50;
		wait1Msec(1000);
		if(SensorValue(ButtonRight) == 1)
		{
			motor[motorB] = -50;
			motor[motorC] = -50;
			wait1Msec(1000);
			motor[motorB] = 100;
			motor[motorC] = -100;
			wait1Msec(595);
	  }


	}



}

//variables can be used to mark what speeds result in a 90 degree turn or 180 turn
//if wait1Msec 595 will turn 180 degrees around with -100 and 100
