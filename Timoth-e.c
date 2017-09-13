
task main()
{
	while( true )
	{
		motor(motorB)= 50;
		motor(motorC)= 50;
		if(SensorValue(buttonAny)= 1)
		{
			motor(motorB)= -50;
			motor(motorC) = -50;
			wait1Msec(1000);
			motor(motorB)= 100;
			motor(motorC) = -100;
			wait1Msec(500);
		}
	}



}
