#pragma config(Sensor, S1,     ButtonLeft,     sensorEV3_Touch)
#pragma config(Sensor, S4,     ButtonRight,    sensorEV3_Touch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//Can share 1 loop through multiple if statements
//Make a variable:
// in mode = 1;
//while(true)
//{
// if(mode ==1)
//{
// do mode 1 stuff
//if(SensorValue(button) == 1)
//}
//mode == 2;
//{
// do mode 2 stuff
//}
//Create mode variable
//while(true)
//{
//if(mode == whatever)
//{
//do stuff for that mode
//if(condition to move to another
//{
//mode=other mode;
//}
//}

task main()
{
	int speedleft = 0;
	int speedright = 90;
	int turn180 = 595;

	while(speedleft <= 100)
	{
		motor[motorB] = speedleft;
		motor[motorC] = speedright;
		wait1Msec(1500);

		speedleft = speedleft + 5;
		speedright = speedright + 2;

		if(SensorValue(ButtonRight && ButtonLeft) == 1)
		{
			while(true)
			{
				motor[motorB]= 100;
				motor[motorC]= 100;
				wait1Msec(1000);
				if(SensorValue(ButtonRight && ButtonLeft) == 1)
				{
					motor[motorC] = -100;
					motor[motorB] = -100;
					wait1Msec(250);
					motor[motorB] = 100;
					motor[motorC] = -100;
					wait1Msec(turn180);
					motor[motorB] = 100;
					motor[motorC] = 100;
					wait1Msec(100);
					motor(motorB) = 30;
					motor(motorC) = 65;
					wait1Msec(2000);
				}
				if(getMotorEncoder(motorB)> 3600 && getMotorEncoder(motorC) > 3600)
				{
					while(speedleft <= 100 && speedright <= 100)
					{
						motor[motorB] = speedleft;
						motor[motorC] = speedright;
						wait1Msec(1000);

						speedleft = speedleft + 5;
						speedright = speedright + 2;

					}


				}
			}
		}
	}
}
