
task main()
{
	while(true)
	{
		motor(motorB)= 50;
		motor(motorC)= 50;
		wait1Msec(1000);
		if(SensorValue(buttonLeft) == 1)
		{
			motor[motorB] = -50;
			motor[motorC] = -50;
			wait1Msec(1000);
			motor[motorB] = 100;
			motor[motorC] = -100;
			wait1Msec(750);
	  }


	}



}

//variables can be used to mark what speeds result in a 90 degree turn or 180 turn
